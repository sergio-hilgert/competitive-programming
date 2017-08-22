# include <bits/stdc++.h>

using namespace std;

int main(){
    
    map <string, int> trees;
    int n, cont = 0;
    double total = 0;
    string tree;
    
    cin>> n;
    cin.clear();
    cin.ignore();
    
    n *= 2;
    while(n--){
        total = 0;
        trees.clear();
        while(getline(cin, tree)){
            if(tree.compare("") == 0){
              ++cont;
              break;
            } 
            else{
                if(trees.find(tree) != trees.end())
                    ++trees[tree];
                else
                    trees[tree] = 1;
                ++total;
            }
        }
        if(trees.size() > 0){
            for(map <string, int> :: const_iterator iter = trees.begin(); iter != trees.end(); ++iter){
            
                printf("%s %.4f\n", iter->first.c_str(), iter->second * 100.0 / total);
            }
            if(n>=cont) cout<< endl;
            
        }
        
       
    }
}