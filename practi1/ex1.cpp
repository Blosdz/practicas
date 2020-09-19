#include<iostream>
using namespace std;
int main(){
    int x=1000000;
    int y=0;
    int z=0;
    for(int i=0;i<=x;i++){
        if(i%3==0 || i%5==0){
            y=i;
            z=y+z;
        }
    }
    cout<<"suma de valores menores: "<<z<<endl;
}