#pragma once
#include "account.h"
#include<string>
#include<iostream>
using namespace std;

// Write your solution here
void transferFunds(Account& from, Account& to, double amount) 
{
    if (from.balance < amount) {
        throw std::runtime_error("Insufficient funds");
    }
    if (amount > 10000) {
        throw std::runtime_error("Amount too large");
    }
   
       from.sub(amount);
       to.add(amount);
   
}
