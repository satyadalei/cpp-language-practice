#include <iostream>
using namespace std;

class Person{
    char name[20];
    int age;
    char gendre[10];

    public:
         void Get(){
            cout << "Enter name & gendre & age : " ;
            cin >> name >> gendre >> age; 
         }
         void Out(){
            cout << "Name \t Gendre \t Age \t " << endl;
            cout << name << "\t" << gendre << "\t" << age << endl;
         }
};
class Student : public Person{
    char branch[10];
    int roll;

    public:
         void Get(){
            Person::Get();
            cout << "Enter branch name & roll number : ";
            cin >> branch >> roll;
         }
         void Out(){
            Person::Get();
            cout << "Branch \t Roll " << endl;
            cout << branch << "\t" << roll << endl;
         }
};
class Exam : public Student{
    int mark1, mark2 ;

    public:
          void Get(){
            Student::Get();
            cout << " Enter mark1 & mark2 : " ;
            cin >> mark1 >> mark2 ;
          }
          void Out(){
            Student::Out();
            cout << "Mark1 \t Mark2 "<< endl;
            cout << mark1 << "\t" << mark2 << endl;
         }
};
int main(){
    Exam examObj;
    examObj.Get();
    examObj.Out();
    return 0;
}