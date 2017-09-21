# include <bits/stdc++.h>

using namespace std;

int main(){


    string input;
    string output = "0.00000";
    double fInput;
    char sinalN;
    char sinalE;
    int j = 0, E = 0, i = 0 , c = 0, v = 1, y = 0;

    cin>> input;

    if(input[0] == '-'){
        sinalN = '-';
    }else
        sinalN = '+';

    for(i = 0; i < input.size() ; ++i){
        if(j >= 7) break;
        if(input[i] != '0' && j == 0 && input[i] != '.' && input[i] != '+' && input[i] != '-'){
            output[0] = input[i];
            j = 2;
            y = i;
            continue;
        }
        if(j>0 && input[i] != '.'){
            output[j] = input[i];
            ++j;
        }

    }


   if(input.find('.') == string::npos){
        if(input[0] == '-' || input [0] == '+')
            E = input.size()-2;
        else
            E = input.size()-1;
        sinalE = '+';
   }
    else{
        for(int p = input.find('.'); p < y; ++p)
            ++c;
        for(int p = 0; p < input.find('.'); ++p){
            if(input[p] != '0' && input[p] != '+' && input[p] != '-')
                v = 0;
        }

        if(v){
            E = c;
            sinalE = '-';

        }else{
            if(input[0] == '-' || input [0] == '+')
                E = input.find('.')-2;
            else
                E = input.find('.')-1;
            sinalE = '+';
        }
    }

    fInput = atof(output.c_str());

    printf("%c%.4fE%c%02d\n",sinalN,fInput,sinalE,E);



}
