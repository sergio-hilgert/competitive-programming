#include <bits/stdc++.h>
#define pii pair<int, int>
#define pip pair<int, pii>
#define parent first
#define weight second
using namespace std;

vector <pip> graph;
pii pw[200010]; //parent and weight
int v, a;
long int soma;

int ufind(int x){
    if(x == pw[x].parent) return x;
    return pw[x].parent = ufind(pw[x].parent);
}

int union_find(int x, int y){
    x = ufind(x);
    y = ufind(y);
    
    if(x == y) return 0;
    
    if(pw[x].weight >= pw[y].weight){   //union sets
        pw[y].parent = x;                //join to parent to the big set 
        pw[x].weight += pw[y].weight;   //add weight to that set
    }else{
        pw[x].parent = y;                //join to parent to the big set
        pw[y].weight += pw[x].weight;   //add weight to that set
    }
    
    return 1;
}

long int kruskal(){
    sort(graph.begin(), graph.end());
    long int distance = 0, mst_size = 0; // minimum spanning tree size (max is equal edges -1)
    
    for(int i = 0; i < graph.size(); ++i){
        if(union_find(graph[i].second.first, graph[i].second.second)){
            ++mst_size;
            distance += graph[i].first;
        }
        
        if(mst_size == v-1)
            break;
    }
    
    return distance;
}

void reset(){
    soma = 0;
    graph.clear();
    for(int i = 0; i <= v; ++i){
        pw[i].parent = i;
        pw[i].weight = 1; // inicialize weight with 1
    }
}

int main(){
    int x, y, p;
    
    while(scanf("%d %d", &v, &a) && (v || a)){
        reset();
        
        while(a--){
            scanf("%d %d %d", &x, &y, &p);
            soma += p;
            graph.push_back(make_pair(p, make_pair(x, y)));
        }
        
        printf("%ld\n", soma - kruskal());
    }
    
    
    return 0;
}