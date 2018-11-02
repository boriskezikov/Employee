//
// Created by Boris on 29.10.2018.
//
#include "manager.h"
#include <stdarg.h>

Manager::Manager() : Surname("Classified"), Name("Classified"), Salary(0){};
Manager::Manager(std::string surname, std::string name,  int salary ):Surname(move(surname)), Name(move(name)), Salary(salary)  {}



void Manager::PrintManagerInfo() {
    std::cout << std::endl << "Surname: "<<Surname << " " << "Name: " << Name << std::endl;

}

void Manager::Print_Manager_employees() {
    std::vector<Employee*>::iterator i;
    for(i = data_base.begin(); i!=data_base.end(); i++){
        Employee * p = *i;
        p->Print_info();

    }
}
int Manager::AddEmployees( Employee *employee ) { // employee = a, f = funcname
   /* va_list args;
    va_start(args, employee);

    va_end(args);*/
   data_base.push_back(employee);






}




