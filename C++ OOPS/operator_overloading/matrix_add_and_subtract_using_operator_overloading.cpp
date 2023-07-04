#include <iostream>
using namespace std;
class Matrix{
         int mat[2][3];
    public:
          void GetMatrix(){
            cout<<" Enter matrix value" << endl;
            for (int i = 0; i < 2; i++)
            {
               for (int j = 0; j < 3; j++)
               {
                 cout<< " Enter matrix[" << i << "][" << j << "] element : ";
                 cin>> mat[i][j];  
               }
            }
          }
          void Show(){
            cout << " The matrix is : " << endl;
            for (int i = 0; i < 2; i++)
            {
               for (int j = 0; j < 3; j++)
               {
                 cout<< mat[i][j] << "   ";
               }
               cout<< endl;
            }
            cout << endl;
          }
          Matrix operator +(Matrix obj){
             Matrix DemoMatrix;
             for (int i = 0; i < 2; i++)
             {
                for (int j = 0; j < 3; j++)
                {
                    DemoMatrix.mat[i][j] = mat[i][j] + obj.mat[i][j];
                }
             }
             return DemoMatrix;
          }
          Matrix operator -(Matrix obj){
             Matrix DemoMatrix;
             for (int i = 0; i < 2; i++)
             {
                for (int j = 0; j < 3; j++)
                {
                    DemoMatrix.mat[i][j] = mat[i][j] - obj.mat[i][j];
                }
             }
             return DemoMatrix;
          }
};
int main(){
    Matrix A,B, C;
    A.GetMatrix();
    B.GetMatrix();
    A.Show();
    B.Show();
    C =  A + B ;
    C.Show(); 
    C = A - B ;
    return 0;
}