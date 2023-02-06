#include<iostream>
using namespace std ;
int main (){

#ifndef a 
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif 

   int a,b;
   cout<<"Enter the value of a : "<<a<<endl;
   cin>>a;
   cout<<"Enter the value of b : "<<b<<endl;
   cin>>b;

   cout<<"Product of a and b will be :"<<a*b;
 
}