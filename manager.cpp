//
// Created by Boris on 29.10.2018.
//
#include "manager.h"


Manager::Manager() : Surname("Classified"), Name("Classified"), Salary(0){};
Manager::Manager(std::string surname, std::string name,  int salary ):Surname(move(surname)), Name(move(name)), Salary(salary)  {}



void Manager::MPrintManagerInfo() {
    std::cout << std::endl << "Surname: "<<Surname << " " << "Name: " << Name << std::endl;

}

void Manager::MPrintManagerEmployees() {
    std::vector<Employee*>::iterator i;
    for(i = data_base.begin(); i!=data_base.end(); i++){
        Employee * p = *i;
        p->PrintInfo();

    }
}

void Manager::MAddEmployees( Employee *employee ) { data_base.push_back(employee);}

Employee * Manager::MFindEmployee(int id) {
    for (int i = 0; i < data_base.size() ; i++){
        if(data_base[i]->getID() == id){
           return data_base[i]->GetPointer();
        }

    }
    std::cout << "No match ID in recruit list" << std::endl;
}

bool Manager::MCheckAssignment(int id) {
        if (Manager::MFindEmployee(id)->getAssignmentStatus()){

            return true;}
        else {
            return false;}
    }

void Manager::MRaiseTheSalary(Employee * person, double modifier) {
    if (Manager::MFindEmployee(person->getID())){
        person->PrintInfo();
        person->setModifier(modifier);

    }
    else std::cout << "No match of employee ID in the recruits list" << std::endl;

}

int Manager::MgetReadyAssignment() {
    return  ReadyAssignment;
}

int Manager::MgetSalary() {
    return Salary;
}

void Manager::MsetSalary(int modifier) {
    Salary = Salary * modifier;
}

Manager * Manager::MgetPointer() {
    return this;
}






