#include<iostream>
using namespace std;

int main()
{
    string fName = "Satyanarayan";
    string lName = " Dalei";
    string fullName = fName.append(lName);

    cout << fullName;
    cout << endl <<"The length of string Full Name is " << fullName.length(); // it includes space
    cout << endl <<"The length of string Full Name is " << fullName.size(); // it includes space
    string stringNum = "20";

    cout << endl <<" Changing character of a string in C++" ;
    cout << endl << fName ;
    cout << endl << "After changing";
    fName[0] =  'P' ;
    cout << endl << fName;
    string yourName;
    cout << endl << "Enter your name :" ;
    cin >>  yourName ;
    cout << endl << "Your name is " << yourName;

    //string sumOfStringAndNum = stringNum + num; // it will give an error
    //cout<< endl<< sumOfStringAndNum;
    return 0;
}