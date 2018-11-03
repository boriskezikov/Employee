//
// Created by Boris on 29.10.2018.
//
#include "employee.h"
#include <vector>

#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H
class Manager : protected Employee {
public:

    Manager();

    Manager(std::string surname, std::string name,  int salary);

    void MPrintManagerInfo();    /* Prints all MANAGER  info*/

    void MPrintManagerEmployees(); /* Prints all employees related to the manager*/

    void MAddEmployees( Employee *employee); /*Allows to add a new employee to managers office */

    bool MCheckAssignment(int Id);  /* Checks if an assignment is ready*/

    Employee* MFindEmployee(int id); /*Returns pointer to the needed employee instance*/

    /* MRaiseTheSalary
     * Allows to raise the salary of the employee.
    * You need to pass a pointer to an instance
    * of the employee class and the salary modifier*/

    void MRaiseTheSalary(Employee* person , double modifier);

    int MgetReadyAssignment();

    int MgetSalary();

    void MsetSalary(int modifier);

    Manager * MgetPointer();





private:
    std::string Surname, Name;
    int Salary;
    std::vector<Employee*> data_base;

protected:
    int ReadyAssignment;



};

#endif //EMPLOYEE_MANAGER_H
