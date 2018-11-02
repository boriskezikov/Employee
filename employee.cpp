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

};

Employee::Employee(std::string surname, std::string name, std::string specialization,int salary, int recruitment):
         Surname(surname), Name(name), Specialization(specialization),Salary(salary *recruitment*0.1), ID( ++employee_count) {
     Time::SetDateSecs(recruitment);
}

Employee::Employee(std::string surname, std::string name, std::string specialization, int recruitment):Specialization(specialization),
ID(++employee_count) {
    Surname = surname;
    Name = name;
    Time::SetDateSecs(recruitment);
    double modifier = recruitment * 0.1; // modifies the employee salary depending on his long service
    Salary = modifier;
}

Employee::Employee(std::string surname, int salary, int recruitment):Surname(surname), Salary(salary), ID(++employee_count)
{
    Name = "Unknown";
    Specialization = "Unknown";
    Time::SetDateSecs(recruitment);

}

void Employee::Print_info(){

    /* Function prints all private fields */

    std:: cout << std:: endl<< Name << "  "<< Surname <<"  "<< Specialization<<"  " << "Salary:" << Salary<< "  ";
    std::cout << "ID: " << employee_count << std::endl;
    Time::GetDateSecs();
    std::cout <<std::endl << "__________________";
} ;

auto Employee::Get_Access_to_PersonalData(std::string field) {

    /* Function provides access to private fields
     * via input of needed one.
     * You should pass in the function argument a key-word.
     * This function provides access to Surname, Name , Specialization fields*/

    if (field == "Surname") return Surname;
    else if(field == "Name") return Name;
    else if (field == "Specialization") return Specialization;
    else std::cout << "Incorrect data" << std::endl;

}

double Employee::Get_Access_to_numericDate(std::string field) {

    /* Function is performs the functionality
     * of the previous one
     * but provides access to ID, Salary fields */

     if (field == "ID") return ID;
     else if (field =="Salary" ) return Salary;
     else std::cout << "Incorrect data" << std::endl;
}

void Employee::Change_employee_info(std::string  field) {

    /* Function changes all available class fields
     * excluding ID field*/

    if (field == "Surname") { std::cout << "Input correct Surname: "<< std::endl; std::cin >>this->Surname ; }

    else if (field == "Name") {std::cout << "Input correct Name: "<< std::endl;std:: cin >> this->Name ;}

    else if (field == "Specialization") {std::cout << "Input correct Specialization: "<< std::endl;std::cin >> this->Specialization; }

    else if (field == "Specialization") {std::cout << "Input correct Salary: "<< std::endl; std::cin >> this->Salary; }

    else {std::cout << "Incorrect data" << std::endl;}
}

Employee* Employee::Get_pointer() {
    return this;

}




