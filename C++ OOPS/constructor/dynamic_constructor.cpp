//allocating dynamically using default constructor
#include <iostream>
using namespace std;

class Dynamic{
    private:
            int *ptr;
    public:
          // allocating dynamic array
          Dynamic(){
             ptr = new int[5];
          }
          // Getting numbers
          void Get(){
            cout << "Enter 5 numbers " << endl;
            for (int i = 0; i < 5; i++)
            {
               cout<<"Enter a[" << i << "]" << "element : " ;
               cin>> ptr[i] ;
            }
          }
          // displaying numbers
          void Show(){
            cout<< " The entire 5 numbers are :" << endl ;
            for (int i = 0; i < 5; i++)
            {
                cout<<ptr[i] << " ";
            }
            delete ptr; // after showing numbers it will delete. 
          }

};
int main(){
    Dynamic AB;
    AB.Get();
    AB.Show();
    return 0;
}