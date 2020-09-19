#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingrese x:";
    cin>>x;
    int count;
    for(int i=0;i<x;i++){
        if(i==2 || i==3 ){
            cout<<i<<endl;
            count++;
        }
        if(i%2==0 || i%3==0 ||i==1){
            count=count+2;
        }
        
        if(count>1){
        }   
        else{
            cout<<i<<endl;
        }
        count=0;
    }

}
