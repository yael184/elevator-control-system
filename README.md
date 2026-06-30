# Real-Time Elevator Control System 

A high-performance, concurrent elevator management system implemented in modern C++. This project simulates a real-time dispatching server that efficiently handles passenger requests from multiple floors and coordinates a fleet of elevators using advanced scheduling algorithms.

##  Project Status: Phase 1 (Skeleton & Architecture)
We have successfully initialized the project, laid down the Object-Oriented Design (OOD) core structure, and configured the cross-platform build system.

Current achievements:
* **Project Structure:** Established a professional C++ workspace layout separating headers (`include/`) and source files (`src/`).
* **Core Entities:** Created the skeleton for the main system components (`Elevator`, `ElevatorController`, `Request`, and `Direction`).
* **Build System:** Configured **CMake** to handle automatic dependency management and include paths.

---

##  System Architecture

The project is split into separate modules to maintain a clean separation of concerns:

1. **Direction (Enum):** Defines the movement states (`UP`, `DOWN`, `IDLE`).
2. **Request (Struct):** Represents a passenger's call, containing the target floor, direction, and whether the request came from inside or outside the cabin.
3. **Elevator (Class):** Represents an individual elevator unit, maintaining its own floor state, direction, and independent destination queue.
4. **ElevatorController (Class):** The central "brain" (Server) that manages the fleet of elevators and dispatches them to handle pending requests.



---

##  Directory Layout

```text
elevator-control-system/
├── CMakeLists.txt           # Main CMake build configuration
├── README.md                # Project documentation
├── include/                 # Header files (.h)
│   ├── Direction.h
│   ├── Elevator.h
│   └── ElevatorController.h
└── src/                     # Source files (.cpp)
    ├── main.cpp             # Entry point
    ├── Elevator.cpp
    └── ElevatorController.cpp
```
##  Next Steps 
- [ ] Implement the baseline **FIFO (First-In, First-Out)** scheduling logic inside `ElevatorController::step()`.
- [ ] Simulate basic passenger movement in `main.cpp`.
- [ ] Upgrade the scheduling mechanism to the **SCAN (Elevator) Algorithm** for optimal floor routing.
- [ ] Introduce multi-threading (`std::thread` and `std::mutex`) to allow independent real-time elevator movement.

---

##  License

This project is licensed under the MIT License - see the LICENSE file for details.
