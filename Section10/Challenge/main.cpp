#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word {};
    string secret_word {};
    
    cout << "Input the word you want to encript: " << endl;
    getline(cin, word);
    
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string key = "zyxwvtsrqponmlkjihfgedcba";
    const int len_alphabet = 25;
    
    for(auto letter: word){ 
        int alph_index {};
        
        for (auto alph_letter:alphabet){
            
            if (alph_letter == letter){
                secret_word.push_back(key.at(alph_index));
                break;
                
            } 
            ++alph_index;
            if(alph_index == len_alphabet){
                secret_word.push_back('X');
            }
        }
    }
    
    cout << secret_word << endl;
    
	return 0;
}
