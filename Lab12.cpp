#include <iostream>

using namespace std;

class Vehicle {
public:
    double fuel;

    Vehicle(double initialFuel) : fuel(initialFuel) {}

    void refuel(double amount) {
        fuel += amount;
        cout << "Заправлено " << amount << " літрів палива." << endl;
    }
};

class ElectricCar : public Vehicle {
public:
    double batteryCharge;

    ElectricCar(double initialFuel, double initialBatteryCharge) : Vehicle(initialFuel), batteryCharge(initialBatteryCharge) {}

    void chargeBattery(double amount) {
        batteryCharge += amount;
        cout << "Заряджено батарею на " << amount << "%." << endl;
    }
};

int main() {
    double initialFuel, initialBatteryCharge, fuelAmount, chargeAmount;

    cout << "Введіть початковий запас палива для автомобіля: ";
    cin >> initialFuel;

    cout << "Введіть початковий заряд батареї для електромобіля: ";
    cin >> initialBatteryCharge;

    Vehicle car(initialFuel);
    ElectricCar electricCar(0, initialBatteryCharge);

    cout << "Скільки літрів палива заправити? ";
    cin >> fuelAmount;
    car.refuel(fuelAmount);

    cout << "На скільки відсотків зарядити батарею? ";
    cin >> chargeAmount;
    electricCar.chargeBattery(chargeAmount);

    return 0;
}
