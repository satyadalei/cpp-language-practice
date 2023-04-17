#include <iostream>
using namespace std;
class smartPhone // generating a class named smart phone
{
public: // making it accessible for outside the class 
    string brand; // ---- these are attributes
    string countryOfOrigin; //--- these are attributes
    int varietiesOfPhone; //---- these are attributes
    int rank; //---- these are attributes
};

int main()
{
   smartPhone phoneObj1; // creating a phone object ;
   phoneObj1.brand = "Real Me";
   phoneObj1.countryOfOrigin = "China";
   phoneObj1.varietiesOfPhone = 13;
   phoneObj1.rank = 6;
   cout << "the phone is " << phoneObj1.brand << " , it's rank is " << phoneObj1.rank << ". It's originated from " << phoneObj1.countryOfOrigin <<  ". And it has "<< phoneObj1.varietiesOfPhone << " varieties of phones." ;
    return 0;
}