// ElevatorController.h
#include <vector>
#include <queue>
#include "Elevator.h"
#include "Request.h"

class ElevatorController {
private:
    std::vector<Elevator> elevators;
    std::queue<Request> pendingRequests; 

public:
    ElevatorController(int numberOfElevators);

    void handleRequest(Request req);

    void step();
};