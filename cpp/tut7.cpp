#include<iostream>

using namespace std;

int c =45;

int main(){
    //  int a, b, c;
    //********************Build in data types***************************
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is"<<c;
    // cout<<"The global c is"<<::c;

    //********************Floot double and long double leiterals***************************

// float d=34.4f;
// long double e = 34.4l;
// cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
// cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

    //********************Refernce Variable***************************
    // Rohan Das ----> Monty ----> Rohu ------> Dangerous coder
float x =455;
float & y = x;
cout<<x<<endl;
cout<<y<<endl;
//*****************************Typecasting*****************************
int a = 45;
float b = 45.46;
cout<<"The value of a is "<<(float)a<<endl;  
cout<<"The value of a is "<<(float)a<<endl;

cout<<"The value of b is "<<(int)b<<endl;  
cout<<"The value of b is "<<int(b)<<endl; 
int c = int(b);

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b<<endl;



    return 0;
//     hello word
} 
