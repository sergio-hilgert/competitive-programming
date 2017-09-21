# include <bits/stdc++.h>

using namespace std;

int main(){

    int correct, soma = 0, resp;
    cin>> correct;

    for(int i = 0; i < 5; ++i){
        cin>> resp;
        if (resp == correct)
            ++soma;
    }
    cout<< soma<< endl;


}
