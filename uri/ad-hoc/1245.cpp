#include <bits/stdc++.h>
#define pii pair<int, int>
#define pp pair<pci,pci>
#define s second
#define f first

using namespace std;

int main(){
	
	int n, x, resp;
	char c;
	map< int, pii > m;

	while(scanf("%d", &n) != EOF){
		resp = 0;
		m.clear();
		while(n--){
			scanf("%d %c", &x, &c);
			if(m.find(x) != m.end()){
				if(c == 'E'){
					if(m[x].s){
						--m[x].s;
						resp++;
					}
					else
						++m[x].f;
				}else{
					if(m[x].f){
						--m[x].f;
						resp++;
					}
					else
						++m[x].s;
				}
			}else{
				if(c == 'E')
					m[x] = pii(1,0);
				else
					m[x] = pii(0,1);

			}
		}
		cout << resp << endl;
	}

	return 0;
}