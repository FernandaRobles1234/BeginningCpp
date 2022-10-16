#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string alphabet = "abcdefghijklmnopqrstuvwxyz";
    const string key = "zyxwvtsrqponmlkjihfgedcba";
    
    string message {};
    
    cout << "Input the message you want to encript: " << endl;
    getline(cin, message);
    
    string secret_message {};
    
    for(char letter: message){
        size_t pos {};
        pos = alphabet.find(letter);
        
        if (pos==string::npos)
            secret_message += 'X';
            
        else
            secret_message += key.at(pos);
    }
    
    cout << secret_message << endl;
    
	return 0;
}
