

#include <iostream>
#include<string>
using namespace std;
struct Vehicles {
    string liscense_plate;
    string vehicle_type;
    int parking_slot;
    string Entry_exit_time;

};

int main()
{
    Vehicles V1;
    cout << "Enter the lisence plate number";
    cin >> V1.liscense_plate;
    cout << "Enter the vehicle type ";
    cin >> V1.vehicle_type;
    cout << "Enter the parking slot number";
    cin >> V1.parking_slot;
    cout << "your details are";
    cout << V1.liscense_plate;
    cout << V1.vehicle_type;
    cout << V1.parking_slot;
    cout << "Thank u so much";


}

