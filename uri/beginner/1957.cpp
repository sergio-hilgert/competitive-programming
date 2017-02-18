# include <bits/stdc++.h>

using namespace std;

int main(){

    char hexa[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    long long int a;
    vector <int> resp;

    cin>> a;

    while(a > 0){
        resp.push_back(a%16);
        a /= 16;
    }
    for(int i = resp.size() - 1; i >= 0; --i){
        if(resp[i] >= 10 && resp[i] < 16){
            cout<< hexa[resp[i]%10];
        }else
            cout<< resp[i];
    }
    cout<< endl;
}
