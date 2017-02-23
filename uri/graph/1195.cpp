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
    new_node = (node*) malloc (sizeof (node));
    new_node -> value = k;
    new_node -> l = new_node -> r = NULL;
    
    return new_node;
}

tree insert(tree t, node* new_node){
    node* current_node;
    node* temp;
    
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
        
    return t;
}

void left_root_right(tree t){
    
    if(t != NULL){
        left_root_right(t->l);
        printf(" %d", t->value);
        left_root_right(t->r);
    }
    
}

void root_left_right(tree t){
    
    if(t != NULL){
        printf(" %d", t->value);
        root_left_right(t->l);
        root_left_right(t->r);
    }
    
}

void left_right_root(tree t){
    
    if(t != NULL){
        left_right_root(t->l);
        left_right_root(t->r);
        printf(" %d", t->value);
    }
   
}

int main(){
    
    int n, x, y;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; ++i){
        printf("Case %d:\n", i);
        tree t = NULL;
        scanf("%d", &x);
        while(x--){
            scanf("%d", &y);
            t = insert(t, create_node(y));
        }
        printf("Pre.:");
        root_left_right(t);
        printf("\n");
        
        printf("In..:");
        left_root_right(t);
        printf("\n");
        
        printf("Post:");
        left_right_root(t);
        printf("\n\n");
        
    }
    
    
    return 0;
}