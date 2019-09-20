#pragma once
#include <stdio.h>
#include <vector>


#define SIZE 5  // 0000XXX__\0

#ifndef __NODE
#define __NODE

class Node{
public:
    Node();
    Node(char* pl);
    ~Node();
    
    void print(void);
    //Node* next;//[SIZE];
    std::vector<Node*> next;
    Node* prev;
    char payload[SIZE];
    int utility;
    
    
    
};
#endif 
