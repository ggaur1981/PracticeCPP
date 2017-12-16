#include <iostream>
#include <iomanip>
using namespace std;

typedef struct node {
    int value;
    node *pLeft;
    node *pRight;
    node(int val = 0) {
        value = val;
        pLeft = NULL;
        pRight = NULL;
    }
} node;

void insert(node **pRoot, int val) {
    if (*pRoot == NULL) {
        *pRoot = new node(val);
    } else if ((*pRoot)->value <= val) {
        insert(&((*pRoot)->pRight), val);
    } else {
        insert(&((*pRoot)->pLeft), val);
    }
}

void inOrder(node *pRoot) {
    if (pRoot && pRoot->pLeft)
        inOrder(pRoot->pLeft);
    if (pRoot)
        cout << setw(3) << pRoot->value << ",";
    if (pRoot && pRoot->pRight)
        inOrder(pRoot->pRight);
}

void preOrder(node *pRoot) {
    if (pRoot)
        cout << setw(3) << pRoot->value << ",";
    if (pRoot && pRoot->pLeft)
        preOrder(pRoot->pLeft);
    if (pRoot && pRoot->pRight)
        preOrder(pRoot->pRight);
}

void postOrder(node *pRoot) {
    if (pRoot && pRoot->pLeft)
        postOrder(pRoot->pLeft);
    if (pRoot && pRoot->pRight)
        postOrder(pRoot->pRight);
    if (pRoot)
        cout << setw(3) << pRoot->value << ",";
}
        

node *getBST(int *arr, int size) {
    node *pRoot = NULL;
    for (int i = 0; i < size; i++) {
        insert(&pRoot, arr[i]);
    }
    return pRoot;
}

int main() {
    int arr[] = {10, 5, 15, 5, 6, 7, 8, 89 };
    node *pRoot = getBST(arr, sizeof(arr)/sizeof(int));
    cout << left << setw(30) << "In-order tree traversal : ";
    cout << right;
    inOrder(pRoot);
    cout << endl;
    cout << left << setw(30) << "Pre-order tree traversal : ";
    cout << right;
    preOrder(pRoot);
    cout << endl;
    cout << left << setw(30) << "Post-order tree traversal : ";
    cout << right;
    postOrder(pRoot);
    cout << endl;
    return 0;
}

/* Output

In-order tree traversal :       5,  5,  6,  7,  8, 10, 15, 89,
Pre-order tree traversal :     10,  5,  5,  6,  7,  8, 15, 89,
Post-order tree traversal :     8,  7,  6,  5,  5, 89, 15, 10,

*/
