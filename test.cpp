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
// test.cpp (additional code)
void testFindMinMaxHeight() {
    BST tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);

    assert(tree.findMin()->data == 3);
    assert(tree.findMax()->data == 15);
    assert(tree.height() == 2);
}

int main() {
    testInsertAndSearch();
    testDelete();
    testFindMinMaxHeight();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}

int main() {
    testInsertAndSearch();
    testDelete();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
