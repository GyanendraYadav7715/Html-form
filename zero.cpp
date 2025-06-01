#include <iostream>
using namespace std;

class Account
{
private:
    int balance;  

public:
    void setBalance(int amount)
    {
        if (amount >= 0)
            balance = amount;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Account acc;
    acc.setBalance(5000);     
    cout << acc.getBalance();  
}
