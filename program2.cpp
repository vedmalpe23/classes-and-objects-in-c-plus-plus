//CAR DETAILS
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    string name;
    string year;
    void CarName() {
    cout<<"Enter name of the car: ";
    cin >> name;
    }
     void CarYear() {
    cout<<"Enter year of the car: ";
    cin >> year;
    }
    void displayCarName() {
    cout<<"Car name: " << name<<endl;
    }
     void displayCarYear() {
    cout<<"Car year: "<< year<<endl;
    }
};

int main() {
    Car c1;
    Car c2;
    c1.CarName();       
    c1.displayCarName(); 
    c1.CarYear();
    c1.displayCarYear();
    c2.CarName();       
    c2.displayCarName(); 
    c2.CarYear();
    c2.displayCarYear();
    
    return 0;
}
/*output:
Enter name of the car: G_WAGON
Car name: G_WAGON
Enter year of the car: 2022
Car year: 2022
Enter name of the car: AMAZE_S
Car name: AMAZE_S
Enter year of the car: 2013
Car year: 2013
*/
