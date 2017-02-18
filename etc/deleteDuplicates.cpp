#include <bits/stdc++.h>

using namespace std;

 struct ListNode {
      int val;
      ListNode* next;
      ListNode(int x) : val(x), next(NULL) {}
  };

void printListNode(ListNode* A){
	if(A == NULL) return;
  cout << A->val << endl;
	printListNode(A->next);
}

int main(){
	
	ListNode* A = new ListNode(1);

	A->next = new ListNode(1);
	A->next->next = new ListNode(2);
	A->next->next->next = new ListNode(2);
	A->next->next->next->next  = new ListNode(3);
	
  ListNode* start = A;
  ListNode* temp = A->next;

  while(temp != NULL){
    if(temp->val == start->val){
      start->next = temp->next;
      temp = temp->next;
    }else{
      start = temp;
      temp = temp->next;
    }
  }

  printListNode(A);

	return 0;
}