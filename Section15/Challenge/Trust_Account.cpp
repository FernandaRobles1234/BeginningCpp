#include "Trust_Account.hpp"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate): Savings_Account {name, balance, int_rate}, withdraw_count{0}
{
}

bool Trust_Account::deposit(double amount){
    if (amount >= amount_bonus){
        amount += bonus;
    }
    return Savings_Account::deposit(amount);
    
}

bool Trust_Account::withdraw(double amount){
   if (withdraw_count >= withdraw_limit){
       return false;
   }else{
       ++withdraw_count;
       return Savings_Account::withdraw(amount);
   }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", "<< account.int_rate << " interest rate, " << account.withdraw_count << " attempts]";
    return os;
}