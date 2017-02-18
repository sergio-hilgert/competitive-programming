# include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    cin>> n;

    while(n--){
        cin>> x;
        if(x >= 2015)
            cout<< x - 2014<< " A.C."<< endl;
        else
            cout<< 2015 - x<< " D.C."<< endl;
    }

}
