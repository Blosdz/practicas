#include<iostream>
using namespace std;
int main(){
    unsigned long long int x=600851475143;
    for(unsigned long long int i=600851475142;i<x;i--){
        if(x%i==0){
            x=x/i;
            cout<<i<<endl;

        }

    }
}