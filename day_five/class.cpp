#include <iostream>

using namespace std;

class Vehicle {
    public:
        string make;
        string model;

        Vehicle(string Make, string Model) : make(Make), model(Model) {}

        virtual bool isPieceOfShit(string make) {
            return make == "Ford";
        }
};

class Truck : public Vehicle {
    public:
        int bedLength;
        bool isLifted;

        Truck(string Make, string Model, int BedLength, bool IsLifted) : Vehicle(Make, Model), bedLength(BedLength), isLifted(IsLifted) {}
    
        bool isPieceOfShit(string make) override {
            return make == "RAM";
        }
};

int main() {

    /* I don't fully understand the use of a pointer here, I am attempting to recreate an example I saw to 
    practice syntax. isPieceOfShit gets overridden because we are changing the criteria for which 
    that derived class member is a piece of shit. */ 
    Vehicle* truck1 = new Truck("RAM", "F100000", 45, false);

    Vehicle car1("Honda", "Civic");

    cout << "Truck piece of shit? : " << (truck1 -> isPieceOfShit(truck1->make)) << endl;
    cout << "Civic piece of shit? : " << (car1.isPieceOfShit(car1.make)) << endl;  

    delete truck1;

    return 0;
}