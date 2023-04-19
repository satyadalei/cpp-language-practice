#include <iostream>
using namespace std;
// defining a class
class student
{
    // These are can not be directly accessed
    private:
        string gender; // you can not edit nor you can access directly.
        int num = 5;
        // ---- it is not accessible so - DO NOT USE CONSTRUCTOR INSIDE PRIVATE
        // student(){
        //     cout << " This constructor from private ";
        // }

    // These can be accessed directly
    public:
       // a constructor --> runs directly when object created
        student(){ // aconstructor
            cout << "Hello !" << endl;
        }
        //----- You can not rebuild constructor again(or multiple times) -- gives error
        // student(){
        //     cout << "This is hello after!!" << endl;
        // }
        string name;
        float cgpa;
        string interestFiend;
        int age;
        int year;
        int sum(int num){
          cout<<"this->num = " << this->num << endl ;
          cout<<"num = " << num << endl ;
          return  this->num+num;
        }
        // declaring a function --> it's definition will be outside of class
        void greet( string wish); // you must declare it inside class with arguements ..
};
void student::greet( string wish){
    cout<<"Hello " << wish <<" Everybody. My name is Satyanarayan Dalei"<< endl;
    // cout<<"The secret number is(this->num) : " << this->num << endl;
    // cout<<"The secret number is(only num) : " << num << endl;
    cout << endl;
}
int main(){
    student std1; // constructors will automatically runs here
    // std1.gender = "male";
    // cout << std1.sum(7) << endl;
    // std1.greet();

    // creating a student list
    std1.name = "Satyanarayan";
    std1.cgpa = 7.8 ;
    std1.age = 22;
    std1.interestFiend = "Web Development";
    std1.greet(" Good night ");
    //cout << std1.greet(" Good night ") << endl << std1.greet(" Good morning ") << endl << std1.greet(" Good evening ") ;
    std1.greet(" Good morning ");
    std1.greet(" Good evening ");
    return 0;
}