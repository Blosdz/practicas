#include<iostream>
#include "Cars.h"
using namespace std;
int main(){
    Car e("Rotary","diesel","red");
    e.shown();
    e.getInts(1999,200);
    e.showInts();
}