# include <bits/stdc++.h>

using namespace std;

int main(){

    int h, n, p1 = 0, p2 = 0, i;

    scanf("%d %d", &h, &n);
    int jumps[n];

    cin>> jumps[0];
    for(i = 1; i < n; ++i){
        cin>> jumps[i];
        if(abs(jumps[i-1] - jumps[i]) > h){
            cout<< "GAME OVER"<< endl;
            break;
        }
    }
    if(i >= n) cout<< "YOU WIN"<< endl;
}
