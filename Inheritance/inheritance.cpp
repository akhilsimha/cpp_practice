#include <iostream>

using namespace std;

class Vehicle
{
    public:
        int wheels;
        int horsePower;

        void printDetails()
        {
            cout << "Wheels: " << wheels << '\n' << "Horse Power: " << horsePower << "cc\n";
        }
};

class Car: public Vehicle //Inheritance
{
    public:
    bool cruiseControl;
    void printDetails() //Polymorphism
    {
        cout << "Wheels: " << wheels << '\n' << "Horse Power: " << horsePower << "cc\nCruise Control ON";
    }
};

int main()
{
    Vehicle cycle;
    Car VW;
    cycle.wheels = 2;
    cycle.horsePower =0;
    VW.wheels = 4;
    VW.horsePower = 800;
    VW.cruiseControl = true;
    cycle.printDetails();
    VW.printDetails();
    
}