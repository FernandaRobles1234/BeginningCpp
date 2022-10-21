#include <string>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

double average(vector<int>);
int smallest(vector<int>);
int largest(vector<int>);

void print_menu();
char caps_char(char);

void p_function(const vector<int>&);
void a_function(vector<int>&);
void m_function(const vector<int>&);
void s_function(const vector<int>&);
void l_function(const vector<int>&);

int main()
{
    
    char letter_menu {};
    vector<int> list_numbers {};
    
    do {
        
        print_menu();
        cin >> letter_menu;
        letter_menu= caps_char(letter_menu);
        
        switch (letter_menu){
            case ('P'):
                p_function(list_numbers);
                break;
            case ('A'): 
                a_function(list_numbers);
                break;
            case ('M'): 
                m_function(list_numbers);
                break;
            case ('S'): 
                s_function(list_numbers);
                break;
            case ('L'): 
                l_function(list_numbers);
                break;
            case ('Q'): 
                cout << "Goodbye!" << endl; 
                break;
            default: 
                cout << "Selection non valid." << endl;
        }
    }
    while (letter_menu != 'Q');

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

void print_menu(){
    cout << "Select from the following menu: " << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
}

char caps_char(char letter){
    
    if(isupper(letter))
        return letter;
    return letter-32;
}

void p_function(const vector<int> &list_numbers){
    if(list_numbers.empty())
        cout << "[]- List is empty" << endl;
    else {
        cout << "[ ";
        for(auto n:list_numbers){
            cout << n << " ";
        }
        cout << "]" << endl;
    }
}

void a_function(vector<int> &list_numbers){
    int add_number {};
    
    cout << "Which integer would you like to add? ";
    cin >> add_number;
    list_numbers.push_back(add_number);
    cout << add_number << " added" << endl;
}

void m_function(const vector<int> &list_numbers){
    if(list_numbers.empty())
        cout << "Unable to calculate de mean - no data" << endl;
    else
        cout << "The mean is: " << average(list_numbers) << endl;
}

void s_function(const vector<int> &list_numbers){
    if(list_numbers.empty())
        cout << "Unable to determine smallest number - list is empty" << endl;
    else
        cout << "The smallest number is: " << smallest(list_numbers) << endl;
}

void l_function(const vector<int> &list_numbers){
    if(list_numbers.empty())
        cout << "Unable to determine largest number - list is empty" << endl;
    else
        cout << "The largest number is: " << largest(list_numbers) << endl;
}