#include<iostream>
using namespace std ;
int main (){

#ifndef a 
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif 

    int a,b;
    cin>>a;
    cin>>b;
    cout<<"Enter the value of a :"<<a<<endl;
    cout<<"Enter the value of b :"<<b<<endl;

    int c;
    c=a;
    a=b;
    b=c;

    cout<<"Enter the value of a :"<<a<<endl;
    cout<<"Enter the value of b :"<<b<<endl;
 
}