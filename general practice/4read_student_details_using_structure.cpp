#include<iostream>
using namespace std;

struct Student
{
    char name[30];
    char branch[20];
    int roll;
    int tmarks;
};

int main()
{
    cout<<"\n---------------Program Starts-------------------";
    Student srec;
    /*Entering all details*/
    cout<< endl << "Enter name of the student:";
    cin>>srec.name;
    cout<< endl << "Enter roll number:";
    cin>> srec.roll;
    cout<< endl << "Enter branch:";
    cin>>srec.branch;
    cout<< endl << "Enter total marks :";
    cin>>srec.tmarks;

    //Printing all details using structure
    cout<<"----Student Details-----\n";
    cout<<"\nName : " <<srec.name;
    cout<<"\nRoll no :"<<srec.roll;
    cout<<"\nBranch :"<<srec.branch;
    cout<<"\nTotal marks :"<<srec.tmarks;

    cout<<"\n-----------------Program Ends----------------------";
    return 0;
}