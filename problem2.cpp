//B. Create a simple cashier program.
#include <iostream>
using namespace std;
int main(){
    int prod,num,n;
        cout << "=================================================="<<endl;
        cout << "\t  Emjay's Daily Craving\t||\t₱Price   "<< endl;
        cout << "                             "<< endl;
        cout << "1\tSiomai Rice Special\t||\t₱230   "<< endl;
        cout << "2\tChicken Wings with extra rice\t||\t₱400      "<< endl;
        cout << "3\tHuge Burger with Drinks\t||\t₱671   "<< endl;
        cout << "4\tBreakfast Blowout\t||\t₱789  "<< endl;
        cout << "                             "<< endl;
        cout << "==================================================";
        cout << endl<< "Enter Number: ";
        cin >> num;
        switch (num){
            case 1:
            cout << "Enter Payment: ";
            cin >> n;
            if (n>=230){
                prod=n-230;
                cout << "Change:₱ "<<prod<<endl;
            }
            else
                cout << "Invalid Payment"<<endl;
                break;
            case 2:
            cout << "Enter Payment: ";
            cin >> n;
            if (n>=400){
                prod=n-400;
                cout << "Change:₱ "<<prod<<endl;
            }
            else
                cout << "Invalid Payment"<<endl;
                break;
            case 3:
            cout << "Enter Payment: ";
            cin >> n;
            if (n>=671){
                prod=n-671;
                cout << "Change:₱ "<<prod<<endl;
            }
            else
                cout << "Invalid Payment"<<endl;
                break;
            case 4:
            cout << "Enter Payment: ";
            cin >> n;
            if (n>=1789){
                prod=n-789;
                cout << "Change:₱ "<<prod<<endl;
            }
            else
                cout << "Invalid Payment"<<endl;
                break;
            }
       cout << "Programmed by: Earl Jheed Vallejos";
    return 0;
}
