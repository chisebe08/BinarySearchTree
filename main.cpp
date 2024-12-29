// main.cpp
#include "bst.h"
#include <iostream>

int main() {
    BST tree;
    int choice, value;

    while (true) {
        std::cout << "\n1. Insert\n2. In-Order Traversal\n3. Pre-Order Traversal\n4. Post-Order Traversal\n5. Search\n6. Delete\n7. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter value to insert: ";
            std::cin >> value;
            tree.insert(value);
            break;
        case 2:
            tree.inOrderTraversal();
            break;
        case 3:
            tree.preOrderTraversal();
            break;
        case 4:
            tree.postOrderTraversal();
            break;
        case 5:
            std::cout << "Enter value to search: ";
            std::cin >> value;
            if (tree.search(value)) {
                std::cout << "Value found.\n";
            } else {
                std::cout << "Value not found.\n";
            }
            break;
        case 6:
            std::cout << "Enter value to delete: ";
            std::cin >> value;
            tree.deleteNode(value);
            break;
        case 7:
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
