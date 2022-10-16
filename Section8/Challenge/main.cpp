#include <iostream>
using namespace std; 

// Pseudocode:
// Change calculator.
// Coins into our disposition:
//      Moneda de 10 pesos
//      Moneda de 5 pesos
//      Moneda de 2 pesos
//      Moneda de 1 peso
//      Moneda de 1/2 peso
//      Moneda de 1/10 peso
// Input an amount "dinero" to translate into change.
// we will calculate the modular dinero%10, which means how many coins of 10 pesos we can use to describe "dinero".

int main()
{
    cout << "Welcome to the \"cambio\" calculator." << endl;
    
    double dinero {};
    cout << "Enter an amout of \"dinero\" to translate: ";
    cin >> dinero;
    
    cout << "The \"cambio\" is as follows: " << endl;
    
    int mon_10 {}, mon_5 {}, mon_2 {}, mon_1 {}, mon_1_2 {}, mon_1_10 {};
    
    mon_10 = static_cast<int> (dinero) / 10;
    cout << "monedas de 10: " << mon_10 << endl;
    dinero -= mon_10*10;

    mon_5 = static_cast<int> (dinero) / 5;
    cout << "monedas de 5: " << mon_5 << endl;
    dinero -= mon_5*5;
    
    mon_2 = static_cast<int> (dinero) / 2;
    cout << "monedas de 2: " << mon_2 << endl;
    dinero -= mon_2*2;
    
    mon_1 = static_cast<int> (dinero) / 1;
    cout << "monedas de 1: " << mon_1 << endl;
    dinero -= mon_1*1;
    
    mon_1_2 = dinero / 0.5;
    cout << "monedas de 0.5: " << mon_1_2 << endl;
    dinero -= mon_1_2*0.5;
    
    mon_1_10 = dinero / 0.1;
    cout << "monedas de 0.1: " << mon_1_10 << endl;
    dinero -= mon_1_10*0.1;
    
    cout << "Thank You!" << endl;
	
	return 0;
}
