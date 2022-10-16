#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// vector <char> vowels; //empty
    // vector <char> vowels (5); // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // subscript syntax doesn't do bound checking
    cout << vowels.at(1) << endl;
    cout << vowels [1] << endl;
    
    cout << "\nTroll the value: " << endl;
    cin >> vowels.at(1);
    
    cout << "\nUpdated Vowel: " << endl;
    cout << vowels.at(1) << endl;
    
    cout << "\nTroll the vector: " << endl;
    char troll_vowels {' '};
    cin >> troll_vowels;
    vowels.push_back(troll_vowels);
    
    cout << "\nThere are now " << vowels.size() << " vowels >:)" << endl;
    
    
    
	return 0;
}
