#include <iostream>
using namespace std;

class ParkingSystem {
    int carTypeS[3] = {0};
public:
    ParkingSystem(int big, int medium, int small) {
        carTypeS[0] = big;
        carTypeS[1] = medium;
        carTypeS[2] = small;
    }
    
    bool addCar(int carType) {
        if(carTypeS[carType-1] <= 0) return false;
        carTypeS[carType-1]--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main()
{

    return 0;
}