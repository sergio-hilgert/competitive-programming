# include <bits/stdc++.h>

using namespace std;

int main(){
    
    map <char, double> notas;
    string measure, notes;
    int j, i = 0, certos = 0;
    double total = 0;
    
    notas['W'] = 1.0;
    notas['H'] = 0.5;
    notas['Q'] = 0.25;
    notas['E'] = 0.125;
    notas['S'] = 0.0625;
    notas['T'] = 0.03125;
    notas['X'] = 0.015625;
    
    while(true){
        cin>> measure;
        if(measure[0] == '*') break;
        certos = 0;
        i = 0;
        j = measure.find('/');
        
        while(j != string :: npos){
            total = 0;
            notes = measure.substr(i ,j-i);
            
            for(int p = 0; p < notes.size(); ++p){
                total += notas[notes[p]];
            }
            
            if(total == 1) ++certos;
            i = ++j;
            j = measure.find('/', j);
            
            if(j == string :: npos){
                 total = 0;
                notes = measure.substr(i ,j-i);
                for(int p = 0; p < notes.size(); ++p){
                    total += notas[notes[p]];
                }
                if(total == 1) ++certos;
                
            }
        }
        cout<< certos<< endl;
    
        
   }
    return 0;
    
}