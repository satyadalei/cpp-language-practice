#include<iostream>
using namespace std;

int main()
{
    /*Reading a line of text*/
    char name[30];
    cout<<"Enter name :";

    //getline() method --> to take text until enter button is placed with or withoud space
    cin.getline(name,30); // reads text upto 30 characters including spaces.
    cout<<"\n Enter a paragraph :";
    char paragraph[100];
    // get() method --> to take text of paragraph
    cin.get(paragraph,100);

    cout<<name<<endl;
    cout<<paragraph<<endl;
    //cout<<paragraph[2];
    return 0;
}