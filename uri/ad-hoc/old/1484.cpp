#include <bits/stdc++.h>

using namespace std;


int main(){
	
	double value;
	string n, m, tmp;
	int two_lastn, two_lastm;
	bool four, three, two, two_group;
	
	while(scanf("%lf", &value)){
		four = three = two = two_group = false;
		cin >> n >> m;
		if(!value && n == "0" && m == "0") break;
		
		while(n.size() < 4){
			n = '0' + n;
		}
		
		while(m.size() < 4){
			m = '0' + m;
		}
		tmp = n.substr(n.size()-2, 2);
		if(tmp == "00")
			tmp = "100";
		two_lastn = atoi(tmp.c_str());
		tmp = m.substr(m.size()-2, 2);
		if(tmp == "00")
			tmp = "100";
		two_lastm = atoi(tmp.c_str());
		
		if(abs(two_lastn - two_lastm) < 4)
			two_group = true;
		
		if(n.substr(n.size()-2, 2) == m.substr(m.size()-2, 2))
			two = true;
			
		if(n.substr(n.size()-3, 3) == m.substr(m.size()-3, 3))
			three = true;
		
		if(n.substr(n.size()-4, 4) == m.substr(m.size()-4, 4))
			four = true;
		
		//cout << four << " " << three << " " << two << " " << two_group << endl;
		
		if(four){
			printf("%.2lf\n", value * 3000.00);
		}else if(three){
			printf("%.2lf\n", value * 500.00);
		}else if(two){
			printf("%.2lf\n", value * 50.00);
		}else if(two_group){
			printf("%.2lf\n", value * 16.00);
		}else{
			printf("0.00\n");
		}
	}
	
	
	return 0;
}