#include <iostream>
using namespace std;
class Employee
{
private:
    char name[20], designation[15];
    int age;
    float sallary;

public:
    void GetDetails()
    {
        cout << "Enter employee name : " << endl;
        cin >> name;
        cout << "Enter employee designation : " << endl;
        cin >> designation;
        cout << "Enter Sallary of employee : " << endl;
        cin >> sallary;
    }
    void ShowDetails()
    {
        cout<<"The employee details are :" << endl;
        cout<<"Name : " << name << endl;
        cout<<"Designation : " << name << endl ;
        cout<<"Sallary : " << sallary << endl ;
    }
} ;
int main()
{
    Employee employee[50];
    int n;
    cout<<"Enter hom many employees data you want to enter."<< endl;
    cin>>n;
        cout<<"Enter "<< n << " employees details" << endl ;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<< i+1 << " employees details" << endl;
        employee[i].GetDetails();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Details of "<< i+1 << endl ;
        employee[i].ShowDetails();
    }
    
    

    return 0;
}
