#pragma once
#include <vector>
#include "Direction.h" 

class Elevator {
private:
    int id;
    int currentFloor;
    Direction currentDirection;
    std::vector<int> destinationFloors;

public:
    Elevator(int elevatorId); 

    void move();

    int getCurrentFloor() const { return currentFloor; }
    Direction getDirection() const { return currentDirection; }
    void setDirection(Direction dir) { currentDirection = dir; }

    void addDestination(int floor) {
        destinationFloors.push_back(floor);
    }
};