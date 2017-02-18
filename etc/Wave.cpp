#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
 
void dfs(TreeNode* oldList){
	struct TreeNode *temp = NULL;
    
    if(oldList == NULL)return;

    if(oldList-> left){
	    dfs(oldList-> left);
	    
		if(oldList-> right){
	        dfs(oldList-> right);
	    }
	    
	    temp = oldList-> left;
	    
	    while(temp-> right){
	        temp = temp-> right;
	    }
	    
	    temp-> right = oldList-> right;
	    oldList-> right = oldList-> left;
	    oldList-> left = NULL;
	}else{
		dfs(oldList->right);
	}

}

void dfsR(TreeNode * x){
	if(x != NULL){
		cout << x -> val << endl;
		dfsR(x->right);
	}
}

int main(){
	struct TreeNode* A = new TreeNode(1);
	A -> left =  new TreeNode(2);	
	A -> left -> left = new TreeNode(3);	
	A -> left -> right = new TreeNode(4);	
	A -> right = new TreeNode(5);	
	A -> right -> right = new TreeNode(6);

	dfs(A);
	dfsR(A);

		

	return 0;
	
}