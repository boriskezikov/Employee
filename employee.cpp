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
    std::cout << "\nNew person";
    std:: cout << std:: endl<< Name <<std::endl<< Surname <<std::endl<< Specialization<<std::endl << "Salary: " << Salary<<std::endl;\
    std::cout << "ID: " << employee_count << std::endl;
    Time::GetDateSecs();
    std::cout << std::endl;
} ;

auto Employee::Get_Access_to_data(std::string field) {
    if(field == "Surname" || field == "Name" Surname : Name)

}




