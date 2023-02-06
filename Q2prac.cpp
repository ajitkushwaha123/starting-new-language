#include<iostream>
using namespace std ;
int main (){

#ifndef a 
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif 

    int a;
    cout<<"Enter the value of A :"<<endl;
    cin>>a;
    cout<<"Cube of a is : "<<a*a*a;
 
}