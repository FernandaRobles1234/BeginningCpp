#include <iostream>
#include <string>
using namespace std;


int main()
{
    string string_pyramid;
    cout << "Input a string pyramid block: ";
    cin >> string_pyramid;
    
    
    for (size_t row{}; row < string_pyramid.size(); row++){
        for(size_t spaces{0}; spaces < string_pyramid.size()-row-1; spaces++){
            cout << ' ' ;
        }
        
        
        string string_left = string_pyramid.substr(0, row+1);
        cout << string_left;
        
        //we don't want to print string_left[0] in the first loop, therefore j-1.
        //we reverse string_left, wich is of size row, wich also includes the center letter in position j, which we avoid with j-1.
        for(size_t j{row}; j>0 ;j--){
        cout << string_left[j-1];
        }
        
        cout << endl;
    }
    
	return 0;
}
