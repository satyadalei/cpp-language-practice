#include <iostream>
using namespace std;
class BaseClass{
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
class DerivedClass1 : public BaseClass{
    public:
        //all the derived properties are here ::
        void getSalaryGendre(){
            this->getGender();
            this->getSalary();
        }
        
};
int main(){
    DerivedClass1 obj1;
    DerivedClass1 obj2;
    obj1.getSalaryGendre();
    cout<<"Getting sallary of object1 is ";
     obj1.setSalary(6000);
    cout<<"The salary of object1 is set to 6000"<< endl ;
    cout<<"Getting sallary of object2 is ";
     obj2.getSalary();
    obj2.getSalaryGendre();
    return 0;
}