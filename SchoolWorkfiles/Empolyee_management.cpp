/*==========================================================

 Title:       Assignment 6 - Employee Management
 Course:      CIS 2252
 Author:      <First & Last Name>
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include "employee.h"

int main() {
    std::string name, department, position;
    int id;
    
    //uncomment below code when ready to test program
    
    //Creating Employee object with no data
    Employee emp;
    
    std::cout << "Name: ";
    getline(std::cin,name);
    
    std::cout << "ID number: ";
    std::cin >> id;
    
    std::cout << "Department: ";
    std::cin >> department;
    
    std::cout << "Position: ";
    std::cin >> position;
    
    emp.setName(name);
    emp.setIdNumber(id);
    emp.setDepartment(department);
    emp.setPosition(position);
    
    // Displaying the data for each employee
    std::cout << "\nEmployee Details:" << std::endl;
    std::cout << "Name: " << emp.getName();
    std::cout << ", ID Number: " << emp.getIdNumber();
    std::cout << ", Department: " << emp.getDepartment();
    std::cout << ", Position: " << emp.getPosition() << std::endl;
    

    return 0;
}
