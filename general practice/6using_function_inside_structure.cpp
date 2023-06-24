#include<iostream>
using namespace std;

struct student
{
   char name[30];
   char branch[20];
   int roll;
   int tmark;

   void Read()
   {
     cout<<"Enter name of student: ";
     cin>>name;
     cout<<"Enter Roll number: ";
     cin>>roll;
     cout<<"Enter branch :";
     cin>>branch;
     cout<<"Enter total marks :";
     cin>>tmark;
   }

   void Show()
   {
    cout<<"\n Name = "<< name;
    cout<<"\n roll Number = "<< roll;
    cout<<"\n Branch = "<< branch;
    cout<<"\n Total marks = "<<tmark;
   }
};


int main()
{
    struct student srec[100];
    int noOfStudents;
    cout<<"Enter how many students data to print ?";
    cin>>noOfStudents;

    int i;
    /*Reading students data*/
    for ( i = 0; i < noOfStudents; i++)
    {
        srec[i].Read();
    }
    /*Printing students data*/
    for (i = 0; i < noOfStudents; i++)
    {
       srec[i].Show();
    }
    
    
    return 0;
}