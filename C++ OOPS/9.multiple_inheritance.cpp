#include <iostream>
using namespace std;
class BaseClass1{
    private:
           int salary = 5000;
           string gendre = "male";
    public:
          void getSalary(){
            cout<<"Salary is " << salary << endl;
          }
          void setSalary(int y){
            salary = y;
          }
          void getGender(){
            cout << "Gendre is : " << gendre << endl;
          }
          void setGendre(string gendre){
             this->gendre = gendre;
          }
};
class BaseClass2{
    public:
        void wish(){
            cout<<"Hello there, I am Satya! it's nice to meet you."<< endl;
        };
};
class DerivedClass1 : public BaseClass1, public BaseClass2{
    public:
        //all the derived properties are here (from Baseclass1 & BaseClass2)
        void getSalaryGendre(){
            this->getGender();
            this->getSalary();
        };
        
};
int main(){
    DerivedClass1 obj1;
    DerivedClass1 obj2;
    obj1.getSalaryGendre();
    cout<<"Getting sallary of object1 is ";
     obj1.setSalary(6000);
     obj1.wish();
    cout<<"The salary of object1 is set to 6000"<< endl ;
    cout<<"Getting sallary of object2 is ";
     obj2.getSalary();
    obj2.getSalaryGendre();
    obj2.wish();
    return 0;
}