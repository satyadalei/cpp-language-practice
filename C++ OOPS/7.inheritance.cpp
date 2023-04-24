// Example: define member function without argument within the class

#include<iostream>
using namespace std;

class Person
{
    // there is no visibility is that mean they are private?? if they are private then they should not be inherited to child classes.
	int id;
	char name[100];
	
	public:
		void set_p()
		{
			cout<<"Enter the Id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the Name:";
			cin.get(name,100);
		}
	
		void display_p()
		{
			cout<<endl<<id<<"\t"<<name<<"\t";
		}
};

class Student: private Person
{
	char course[50];
	int fee;
	//all public attributes are inherited to private 
    //it's like having bellow
    // void set_p()
	// 	{
	// 		cout<<"Enter the Id:";
	// 		cin>>id;               // conflicts here because id should not be inherited
	// 		fflush(stdin);
	// 		cout<<"Enter the Name:";
	// 		cin.get(name,100);
	// 	}
	
	// 	void display_p()
	// 	{
	// 		cout<<endl<<id<<"\t"<<name<<"\t";
	// 	}
	public:
	void set_s()
		{
			set_p();
			cout<<"Enter the Course Name:";
			fflush(stdin);
			cin.getline(course,50);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
			display_p();
			cout<<course<<"\t"<<fee<<endl;
		}
};

main()
{
	Student s;
	s.set_s();
	s.display_s();
	return 0;
}
