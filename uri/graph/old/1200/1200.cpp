#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 64;

typedef long long huge;

struct {
  char value;
  int left;
  int right;
} tree[maxn];

int tree_size;
vector<char> resp;

void insert(char c, int position, bool left, bool right){
  tree[tree_size].value = c;
  tree[tree_size].left = -1;
  tree[tree_size].right = -1;
  
  if(left)
    tree[position].left = tree_size;
  
  if(right)
    tree[position].right = tree_size;
  
  ++tree_size;
}

void find_insert(char c){
  if(!tree_size){
    insert(c, 0, false, false);
  }else{
    int position = 0;
    while(1){
      if(tree[position].value > c){
	if(tree[position].left == -1){
	  insert(c, position, true, false);
	  return;
	}
	position = tree[position].left;
      }else{
	if(tree[position].right == -1){
	  insert(c, position, false, true);
	  return;
	}
	position = tree[position].right;
      }
    }
  }
}

void check(char c){
  int position = 0;
  while(1){
    if(tree[position].value == c){
      printf("%c existe\n", c);
      return;
    }
    if(tree[position].value > c){
      if(tree[position].left == -1){
	printf("%c nao existe\n", c);
	return;
      }
      position = tree[position].left;
    }else{
      if(tree[position].right == -1){
	printf("%c nao existe\n", c);
	return;
      }
      position = tree[position].right;
    }
  }
}

void erd(int position){
  if(tree[position].left != -1)
    erd(tree[position].left);
  resp.push_back(tree[position].value);
  if(tree[position].right != -1)
    erd(tree[position].right);
}

void edr(int position){
  if(tree[position].left != -1)
    edr(tree[position].left);
  if(tree[position].right != -1)
    edr(tree[position].right);
  resp.push_back(tree[position].value);
}

void red(int position){
  resp.push_back(tree[position].value);
  if(tree[position].left != -1)
    red(tree[position].left);
  if(tree[position].right != -1)
    red(tree[position].right);
}

void print(string str){
  resp.clear();
  if(str == "INFIXA")
    erd(0);
  else if(str == "POSFIXA")
    edr(0);
  else
    red(0);
  for(int i = 0; i < resp.size(); ++i){
    if(i == 0)
      printf("%c", resp[i]);
    else
      printf(" %c", resp[i]);
  }
  printf("\n");
}

int main(){

  string query;
  tree_size = 0;
  while(getline(cin, query)){
    //cout << "teste " << endl;
    if(query.substr(0, 2) == "I "){
      //cout << query[query.size()-1] << endl;
      find_insert(query[query.size()-1]);
    }else if(query.substr(0, 2) == "P "){
      check(query[query.size()-1]);
    }else{
      print(query);
    }      
  }
  
  return 0;
}
