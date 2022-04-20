#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char *word;
    struct node *left;
    struct node *right;
};

void PreOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%s\n", root->word);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void DeleteNode(struct node **root, char *word)
{
    if (*root == NULL)
        return;
    if (strcmp((*root)->word, word) < 0)
        DeleteNode(&(*root)->left, word);
    else if (strcmp((*root)->word, word) > 0)
        DeleteNode(&(*root)->right, word);
    else
    {
        if ((*root)->left == NULL && (*root)->right == NULL)
        {
            free((*root)->word);
            free(*root);
            *root = NULL;
        }
        else if ((*root)->left == NULL)
        {
            struct node *temp = *root;
            *root = (*root)->right;
            free(temp->word);
            free(temp);
        }
        else if ((*root)->right == NULL)
        {
            struct node *temp = *root;
            *root = (*root)->left;
            free(temp->word);
            free(temp);
        }
        else
        {
            struct node *temp = (*root)->right;
            while (temp->left != NULL)
                temp = temp->left;
            char *temp_word = (*root)->word;
            (*root)->word = temp->word;
            temp->word = temp_word;
            DeleteNode(&(*root)->right, temp_word);
        }
    }
}

void main()
{
    struct node *root = NULL;
    char word[100];
    while (scanf("%s", word) != EOF)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->word = (char *)malloc(sizeof(word));
        strcpy(newNode->word, word);
        newNode->left = NULL;
        newNode->right = NULL;
        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            struct node *current = root;
            while (1)
            {
                if (strcmp(word, current->word) < 0)
                {
                    if (current->left == NULL)
                    {
                        current->left = newNode;
                        break;
                    }
                    else
                    {
                        current = current->left;
                    }
                }
                else
                {
                    if (current->right == NULL)
                    {
                        current->right = newNode;
                        break;
                    }
                    else
                    {
                        current = current->right;
                    }
                }
            }
        }
    }
    PreOrder(root);
}