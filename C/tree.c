#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


struct node {
    int val;
    struct node *left;
    struct node *right;
};

Node *initTree() {
    Node *T = NULL;
    
    return T;
}

Node *createNewNode(int val) {
    Node * new = (Node*) malloc(sizeof(struct node));
    if (new ==NULL) {
        printf("can not alloc memory\n");
        exit(-1);
    }
    
    new->val    = val;
    new->left   = NULL;
    new->right  = NULL;
    
    return new;
}

Node *findParent(Node *T, int val) {
    Node *ptr   = T;
    Node *tmp;
    int  current_value = 0;

    while (1) {
        tmp             = ptr;
        current_value   = ptr->val;
        
        if (val <= current_value) {
            ptr         = ptr->left;
        } else {
            ptr         = ptr->right;
        }
        
        if (ptr == NULL) {
            break;
        }
    }
    
    return tmp;
}

Node *addNode(Node *T, int val) {
    
    Node * new = createNewNode(val);
    
    if (T==NULL) {
        T = new;
        return T;
    }
    
    Node *parent = findParent(T, val);
    if (val <= parent->val) {
        parent->left    = new;
    } else {
        parent->right   = new;
    }
    
    return T;
}

void traverse(Node *T) {
    if (T== NULL) {
        return;
    }
    
    traverse(T->left);
    printf("%d ", T->val);
    traverse(T->right);
}

void getArray(Node *T, int arr[], int *num, int *pos) {
    if (T== NULL) {
        return;
    }
    
    getArray(T->left, arr, num, pos);
    
    if (*num > 0) {
        arr[*pos] = T->val;
        --(*num);
        ++(*pos);
    }
    
    getArray(T->right, arr, num, pos);
    
    return;
}

void getSum(Node *T, unsigned int *sum, unsigned int *num, unsigned int *pos) {
    if (T== NULL) {
        return;
    }
    
    getSum(T->left, sum, num, pos);
    
    if (*num > 0) {
        *sum += T->val;
        --(*num);
        ++(*pos);
    }
    
    getSum(T->right, sum, num, pos);
    
    return;
}
