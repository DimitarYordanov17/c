#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* 
Write a program that prints the distinct words in its input sorted into decreasing order of frequency of
occurrence. Precede each word by its count.
*/

#define MAXWORDLENGTH 20
#define MAXWORDS 100

struct Node {
    int count;
    char *word;
    struct Node *left;
    struct Node *right;
};

int readwords(char *words[]);

struct Node *build_tree(char *words[], int total_words);

void visualise_tree(struct Node *root);

struct Node *talloc();

int main () {
    char *words[MAXWORDS];
    int total_words;

    struct Node *root;

    total_words = readwords(words);
    
    root = build_tree(words, total_words);

    visualise_tree(root); 
}

void add_node(struct Node *node, char *word) {
    int strcmp_result;

    strcmp_result = strcmp(node->word, word);

    if (strcmp_result == 0)//(strcmp_result == 0)
        node->count++;
    else if (strcmp_result > 0) {
        if (node->left == NULL) {
            node->left = talloc();
            node->left->word = word;
            node->left->count = 1;
            node->left->left = node->left->right = NULL;
        }
        else
            add_node(node->left, word);
    }
    else {
        if (node->right == NULL) {
            node->right = talloc();
            node->right->word = word;
            node->right->count = 1;
            node->right->left = node->right->right = NULL;
        }
        else
            add_node(node->right, word);
    }

   return; 
}

struct Node *talloc() {
    return (struct Node *) malloc(sizeof(struct Node));
}

struct Node *build_tree(char *words[], int total_words) {
    struct Node *root;
    char *current_word;
    
    root = talloc();

    root->count = 1;
    root->word = words[0];
    root->left = root->right = NULL;
    
    for (int i = 1; i < total_words; i++) {
        current_word = words[i];
        add_node(root, current_word);
    }
   
    return root;
}

void visualise_tree(struct Node *node) {
    if (node != NULL) {
        visualise_tree(node->left);
        printf("Occurrences: %d, Word: %s\n", node->count, node->word);
        visualise_tree(node->right);
    }
}

int readwords(char *words[]) {
    int c;
    char *p;
    char *p_base;
    int total_words = 0;

    p = malloc(MAXWORDLENGTH);
    p_base = p;

    while ((c = getchar()) != EOF) {
          if (c == ' ' || c == '\n') {
              *p = '\0';
              *words++ = p_base;
              total_words++;

              p = p_base = malloc(MAXWORDLENGTH);
          } 
          else 
              *p++ = c;
          
    }

    return total_words;
}
