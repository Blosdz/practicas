#include<iostream>
using namespace std;
int main(){
    int x=0;
    int l=0;
    int p=0;
    cout<<"ingrese n: ";
    cin>>x;
    for(int i=1;i<x;i++){
        if(x%i==0){
            l=i;
            p=l+p;
        }
    }
    if(p==x){
        cout<<"num perfecto: ";
    }
    else{
        cout<<"no perfecto: ";
    }
    cout<<p;
}