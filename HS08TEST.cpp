/* Pooja would like to withdraw X $US from an ATM.
The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.*/


#include<iostream>
using namespace std;
int main(){
    int amount_to_withdraw;
    float available_balance;
    cin>>amount_to_withdraw;
    cin>>available_balance;
    if((amount_to_withdraw%5==0) && ((amount_to_withdraw+0.5)<=available_balance)){
        float remaining_balance = available_balance - amount_to_withdraw;
        cout<<remaining_balance-0.5;
    }
    else{
        cout<<available_balance;
    }
    return 0;
}
