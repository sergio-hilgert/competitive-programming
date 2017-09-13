#include <bits/stdc++.h>

using namespace std;

template<typename charT>
struct my_equal {
    my_equal( const std::locale& loc ) : loc_(loc) {}
    bool operator()(charT ch1, charT ch2) {
        return std::toupper(ch1, loc_) == std::toupper(ch2, loc_);
    }
private:
    const std::locale& loc_;
};

// find substring (case insensitive)
template<typename T>
int ci_find_substr( const T& str1, const T& str2, const std::locale& loc = std::locale() )
{
    typename T::const_iterator it = std::search( str1.begin(), str1.end(), 
        str2.begin(), str2.end(), my_equal<typename T::value_type>(loc) );
    if ( it != str1.end() ) return it - str1.begin();
    else return -1; // not found
}


int main(){
	
	string word, number, phrase;
	string str, result, fix_str;
	int isOpen, position;
	while(cin >> word >> number){
		getchar();
		getline(cin, phrase);
		//cout << word << " " << number << " " << phrase << endl;
		isOpen = 0;
		str = result = "";
		for(int i = 0; i < phrase.size(); ++i){
			if(phrase[i] == '<'){
				isOpen = 1;
				str += '<';
			}else if(phrase[i] == '>'){
				isOpen = 0;
				str += '>';
				position = ci_find_substr(str, word);
				if(position != string::npos){
					fix_str = str.substr(0, position);
					fix_str += number;
					fix_str += str.substr(position + word.size(), str.size() - position + word.size());
					str = fix_str;
					position = ci_find_substr(str, word);
					while (position != string::npos){
						fix_str = str.substr(0, position);
						fix_str += number;
						fix_str += str.substr(position + word.size(), str.size() - position + word.size());
						str = fix_str;
						position = ci_find_substr(str, word);
					}
					result += fix_str;
				}else{
					result += str;
				}
				str = "";
			}else{
				if(isOpen){
					str += phrase[i];
				}else{
					result += phrase[i];
				}
			}
		}
		cout << result << endl;
		
	}
	
	return 0;
}