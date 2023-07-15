#include <iostream>
using namespace std;

class Student{
    private:
         char name[20], gen[7];
         int roll;
    public:
        void Accept(){
            cout<< " Enter name, roll and gender :" ;
            cin>> name >> roll >> gen;
        }     
        void Display(){
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
            cout << "Gender : " << gen << endl;
        }
};
class Detail : public Student{
    float h, w;
    public:
          void Accept(){
             Student::Accept(); // calling base classes function inside derived class member function
             cout<< " Enter height and weight : " ;
             cin >> h >> w;
          }
          void Display(){
             Student::Display();
             cout << "Height is " << h << endl;
             cout << "Weight is " << w << endl;
          }
};
int main(){
    // object derived class kind
    Detail derivedObject, obj2;
    derivedObject.Accept();
    derivedObject.Display();
    obj2.Accept();
    return 0;
}