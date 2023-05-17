#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void Assign(int,int);
    void Show();
    void Add(Complex, Complex);
};
void Complex::Assign(int a, int b)
{
    real = a;
    img = b;
}
void Complex::Show()
{
    cout << real << "+" << img << "i" << endl;
}
void Complex::Add(Complex A, Complex B)
{
    real = A.real + B.real;
    img = A.img + B.img;
}
int main()
{
    Complex C1, C2, C3;
    C1.Assign(3, 4);
    C2.Assign(2, 5);
    C3.Add(C1,C2);
    C1.Show();
    C2.Show();
    C3.Show();
    return 0;
}