# include <bits/stdc++.h>

using namespace std;

int main(){

    int n[4];

    cin>> n[0] >>n[1]>> n[2]>> n[3];

    sort(n, n + 4);

    if(n[0] + n[1] > n[2])
        cout<< "S"<< endl;
    else if (n[1] + n[2] > n[3])
        cout<< "S"<< endl;
    else
        cout<< "N"<< endl;


}
