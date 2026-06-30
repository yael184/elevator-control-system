#include "ElevatorController.h"

ElevatorController::ElevatorController(int numberOfElevators) {
    for (int i = 0; i < numberOfElevators; ++i) {
        elevators.push_back(Elevator(i));
    }
}

void ElevatorController::handleRequest(Request req) {
    // כרגע רק דוחף לתור הטיפש
    pendingRequests.push(req);
}

void ElevatorController::step() {
    // הלולאה הראשית של השרת - כרגע ריקה
}