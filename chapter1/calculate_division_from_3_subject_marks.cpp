#include<iostream>
using namespace std;
int main(){
    cout<< "This program calculates division from 3 subject marks" <<endl;
    float math;
    float science;
    float history;
    float total;
    float percentage;
    cout<<"Enter math, science, history marks respectively"<<endl;
    cin>> math >> science >> history;
    total = math + science+history;
    percentage = ( (float)total/300)*100 ; //ex - 67%
    if (percentage < 30)
    {
        cout<< "Yo have failed." <<endl;
    }else if (percentage < 49)
    {
       cout<< "You have secured 3rd division" <<endl;
    }else if (percentage < 69)
    {
        cout<< "You have secured 2nd division" <<endl;
    }else{
        cout<<"You have secured first division"<<endl;
    }
    return 0;
}