#include <iostream>
using namespace std;

class Dynamic{
    private:
            int *ptr,n;
    public:
            // // default constructor
            Dynamic(){
                ptr = new int[5];
                n = 5;
            } 
            // allocating dynamically - using parameterized constructor
            Dynamic(int a){
               ptr = new int[a];
               n = a;
            }    
            void GetNumbers(){
                cout << "enter numbers " << endl;
                for (int i = 0; i < n; i++)
                {
                  cout<<"Enter ptr[" << i << "]" << " number : " ;  
                  cin >> ptr[i];
                }
                cout << endl; 
            }
            void ShowNumbers(){
                cout << "All " << n << " numbers are " ;
                for (int i = 0; i < n; i++)
                {
                    cout << ptr[i] << " ";
                }
                delete ptr;
            }
};
int main(){
    Dynamic AB = Dynamic(3);
    AB.GetNumbers();
    AB.ShowNumbers();
    return 0;
}