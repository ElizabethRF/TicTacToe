#include <iostream>
#include "cNode.h"
#include "cTree.h"

int main(int argc,char* argv[]) {
    std::cout << "Holi!\n";
    Node* n1 = new Node("____\0");
    Tree* tree = new Tree(n1, 'x');
    //tree->updateUtility();
    
    //system("pause");
    return 0;
}
