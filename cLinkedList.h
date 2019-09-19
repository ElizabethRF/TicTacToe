#pragma once 
#include "cNode.h"

#ifndef __LINKDED_LIST
#define __LINKED_LIST 

class LinkedList{
public: 
  LinkedList();
  LinkedList(Node* a);
  ~LinkedList(); 

  void append(Node* n); 
  void print(void);
 
  Node* anchor; 

}; 
#endif 