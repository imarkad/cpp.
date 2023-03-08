#include<iostream>

using namespace std;
int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

// selection control structure If-else ladder
    // if((age<18) &&(age>0)){
    //     cout<<"YOur can not come to my party"<<endl;
    //         }
    //         else if(age==18){
    //             cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    //         }
    //         else if(age<1){
    //             cout<<"Your are not yet born"<<endl;
    //         }

    //         else{
    //             cout<<"You can come to my party"<<endl;
    //         }
    // slection control structure swich case ststement
    switch (age)
    {
    case 18:
    /* code */
    cout<<"you are 18"<<endl;
    break;

    case 22:
    /* code */
    cout<<"you are 22"<<endl;
     break;

    case 2:
    /* code */
    cout<<"you are 2"<<endl;
    break;

    default:
    cout<<"No special cases"<<endl;
    break;
    
    }
    cout<<"Done with switch case";
    return 0;

}