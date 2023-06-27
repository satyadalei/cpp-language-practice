#include<iostream>
using namespace std;

class Array{
    private:
          int a[5];
    public:
          void Assign(int []);      
          void Change(Array *);
          void Show();      
};
void Array::Assign(int b[]){
    for (int i = 0; i < 5; i++)
    {
       a[i] = b[i];
    }
}
void Array::Change(Array *obj){
    for (int i = 0; i < 5; i++)
    {
       obj->a[i] = obj->a[i] + a[i];
    }
}
void Array::Show(){
    for (int i = 0; i < 5; i++)
    {
       cout << a[i] << " " ; 
    }
    cout<<endl;
}
int main(){
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {3,6,2,4,1};
  Array A,B;
  A.Assign(arr1);
  B.Assign(arr2);

  cout<< "1st Array elements \n";
  A.Show();
  cout<< "2nd Array elements \n";
  B.Show();

  A.Change(&B);
  cout<<"After changes the 2nd Array elements \n";
  B.Show();
 return 0;
}