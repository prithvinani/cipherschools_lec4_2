// #include <iostream>
// using namespace std;
// int main()
// {
//     // float a;
//     // cin>>a;
//     // if(a>0.01){
//     //     cout<<"the condition in if statement is correct.";
//     // }
    
//     float a,b;
//     cout<<"give 2 floating point numbers as input";
//     cin>>a;
//     cin>>b;
//     if(a>0.1 && b>a){
//         cout<<"the if condtion is true";
//     }
//     else{
//         cout<<"false condition";
//     }
//     return 0;
// } 
#include <iostream>
using namespace std;
int main()
{
    int marks ;
    cout<<"sti=udent, please enter the maarks to calculate the grades: ";
    cin>>marks;
    if (marks>90){
        cout<<"A+";
    }
    if (marks<90 && marks>80){
        cout<<"A";
    }
    if (marks<80 && marks>70){
        cout<<"B";
    }
    if (marks<70 && marks>60){
        cout<<"C";
    }
    if (marks<60 && marks>50){
        cout<<"D";
    }
    if (marks<50 && marks>40){
        cout<<"E";
    }
    if (marks<40 && marks>30){
        cout<<"F";
    }
    if (marks<30){
        cout<<"fail";
    }
    return 0;
    }