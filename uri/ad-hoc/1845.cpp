# include <bits/stdc++.h>

using namespace std;


int main(){
    char c;
    char ant = 0;
    string s = "";

    while(scanf("%c", &c) != EOF){
        if(c == 'p' || c == 'P' || c == 'j' || c == 'J' || c == 's' || c == 'S' || c == 'v' || c == 'V' || c == 'b' || c == 'B' || c == 'X' || c == 'x' || c == 'f' || c == 'F' || c == 'z' || c == 'Z'){
            if(ant != 'F' && ant != 'f'){
                if(c >= 65 && c <= 90)
                    c = 'F';
                else
                    c = 'f';
                ant = c;
                printf("%c", c);
            }

        }
        else{
            ant = c;
            printf("%c", c);
        }
    }

    return 0;
}
