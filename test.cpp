// test.cpp
#include "bst.h"
#include <cassert>

void testInsertAndSearch() {
    BST tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    assert(tree.search(10) == true);
    assert(tree.search(5) == true);
    assert(tree.search(15) == true);
    assert(tree.search(20) == false);
}

void testDelete() {
    BST tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.deleteNode(10);
    assert(tree.search(10) == false);
    assert(tree.search(5) == true);
    assert(tree.search(15) == true);
}

int main() {
    testInsertAndSearch();
    testDelete();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
