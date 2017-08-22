# include <bits/stdc++.h>

using namespace std;

int main(){

    map <string, string> felizNatal;
    string pais;

    felizNatal["brasil"] = "Feliz Natal!";
    felizNatal["alemanha"] = "Frohliche Weihnachten!";
    felizNatal["austria"] = "Frohe Weihnacht!";
    felizNatal["coreia"] = "Chuk Sung Tan!";
    felizNatal["espanha"] = "Feliz Navidad!";
    felizNatal["grecia"] = "Kala Christougena!";
    felizNatal["estados-unidos"] = "Merry Christmas!";
    felizNatal["inglaterra"] = "Merry Christmas!";
    felizNatal["australia"] = "Merry Christmas!";
    felizNatal["portugal"] = "Feliz Natal!";
    felizNatal["suecia"] = "God Jul!";
    felizNatal["turquia"] = "Mutlu Noeller";
    felizNatal["argentina"] = "Feliz Navidad!";
    felizNatal["chile"] = "Feliz Navidad!";
    felizNatal["mexico"] = "Feliz Navidad!";
    felizNatal["antardida"] = "Merry Christmas!";
    felizNatal["canada"] = "Merry Christmas!";
    felizNatal["irlanda"] = "Nollaig Shona Dhuit!";
    felizNatal["belgica"] = "Zalig Kerstfeest!";
    felizNatal["italia"] = "Buon Natale!";
    felizNatal["libia"] = "Buon Natale!";
    felizNatal["siria"] = "Milad Mubarak!";
    felizNatal["marrocos"] = "Milad Mubarak!";
    felizNatal["japao"] = "Merii Kurisumasu!";

    while(cin>> pais){
        if(felizNatal.find(pais) != felizNatal.end())
            cout<< felizNatal[pais]<< endl;
        else
            cout<< "--- NOT FOUND ---\n";
    }



}
