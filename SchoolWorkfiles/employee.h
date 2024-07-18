#include <iostream>
#include <string>

using namespace std;

class Employee{
public:
    string employeeName = "";
    int employeeID = 0;
    string employeeDepartment = "";
    string employeePosition = "";
    
    Employee(string name, int ID, string department, string position):
    employeeName(name), 
    employeeID(ID), 
    employeeDepartment(department), 
    employeePosition(position){}
    
    Employee(string name, int ID):
    employeeName(name), employeeID(ID){}
    
    Employee() = default;
    
    
    void setName(string name){
        employeeName = name;
    }
    void setIdNumber(int ID){
        employeeID = ID;
    }
    void setDepartment(string department){
        employeeDepartment = department;
    }
    void setPosition(string position){
        employeePosition = position;
    }
    
    
    string getName(){
        return employeeName;
    }
    
    int getIdNumber(){
        return employeeID;
    }
    
    string getDepartment(){
        return employeeDepartment;
    }
    
    string getPosition(){
        return employeePosition;
    }
};