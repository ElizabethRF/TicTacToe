#include <iostream>
#include "cNode.h"
#include "cLinkedList.h"

int main(int argc,char* argv[]) {
  std::cout << "Hello World!\n";
  Node* n1 = new Node((char *)"000000000\0");

  LinkedList* l1 = new LinkedList(n1);
  l1->append(n1); 

  l1->print();
  system("pause");
  return 0; 
}