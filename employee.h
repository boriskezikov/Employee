//
// Created by Boris on 29.10.2018.
//
#include "time.h"
#include "classdata.h"
#ifndef EMPLOYEE_CLASS_H
#define EMPLOYEE_CLASS_H

class Employee: public Time {

private:
    std::string Surname;
    std::string Name;
    std::string Specialization;
    double Salary;
    const int ID;
    static int employee_count;
    std::string Assignment;


public:
    Employee();
    Employee(std::string surname, std::string name, std::string specialization, int salary, int recruitment);
    Employee(std::string surname, std::string name, std::string  specialization,  int salary);
    Employee(std::string surname, int salary, int recruitment);

    /* Prints all provided info about the class instance*/
    void PrintInfo();

    /* get methods */
    std::string getSurname();

    std::string getName();

    std::string getSpecialization();

    double getSalary();

    int getID();

    bool getAssignmentStatus(); /* Allows to check if assignment is ready or not yet*/

    Employee* GetPointer();/*Returns the pointer to the class instance*/

    /*set methods*/
    std::string setSurname(std::string field);

    std::string setName(std::string field);

    std::string setSpecialization(std::string field);

    double setSalary(double field);

    double setModifier(double modifier);




protected:
    bool AssignmentStatus;
    double modifier = 1;
    void ChangeAssStatus(); /* This function changes status of the got assignment (true or false */
    void setAssignment(std::string assign); /* Allows to give an assignment to the employee */




};


#endif //EMPLOYEE_CLASS_H
