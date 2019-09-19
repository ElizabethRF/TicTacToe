#include "cLinkedList.h"

LinkedList::LinkedList(){
  anchor = nullptr; 
}

LinkedList::LinkedList(Node* a){
  anchor = a; 
  anchor->next = nullptr; 
}

LinkedList::~LinkedList(){
}


void LinkedList::append(Node* n)
{
  if(anchor != nullptr){
    Node* current = anchor; 
    while(current->next != nullptr){
      current = current->next; 
    }
    current->next= n; 
    n->next = nullptr;
  }
  else{
    anchor = n; 
    anchor->next = nullptr;
  }
}

void LinkedList::print(){
  printf("LIST::BEGIN\n");
  Node* current = anchor; 
  while(current != nullptr){
    current->print(); 
    current = current->next; 
  }
  printf("LIST::END\n");
}