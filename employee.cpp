//
// Created by Boris on 29.10.2018.
//

 #include "employee.h"
 int Employee::employee_count = 0;
 Employee::Employee(): ID(++employee_count){
     Name  = "Employee";
     Surname = "Empty_surname";
     Specialization = "No specialization";
     Salary = 0;
     Time::SetDateSecs(0);
     AssignmentStatus = false;

};

Employee::Employee(std::string surname, std::string name, std::string specialization,int salary, int recruitment):
         Surname(move(surname)), Name(move(name)), Specialization (move(specialization)), ID( ++employee_count) {

    /*The salary calculates as multiplication of the initial rate, working hours and modifier.
     * The manager can change the modifiers value. */
     Salary =salary *recruitment * 0.1 * modifier;

     Time::SetDateSecs(recruitment);

     AssignmentStatus = false;
}

Employee::Employee(std::string surname, std::string name, std::string specialization, int recruitment):Specialization(specialization),
ID(++employee_count) {

    Surname = surname;
    Name = name;
    Time::SetDateSecs(recruitment);
    Salary = recruitment * 0.1 * modifier;
    AssignmentStatus = false;
}

Employee::Employee(std::string surname, int salary, int recruitment):Surname(surname), Salary(salary * modifier), ID(++employee_count)
{
    Name = "Unknown";
    Specialization = "Unknown";
    Time::SetDateSecs(recruitment);
    AssignmentStatus = false;

}

void Employee::PrintInfo(){

    /* Function prints all private fields */

    std:: cout << std:: endl<< Name << "  "<< Surname <<"  "<< Specialization<<"  " << "Salary:" << Salary<< "  ";
    std::cout << "ID: " << ID << std::endl;
    Time::GetDateSecs();
    std::cout <<std::endl << "__________________" << std::endl;
} ;




Employee* Employee::GetPointer() {
    return this;

}

/* Function list provides an ability to get private class fields*/

std::string Employee::getName() {
    return Name;}
std::string Employee::getSurname() {
    return Surname;}
std::string Employee::getSpecialization() {
    return Specialization;}
double Employee::getSalary() {
    return Salary;}
int Employee::getID() {
    return ID;}

/* Function list provides an ability to set private class fields*/

std::string Employee::setName(std::string field){
    Name = field;
    return Name;}
std::string Employee::setSurname(std::string field) {
    Surname = field;
    return Surname;}
std::string Employee::setSpecialization(std::string field) {
    Specialization = field;
    return Specialization;}
double Employee::setSalary(double field) {
    Salary = field;
    return Salary;}
bool Employee::getAssignmentStatus() {
    return AssignmentStatus;
}

void Employee::setAssignment(std::string assign) {
    Assignment = assign;
}

void Employee::ChangeAssStatus() {
     if (AssignmentStatus) AssignmentStatus = false;
     else AssignmentStatus = true;
}

double Employee::setModifier(double modifier){
    this->modifier = modifier;
    this->setSalary(this->Salary*modifier);
    return this->modifier;
}





