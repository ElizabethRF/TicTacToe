#include "cTree.h"
#include <iostream>

Tree::Tree(Node* x, char player){
    root = x;
    printf("Start of tree");
    processNode(root,player);
    
}

Tree::~Tree(){
    
}

void Tree::processNode(Node* n, char p){
    //n->print();
    int size = 4;
    // 1. Read the contents of n
    char* play = n->payload;
    int children = 0;
    // 2. Figure out how many children this node should have
    for(int i = 0; i<size; i++){
        char item = play[i];
        if(item == '_'){
            children++;
        }
    }
    
    // Validate if someone won
    bool winner = false;
    
    if(children <= 2){
        //int win_combinations[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
        int win_combinations[6][2] = {{0,1},{2,3},{0,3},{1,2},{0,2},{1,3}};
        
        for(int i = 0; i < 6; i++){
            if((play[win_combinations[i][0]] == play[win_combinations[i][1]])  && play[win_combinations[i][0]]!= '_'){//== play[win_combinations[i][2]]
                winner = true;
            }
        }
    }
    if(children == 0){
        // assign utility values
        if(winner){
            if(p == 'x'){ // current player is x but last player was y so y won
                n->utility = -1;
            }else{ // current player is o but last player was x so x won
                n->utility = 1;
            }
        }else{
            n->utility = 0;
        }
        
        // trace back
        
        //}else if(children <= 4){
    }
    
    
    if(!winner){
        // 4. Create them(this is parent)
        // 4.1 Tell them whose turn it is
        for(int i = 0; i<size; i++){
            char next = p;
            char* new_play = n->payload;
            char item = new_play[i];
            if(item == '_'){
                new_play[i] = next;
                printf(" new play: %s \n ",new_play);
                Node* ch  = new Node(new_play);
                //n->next->append(ch); // parent -> child
                n->next.push_back(ch);
                printf("\nLISTA\n");
                //n->next->print();
                ch->prev = n;  // child -> parent
                new_play[i] = '_';
                
                // 5. Call processNode for each child
                if(p=='x'){
                    next = 'o';
                }
                else{
                    next = 'x';
                }
                
                
                processNode(ch,next);
            }
        }
        
    }
    
    
}


void Tree::updateUtility(){
    printf("\nsos\n");
    
}
