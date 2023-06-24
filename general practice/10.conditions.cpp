#include <iostream>
using namespace std;

int main(){
    //int day = 0 ;
    //------------forEach loop ------ new loop introduced in c++ (Especially for arrays)
    //let say we have an array fo strings --
    string students[5] = {"Satya", "Rakesh", "Gulu Bhai", "Debasish", "Kailash"};
    for(string name : students){
       cout << name << endl;
    }
    int nums[6] = {5,7,1,90,0,8};
    cout << "The numbers are :" << endl;
    for(int i : nums){
        cout<< i << endl;
    }
    //------------ do while loop ----
    // do
    // {
    //   cout<<"Hello" << endl;
    //   day++;
    // } while (day<1);
    
    //------------while Loop --------------
    // while (day < 7)
    // {
    //    switch (day)
    //    {
    //    case 0:
    //         cout << "SUNDAY" << endl;
    //         break;
    //     case 1:
    //         cout << "MONDAY" << endl;
    //         break;
    //     case 2:
    //         cout << "TUESDAY" << endl;
    //         break;
    //     case 3:
    //         cout << "WEDNESDAY" << endl;
    //         break;
    //     case 4:
    //         cout << "THURSDAY" << endl;
    //         break;
    //     case 5:
    //         cout << "FRIDAY" << endl;
    //         break; 
    //     case 6:
    //         cout << "SATURDAY" << endl;
    //         break; 
    //     default:
    //         cout << "You have entered wrong number!!";          
    //     }
    //     //printing is done now update day value
    //     day++ ;
    // }

    
    //------------switch case---------------
    // for (int i = 0; i < 3; i++)
    // {
    //     //ask day value
    //     cout << "Enter day value" << endl;
    //     cin >> day;
    //     switch (day)
    //     {
    //     case 0:
    //         cout << "SUNDAY" << endl;
    //         break;
    //     case 1:
    //         cout << "MONDAY" << endl;
    //         break;
    //     case 2:
    //         cout << "TUESDAY" << endl;
    //         break;
    //     case 3:
    //         cout << "WEDNESDAY" << endl;
    //         break;
    //     case 4:
    //         cout << "THURSDAY" << endl;
    //         break;
    //     case 5:
    //         cout << "FRIDAY" << endl;
    //         break; 
    //     case 6:
    //         cout << "SATURDAY" << endl;
    //         break; 
    //     default:
    //         cout << "You have entered wrong number!!";          
    //     }
    // }
    
    return 0;
}