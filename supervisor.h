//
// Created by Boris on 29.10.2018.
//
#include "manager.h"
#include <vector>
#ifndef EMPLOYEE_SUPERVISOR_H
#define EMPLOYEE_SUPERVISOR_H

class Supervisor : protected Manager {
public:
    Supervisor();

    Supervisor(std::string surname, std::string name);

    void AddManager(Manager * manager);

    bool CheckManagerAssignment();

    void AssignBonus(Manager * manager, int modifier);



private:
    std::string Surname, Name;
    std::vector<Manager*> manager_db;



};

#endif //EMPLOYEE_SUPERVISOR_H
