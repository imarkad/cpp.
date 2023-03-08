#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a =34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;
    // Constantas in C++
    // const float a = 3.11;
    // cout<<"The value of a was "<<a<<endl;
    // // a = 45.6; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    //*************** manipulators in C++*****************
    // int a=3, b=78, c=1233, d=12343;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    // cout<<"The value of d without setw is: "<<d<<endl;

    // cout<<"The value of a is: "<<setw(5)<<a<<endl;
    // cout<<"The value of b is: "<<setw(5)<<b<<endl;
    // cout<<"The value of c is: "<<setw(5)<<c<<endl;
    // cout<<"The value of d is: "<<setw(5)<<d<<endl;


    // Operator precedence
    int a=3, b=4;
    //int c = (a*5)+b
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;

}