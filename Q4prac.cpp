#include<iostream>
using namespace std ;
int main (){

#ifndef a 
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif 

    int length,breadth;
    cin>>length;
    cin>>breadth;

    cout<<"Enter the length : "<<length<<endl;
    cout<<"Enter the breadth : "<<breadth<<endl;

    cout<<"Area of the rectangle : "<<length*breadth<<endl;  
 
}