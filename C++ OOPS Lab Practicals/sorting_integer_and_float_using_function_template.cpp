#include <iostream>
using namespace std;
template<class T>
void Sort(T *num, int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = i+1; j < n; j++)
      {
         if (num[i] > num[j])
         {
           T swapVar =  num[j];
           num[j] = num[i];
           num[i] = swapVar; 
         }
      }
      
   }
}
template<class T>
void Show(T *num,int n){
    cout << "The sorted array Is " << endl ;
    for (int i = 0; i < n; i++)
    {
       cout << num[i] << " " ;  
    }
    cout << endl;
}
int main(){
    int nums[6] = {5,6,9,4,1,8} ;
    float floatNums[5] = {3.7, 1.8, 9.0, 12.5, 33.67};
    Sort(nums,6);
    Show(nums,6);

    Sort(floatNums,5);
    Show(floatNums,5);
    return 0;
}