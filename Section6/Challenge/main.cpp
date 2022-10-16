#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to Fernanda's carpet cleaning service!" << endl;
    
    const double price_small_room {25};
    cout << "\nPrice per small room: $" << price_small_room << endl;
    
    const double price_big_room {35};
    cout << "Price per big room: $" << price_big_room << endl;
    
    const double sales_tax {0.06};
    cout << "Sales tax rate: %" << sales_tax*100 << endl;
    
    cout << "\nHow may small rooms require service? ";
    
    int number_small_room {0};
    cin >> number_small_room;
    
    cout << "How may big rooms require service? ";
    
    int number_big_room {0};
    cin >> number_big_room;
    
    double rooms_cost = number_big_room*price_big_room + number_small_room*price_small_room;
    cout << "\nCost: $" << rooms_cost << endl;
    
    double cost_tax = rooms_cost*sales_tax;
    cout << "Tax: $" << cost_tax << endl;
    
    double total_cost = rooms_cost*(1+sales_tax);
    cout << "Total cost: $" << total_cost << endl;
    
    
    
    
	return 0;
}
