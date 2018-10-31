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
    long double Salary;
    const int ID;
    static int employee_count;


public:
    Employee();
    Employee(std::string surname, std::string name, std::string specialization, int salary, int recruitment);
    Employee(std::string surname, std::string name, std::string  specialization,  int salary);
    Employee(std::string surname, int salary, int recruitment);
    void Print_info();
    auto Get_Access_to_data(std::string field);





protected:


};


#endif //EMPLOYEE_CLASS_H
