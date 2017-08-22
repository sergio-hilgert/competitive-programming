# include <bits/stdc++.h>
# define pii pair <int, int>

using namespace std;

int main(){
    
    int a, b, c, d;
    
    vector <pii> v;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a >= b)
        v.push_back(pii(a,b));
    else
        v.push_back(pii(b,a));
    
    if (c >= d)
        v.push_back(pii(c,d));
    else
        v.push_back(pii(d,c));
    
    sort(v.begin(), v.end());
    
    if(v[0].second + v[1].second >= v[0].first)
        printf("%d\n", v[0].first * v[0].first);
    else
        printf("%d\n", (v[0].second + v[1].second) * (v[0].second + v[1].second));
    
    
    return 0;
}