#ifndef CHECKINGS_ACCOUNT_HPP
#define CHECKINGS_ACCOUNT_HPP
#include "Account.h"

class Checkings_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checkings_Account &account);
    //doesnt adds new attributes
private:  
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double withdraw_fee = 1.5;
public:
    Checkings_Account(std::string name = def_name, double balance =def_balance);
    
    bool withdraw(double amount);
};

#endif // CHECKINGS_ACCOUNT_HPP
