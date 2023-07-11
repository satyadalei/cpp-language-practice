#include<iostream>
using namespace std;

// base class
class Student{
    protected:
       char name[20], gen[7];
       int roll;
    public:
         void Accept(){
            cout<<" Enter name, roll, and gender : ";
            cin>> name >> roll >> gen;
         }   
};

// derived class declaration
// first new class name then what property inside you want put private or public??
class Detail : public Student{
    float h,w;
    public:
          void Get(){
            cout<< " Enter height and weight : ";
            cin>> h >> w ;
          }
          void Show(){
            cout << name << " " << roll << " " << gen << " " << " " << w << endl;
          }
};
int main(){
    // object of base class
    Student baseClassObject;
    // object of derived class
    Detail derivedClassObject;
    derivedClassObject.Accept();
    derivedClassObject.Get();
    derivedClassObject.Show();
    return 0;
}