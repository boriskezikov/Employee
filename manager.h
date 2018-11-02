//
// Created by Boris on 29.10.2018.
//
#include "employee.h"
#include <vector>

#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H
class Manager : public Employee {
public:

    Manager();
    Manager(std::string surname, std::string name,  int salary);
    void PrintManagerInfo();
    void Print_Manager_employees();
    int AddEmployees( Employee *employee);


private:
    std::string Surname, Name;
    int Salary;
    std::vector<Employee*> data_base;

};

#endif //EMPLOYEE_MANAGER_H
