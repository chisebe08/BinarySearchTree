
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
// bst.h (additional code)
void preOrderTraversal(Node* node) const {
    if (node == nullptr) return;
    std::cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

void preOrderTraversal() const {
    preOrderTraversal(root);
}
// bst.h (additional code)
void postOrderTraversal(Node* node) const {
    if (node == nullptr) return;
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    std::cout << node->data << " ";
}

void postOrderTraversal() const {
    postOrderTraversal(root);
}
// bst.h (additional code)
bool search(Node* node, int val) const {
    if (node == nullptr) return false;
    if (node->data == val) return true;
    if (val < node->data) return search(node->left, val);
    return search(node->right, val);
}

bool search(int val) const {
    return search(root, val);
}
// bst.h (additional code)
Node* deleteNode(Node* node, int val) {
    if (node == nullptr) return node;

    if (val < node->data) {
        node->left = deleteNode(node->left, val);
    } else if (val > node->data) {
        node->right = deleteNode(node->right, val);
    } else {
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }

        Node* temp = findMin(node->right);
        node->data = temp->data;
        node->right = deleteNode(node->right, temp->data);
    }
    return node;
}

Node* findMin(Node* node) {
    while (node->left != nullptr) node = node->left;
    return node;
}

void deleteNode(int val) {
    root = deleteNode(root, val);
}
// bst.h (additional code)
Node* findMin() const {
    Node* current = root;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

// bst.h (additional code)
Node* findMax() const {
    Node* current = root;
    while (current && current->right != nullptr) {
        current = current->right;
    }
    return current;
}


};

#endif
