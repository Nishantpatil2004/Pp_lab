#include <iostream>

 #include <string>



class Employee {

public:
std:: string name;int age;
double salary;

void getData() {

std::cout << "Enter employee name: ";

std::cin >> name;

std::cout << "Enter employee age: ";

std::cin >> age;

std::cout << "Enter employee salary: ";

std::cin >> salary;

 }
 }

};



void displayData() const {

std::cout << "Employee Name: " << name <<< std std::cout << "Employee Age: " << age << std::

std::cout << "Employee Salary: <<<< salary <<

 int main() {

Employee employees[5]; // Create an array of 5 Em

for (int i = 0; i < 5; ++i) {

std::cout << "Enter details for Employee " <<

employees[i].getData(); // Input data for eac

std::cout << "\nEmployee Details:\n";
  {for (int i = 0; i < 5; ++i) {

std::cout << "Employee" << i + 1 << "\n";

employees[i].displayData(); // Display data f std::cout << std::endl;

 }
 }

return 0;


