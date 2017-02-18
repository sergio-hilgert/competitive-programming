# include <bits/stdc++.h>

using namespace std;

int main(){

    string hora, temp;
    int h, m;

    while(cin>> hora){
        if(hora.size() >= 5){
            temp = hora.substr(0,2);
             h = atoi(temp.c_str());
             temp = hora.substr(3,2);
             m = atoi(temp.c_str());
        }
        else{
            temp = hora[0];
            h = atoi(temp.c_str());
            temp = hora.substr(2,2);
            m = atoi(temp.c_str());
        }
       if(h+1 >= 8){

        cout<< "Atraso maximo: "<< ((h+1) - 8) * 60 + m<< endl;
       }
       else {
        cout<< "Atraso maximo: "<< 0<< endl;

       }
   }


}
