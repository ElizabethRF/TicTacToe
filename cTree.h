#pragma once
#include "cNode.h"

#ifndef __TREE
#define __TREE


class Tree{
public:
    Tree(Node* r, char player);
    ~Tree();
    
    Node* root;
    void processNode(Node* n, char p);
    void updateUtility();
};
#endif 
