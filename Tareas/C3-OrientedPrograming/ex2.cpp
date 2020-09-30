#include<iostream>
#include "Account.h"
using namespace std;
int main(){
    Account account1{"JANE GREEN",50};
    Account account2{"JHON BLUE",-7};
    cout<<"account 1"<<account1.getName()<<"balance is $"<<account1.getBalance()<<endl;
    cout<<"account 2"<<account2.getName()<<"balance is $"<<account2.getBalance()<<endl;
    cout<<"enter deposit amount for account 1: ";
    int depositAmount;
    cin>>depositAmount;
    cout<<"############################adding######################"<<endl;
    cout<<depositAmount<<" to account 1 balance "<<endl;
    account1.deposit(depositAmount);
    cout<<"n account 1: "<<account1.getName()<<"balance is $"<<account1.getBalance()<<endl;
    cout<<"enter deposit amount for account 2: ";
    cin>>depositAmount;
    cout<<"###########################adding######################"<<endl;
    cout<<depositAmount<<" to account 2 balance "<<endl;
    account2.deposit(depositAmount);
    cout<<"n account 2: "<<account2.getName()<<"balance is $"<<account2.getBalance()<<endl;
    int withdraw;
    cout<<"enter withdrawing amount for account 1: ";
    cin>>withdraw;
    cout<<"############################withdrawing######################"<<endl;
    cout<<withdraw<<" to account 1 balance "<<endl;
    account1.withdraw(withdraw);
    cout<<"n account 1: "<<account1.getName()<<"balance is $"<<account1.getBalance()<<endl;
    cout<<"enter withdrawing amount for account 2: ";
    cin>>withdraw;
    cout<<"###########################withdrawing######################"<<endl;
    cout<<withdraw<<" to account 2 balance "<<endl;
    account2.withdraw(withdraw);
    cout<<"n account 2: "<<account2.getName()<<"balance is $"<<account2.getBalance()<<endl;
    
}