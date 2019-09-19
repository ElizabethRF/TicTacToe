#include "cNode.h"

Node::Node(){
  int utility = 0; 
  for(int i = 0;i<SIZE;i++){
    payload[i] = ' '; 
  }
  next = nullptr; 
}

Node::Node(char* pl)
{
  for(int i = 0; i < SIZE; i++){
    payload[i] = pl[i]; 
  }
  next = nullptr; 
}

void Node::print()
{
  printf("%s\n",payload);
}

Node::~Node(){

}