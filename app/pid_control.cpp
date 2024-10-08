#include "PIDController.hpp"
#include <vector>
#include <iostream>
int main(){

    std::vector<float> vel{0.0, 3.0, 6.0, 9.0, 10.0, 10.0, 10.0};

    pid::PIDController my_pid(1.0, 1.0, 1.0, 10.0);
    float value = 0;
    for(int x : vel){
        value = my_pid.compute(x);
        std::cout << value << " ";
    }

    return 0;
}
