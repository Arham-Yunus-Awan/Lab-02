#include <iostream>
using namespace std;
int main(){
    int current_balance, deposit_amount, withdrawl_amount;
    cout << "Enter the initial balance: ";
    cin >> current_balance;
    cout << "Enter the deposit amount: ";
    cin >> deposit_amount;
    cout <<"Enter the withdrawl amount: ";
    cin >> withdrawl_amount;
    current_balance += deposit_amount;
    cout << "Balance after deposit: " << current_balance << endl;
    current_balance -= withdrawl_amount;
    cout << "Balance after withdrawl: " << current_balance << endl;

    return 0;
}
