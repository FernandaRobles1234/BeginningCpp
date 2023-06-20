 #include "Checkings_Account.hpp"
#include "Account.h"

Checkings_Account::Checkings_Account(std::string name, double balance): Account {name, balance}
{
}


bool Checkings_Account::withdraw(double amount) {
    return Account::withdraw(amount + withdraw_fee);
}

std::ostream &operator<<(std::ostream &os, const Checkings_Account &account) {
    os << "[Checkings_Account: " << account.name << ": " << account.balance << ", " << account.withdraw_fee << " fee]";
    return os;
}

