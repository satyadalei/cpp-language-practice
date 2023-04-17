//This program takes temp in degree and converts to celcius
#include<iostream>
using namespace std;

int main(){
    cout<<"This program takes temp in degree and converts to celcius"<< endl;
    float tempinCelcius;
    float tempinFahren;
    cout<<"Enter temp in degree celcius to be in fahrenheit\n";
    cin>>tempinCelcius;
    //calculation to fahrenheit
    tempinFahren = float ((float)9/5)*tempinCelcius + 32 ;
    cout<< tempinCelcius <<" degree celcius is "<< tempinFahren <<" degree fahrenheit " << endl ;
    cout<<"Program ends";
    return 0;
}