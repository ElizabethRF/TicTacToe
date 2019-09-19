#pragma once 
#include <stdio.h>

#define SIZE 10  // 0000XXX__\0

#ifndef __NODE 
#define __NODE 

class Node{
public: 
  Node();
  Node(char* pl);
  ~Node();

  void print(void); 
  Node* next; 
  char payload[SIZE]; 
  int utility; 

}; 
#endif 