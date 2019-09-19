#pragma once 
#include "cNode.h"

#define SIZE 10  // 0000XXX__\0

#ifndef __TREE
#define __TREE 


class Tree{
  public:
    Tree(Node* r);
    ~Tree();

    Node* root; 
    void processNode(Node* n, char p); 
};
#endif 