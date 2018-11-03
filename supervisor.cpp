//
// Created by Boris on 29.10.2018.
//
#include "supervisor.h"

Supervisor::Supervisor() {
    std::cout << "Enter supervisors first and last name" << std::endl;
    std::cin >> Surname >> Name;
};


Supervisor::Supervisor(std::string surname, std::string name): Surname(move(surname)), Name(move(name)) {

}

bool Supervisor::CheckManagerAssignment() {
    int sum = 0;
    for (int i = 0; i< manager_db.size();i++){
        if(manager_db[i]->MCheckAssignment(i)){
            sum++;
        }
    }
    if (sum ==manager_db.size() ){
        return true;
    }
}

void Supervisor::AddManager(Manager *manager) {
    manager_db.push_back(manager);
}

void Supervisor::AssignBonus(Manager *manager, int modifier) {
     manager->MsetSalary(modifier);




}