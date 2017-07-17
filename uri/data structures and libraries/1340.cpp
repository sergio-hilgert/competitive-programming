#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x, y, isQ, isS, isPQ;
	
	stack<int> s;
	queue<int> q;
	priority_queue<int> pq;
	
	while(scanf(" %d", &n) != EOF){
		while(!s.empty()) s.pop();
		while(!q.empty()) q.pop();
		while(!pq.empty()) pq.pop();
		isQ = isS = isPQ = 1;
		while(n--){
			scanf(" %d %d", &x, &y);
			if(x == 1){
				q.push(y);
				s.push(y);
				pq.push(y);
			}else{
				if(q.empty()) isQ = 0;
				else{
					if(q.front() != y)
						isQ = 0;
					q.pop();
				}
				
				if(s.empty()) isS = 0;
				else{
					if(s.top() != y)
						isS = 0;
					s.pop();
				}
				
				if(pq.empty()) isPQ = 0;
				else{
					if(pq.top() != y)
						isPQ = 0;
					pq.pop();
				}
			}
		}
		if(isQ + isPQ + isS > 1){
			printf("not sure\n");
		}else if (isQ + isPQ + isS == 0){
			printf("impossible\n");
		}else if(isQ){
			printf("queue\n");
		}else if(isS){
			printf("stack\n");
		}else if(isPQ){
			printf("priority queue\n");
		}
	}
	return 0;
}