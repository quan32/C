#ifndef tree_h
#define tree_h

#include <stdio.h>

typedef struct node Node;

extern Node *initTree();
extern Node *createNewNode(int val);
extern Node *findParent(Node *T, int val);
extern Node *addNode(Node *T, int val);
extern void traverse(Node *T);
extern void getArray(Node *T, int arr[], int *num, int *pos);
extern void getSum(Node *T, unsigned int *sum, unsigned int *num, unsigned int *pos);

#endif /* tree_h */
