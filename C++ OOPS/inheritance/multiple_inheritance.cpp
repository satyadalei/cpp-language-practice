#include <iostream>
using namespace std;

class Base1{
    protected:
             char name[20];
             int roll;
    public:
    void Accept(){
        cout<<"Enter name : " ;
        cin >> name ;
        cout << "Enter roll number : ";
        cin>> roll;
    }         
};
class Base2{
    protected:
            char courseName[20];
            int rank;
    public:
          void Accept(){
            cout<< "Enter name of the course " ;
            cin>>courseName;
            cout<<"Enter rank : " ;
            cin >> rank;
          }        
};
// derived class
class fees : public Base1, Base2 {
    float amt;
        void Accept(){
            Base1::Accept();
            Base2::Accept();
            cout<< "Enter the course fees : ";
            cin >> amt ;
        }
        void Display(){
            cout<< "Name : " << name << endl;
            cout<< "Roll : " << roll << endl;
            cout<< "Course name : " << cn << endl;
            cout<<"Rank :" << rank << endl;
            cout<< "course fees : " << amt;
        }
};
int main(){
    fees obj;
    obj.Accept();
    cout<< " student details ...\n";
    obj.Display();
    return 0;
}