#include<iostream>
using namespace std;

struct book
{
    char name[30];
    char type[15];
    int pages;
    int rating;
};


int main()
{
    book book1;
   cout<<"-----------------Program starts------------------\n"; 
     cout<<"Enter book1 name : ";
     cin>> book1.name;
     cout<<"\n Enter book type :";
     cin>> book1.type;
     cout<<"\nEnter book1 pages :";
     cin>> book1.pages;
     cout<<"\nEnter book ratings:";
     cin>> book1.rating;

     cout<<"\n-----Book details------\n";
     cout<<"\nBook Name :" << book1.name;
     cout<<"\nBook type :" << book1.type;
     cout<<"\nBook pages :"<<book1.pages;
     cout<<"\nBoook rating :"<<book1.rating;
   cout<<"\n-----------------Program ends------------------"; 
   return 0;
}