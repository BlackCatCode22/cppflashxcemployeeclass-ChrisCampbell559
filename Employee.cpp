#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeId;
    double salary;

public:
    // Constructor
    Employee(std::string n, int id, double s) : name(n), employeeId(id), salary(s) {}

    // Member function to display employee information
    void displayInfo() {
        std::cout << "Name: " << name << "\nEmployee ID: " << employeeId << "\nSalary: $" << salary << "\n\n";
    }
};

int main() {
    // Creating two Employee objects
    Employee emp1("Chris Campbell", 01, 50000.0);
    Employee emp2("Elijah Campbell", 02, 60000.0);

    // Displaying information for each employee
    std::cout << "Employee 1 Information:\n";
    emp1.displayInfo();

    std::cout << "Employee 2 Information:\n";
    emp2.displayInfo();

    return 0;
}
