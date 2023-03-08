// There are two types of header files:
// 1. System header files: It comes withe the compiler
#include<iostream>
// 2. User define header files: It is written by the programmer 
// #include"this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operater in C++:"<<endl;
        cout<<"Following are the of operaters in C++"<<endl;
// Arithmetic operators
cout<<"The value of a + b is "<<a+b<<endl;
cout<<"The value of a - b is "<<a-b<<endl;
cout<<"The value of a * b is "<<a*b<<endl;
cout<<"The value of a / b is "<<a/b<<endl;
cout<<"The value of a % b is "<<a%b<<endl;  
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;
cout<<endl;

// Assignment operator --> used to assign values to variables
// int a =3, b=9;
// char d='d';

//comparsion operators
cout<<"Following are the types of comparison operators in C++"<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;

// Logical oparators
cout<<"following are the logical operators in C++"<<endl;
cout<<"the value of this logical oparetor ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or oparetor ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not oparetor (!(a==b))is:"<<(!(a==b))<<endl;




    return 0;
}
