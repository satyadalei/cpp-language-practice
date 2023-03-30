#include<iostream>
using namespace std;

int main()
{
    /*Reading a line of text*/
    char name[30];
    cout<<"Enter name :";
    cin.getline(name,30); // reads text upto 30 characters including spaces.
    cout<<"\n Enter a paragraph :";
    char paragraph[100];
    cin.get(paragraph,100);

    cout<<name<<endl;
    cout<<paragraph<<endl;
    return 0;
}