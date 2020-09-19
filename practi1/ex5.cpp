#include<iostream>
using namespace std;
int main(){
    int x=0;
    int l=0;
    int p=0;
    cout<<"ingrese n: ";
    cin>>x;
    for(int i=0;i<=x;i++){
        for(int o=1;o<i;o++){
            if(i%o==0){
                l=o;
                p=l+p;
            }
        }
        if(p==i){
            cout<<"num perfecto: "<<i<<endl;
        }
        p=0;
    }
    return 0;
}