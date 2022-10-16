#include <string>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

double average(vector<int>);
int smallest(vector<int>);
int largest(vector<int>);

int main()
{
    
    char letter_menu {};
    vector<int> list_numbers {};
    
    int add_number {};
    
    do {
        cout << "Select from the following menu: " << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> letter_menu;
        
        switch (letter_menu){
            case ('p'):
            case ('P'):
                if(list_numbers.empty())
                    cout << "[]- List is empty" << endl;
                else {
                    cout << "[ ";
                    for(auto n:list_numbers){
                        cout << n << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            case ('a'):
            case ('A'): 
                cout << "Which integer would you like to add? ";
                cin >> add_number;
                
                list_numbers.push_back(add_number);
                
                cout << add_number << " added" << endl;
                break;
            case ('m'):
            case ('M'): 
                if(list_numbers.empty())
                    cout << "Unable to calculate de mean - no data" << endl;
                else
                    cout << "The mean is: " << average(list_numbers) << endl;
                
                break;
            case ('s'):
            case ('S'): 
                if(list_numbers.empty())
                    cout << "Unable to determine smallest number - list is empty" << endl;
                else
                    cout << "The smallest number is: " << smallest(list_numbers) << endl;
                break;
            case ('l'):
            case ('L'): 
                if(list_numbers.empty())
                    cout << "Unable to determine largest number - list is empty" << endl;
                else
                    cout << "The smallest number is: " << largest(list_numbers) << endl;
                break;
            case ('q'):
            case ('Q'): 
                cout << "Goodbye!" << endl; 
                break;
            default: 
                cout << "Selection non valid." << endl;
        }
    }
    while (letter_menu != 'Q' && letter_menu != 'q');

	return 0;
}

double average(const vector<int> my_list){
    double return_value {};
    long long unsigned n {my_list.size()};
    
    for(size_t i {}; i < n; ++i)
        return_value += my_list.at(i);
        
    return (return_value / n);
}

int smallest (const vector<int> my_list){
    int return_value {my_list.at(0)};
    
    for(auto my_element:my_list){
        if(my_element<return_value)
            return_value = my_element;
    }
    return return_value;
}

int largest (const vector<int> my_list){
    int return_value {my_list.at(0)};
    
    for(auto my_element:my_list){
        if(my_element > return_value)
            return_value = my_element;
    }
    return return_value;
}