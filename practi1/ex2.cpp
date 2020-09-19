#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<10;i++){
        if(i==9){
            cout<<i<<endl;
            return 0;
        }
        cout<<i<<",";
    }
}