#include <iostream>
using namespace std;

class Student{
    int rno;
    char name[40];
    float cgpa;
    public:
    Student(){
        cout<<"Enter student mname :" << endl;
        cin>>name;
        cout<< "Enter roll no : " << endl;
        cin>> rno;
        cout<<"Enter cgpa : " << endl;
        cin>> cgpa;
    }
    // void GetDetails(){
    //     cout<<"Enter student mname :" << endl;
    //     cin>>name;
    //     cout<< "Enter roll no : " << endl;
    //     cin>> rno;
    //     cout<<"Enter cgpa : " << endl;
    //     cin>> cgpa;
    // }
    void Display(){
        cout<<"Student name is : " << name << endl;
        cout<<"Student roll no is : " << rno << endl;
        cout << "Student cgpa is : " << cgpa << endl;
    }
};
int main(){
    Student A;
    A.Display();
    return 0;
}