 #include "cTree.h"

Tree::Tree(Node* x){
  root = new Node((char *)"_________\0");
  processNode(root,'x');
}

Tree::~Tree(){

}

void Tree::processNode(Node* n, char p){
  // 1. Read the contents of n 
  char* play = n->payload; 
  int children = 0; 
  // 2. Find out how many plays it has 
  // 3. Figure out how many children this node should have
  for(int i = 0; i<9; i++){
      char item = play[i]; 
      if(item == '_'){
        children++; 
      }

  }

  // Validate if someone won 
  bool winner = false; 
  if(children == 0){
    // assign utility values 
    // trace back 
  }else if(children <= 4){
    int win_combinations[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};

    for(int i = 0; i < sizeof(win_combinations); i++){
      if(play[win_combinations[i][0]] == play[win_combinations[i][1]] == play[win_combinations[i][0]] && play[i]!= '_'){
        winner = true; 
      }
    }
  }
  
  if(!winner){
    // 4. Create them(this is parent)
    // 4.1 Tell them whose turn it is  
    // 5. Call processNode for each child 

  }

  }
  


}
