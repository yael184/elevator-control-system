#include "Elevator.h" 

Elevator::Elevator(int elevatorId)
    : id(elevatorId), currentFloor(0), currentDirection(Direction::IDLE) {
}

void Elevator::move() {
    if (currentDirection == Direction::UP) {
        currentFloor++;
    }
    else if (currentDirection == Direction::DOWN) {
        currentFloor--;
    }
}