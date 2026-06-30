// ElevatorSystem.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "ElevatorController.h"

int main() {
    std::cout << "Elevator System Starting..." << std::endl;

    // מייצרים בקר שמנהל 3 מעליות
    ElevatorController controller(3);

    std::cout << "System initialized successfully!" << std::endl;
    return 0;
}