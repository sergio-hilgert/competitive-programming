#include <bits/stdc++.h>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct ListNode* detectCycle(ListNode* A) {
    struct ListNode* slow = A;
    struct ListNode* fast = A->next;
    
    while(fast && fast->next){
    	if(slow == fast)
    		break;
    	slow = slow->next;
    	fast = fast->next->next;
    }

    if(slow == fast){
    	
    	slow = A;

    	while(slow != fast -> next){
    		slow = slow-> next;
    		fast = fast -> next;
    	}
    	
    	return slow;
    }

    return NULL;
    
}

int main(){
	
	struct ListNode* x1;

	x1 = new ListNode(1);
	x1->next = new ListNode(2);
	x1->next->next = new ListNode(3);
	x1->next->next->next = new ListNode(4);
	x1->next->next->next->next = x1->next;

	struct ListNode* teste = detectCycle(x1);

	cout << teste->val << endl;
	return 0;
}