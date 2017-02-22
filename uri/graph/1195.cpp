#include <bits/stdc++.h>

using namespace std;


struct cel{
    int value;
    struct cel *r;
    struct cel *l;
};

typedef struct cel node;
typedef node* tree;


node* create_node(int k){
    node* new_node;
    new_node = (node*) malloc (sizeof node);
    new_node -> value = k;
    new_node -> l = new_node -> r = NULL;
    
    return new_node;
}

tree insert(tree t, node* new_node){
    node* current_node, temp;
    
    if (t == NULL) return new_node;
    
    current_node = t;
    
    while(current_node != NULL){
        temp = current_node;
        
        if(current_node->value > new_node->value)
            current_node = current_node->l;
        else
            current_node = current_node->r;
        
    }
    
    if(temp->value > new_node->value)
        temp->l = new_node;
    else
        temp->r = new_node;
}

int main(){
    
    
    
    return 0;
}