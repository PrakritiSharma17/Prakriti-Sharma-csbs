#include <iostream>
using namespace std;
class Vehicle {
protected:
    string vehicleName;
public:
    Vehicle(string name) {
        vehicleName = name;
    }
    void displayVehicle() {
        cout << "Vehicle: " << vehicleName << endl;
    }
};
class Car : public Vehicle {
protected:
    string carModel;
public:
    Car(string vehicleName, string model) : Vehicle(vehicleName) {
        carModel = model;
    }
    void displayCar() {
        cout << "Car: " << carModel << endl;
    }
};
class Bike : public Vehicle {
protected:
    string bikeModel;
public:
    Bike(string vehicleName, string model) : Vehicle(vehicleName) {
        bikeModel = model;
    }
    void displayBike() {
        cout << "Bike: " << bikeModel << endl;
    }
};
class Garage : public Car, public Bike {
public:
    Garage(string vehicleName, string carModel, string bikeModel)
        : Car(vehicleName, carModel), Bike(vehicleName, bikeModel) {
    void displayAll() {
        displayVehicle(); 
        displayCar();      
        displayBike();     
    }
};
int main() {
    string vehicleName = "Tesla";
    string carModel = "Model S";
    string bikeModel = "Kawasaki Ninja";
    Garage garage(vehicleName, carModel, bikeModel);
    garage.displayAll();
    return 0;
}
