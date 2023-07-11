// Adds two matrix using friend member function
#include<iostream>
using namespace std;

class Matrix{
   int mat[3][3];
   public:
        void GetMatrix(){
            cout<<"Enter 3X3 matrix"<< endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                  cout<<"Enter matrix[" << i << "][" << j << "] element : ";
                  cin>>mat[i][j];
                  cout<< endl;
                }
            } 
        }
        void ShowMatrix(){
            cout<<" The matrix is : "<< endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                  cout<< mat[i][j] << "   ";
                }
                cout<< endl;
            } 
        }
        // using friend function member
        // Addition
        friend Matrix operator+(Matrix mat1, Matrix mat2){
            Matrix Demo;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                  Demo.mat[i][j] = mat1.mat[i][j] + mat2.mat[i][j];
                }
            } 
            return Demo;
        }
        // Subtraction
        friend Matrix operator -(Matrix mat1, Matrix mat2){
            Matrix Demo;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                  Demo.mat[i][j] = mat1.mat[i][j] - mat2.mat[i][j];
                }
            } 
            return Demo;
        }
};
int main(){
    Matrix mat1,mat2,mat3, mat4;
    mat1.GetMatrix();
    mat2.GetMatrix();
    cout<<" First matrix : " << endl;
      mat1.ShowMatrix();
    cout<<" Secong matrix : " << endl;
      mat2.ShowMatrix();
    mat3 = mat1 + mat2;
    cout<<" sum of matrix 1 and 2 is " << endl;
    mat3.ShowMatrix();
    
    mat4 = mat1 - mat2;
    cout<<" Difference between matrix 1 and 2 is " << endl;
    mat4.ShowMatrix();
    return 0;
}