
#ifndef BST_H
#define BST_H

#include "node.h"
#include <iostream>

class BST {
private:
    Node* root;

    void insert(Node*& node, int val) {
        if (node == nullptr) {
            node = new Node(val);
        } else if (val < node->data) {
            insert(node->left, val);
        } else {
            insert(node->right, val);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        insert(root, val);
    }
// bst.h (additional code)
void inOrderTraversal(Node* node) const {
    if (node == nullptr) return;
    inOrderTraversal(node->left);
    std::cout << node->data << " ";
    inOrderTraversal(node->right);
}

void inOrderTraversal() const {
    inOrderTraversal(root);
}

};

#endif
