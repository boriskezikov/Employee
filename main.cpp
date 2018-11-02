#include <iostream>
#include "employee.h"
#include "employee.cpp"
#include "manager.cpp"

int main() {

     Employee v1("Kezikov", "Boris","Manager",12000, 12);
     Employee v2;
     Employee v3;
     Employee v4;

     Manager manager1 ("Robers","Factor",1200);
     manager1.AddEmployees(v1.Get_pointer());
     manager1.AddEmployees(v2.Get_pointer());
     manager1.PrintManagerInfo();
     manager1.Print_Manager_employees();



    return 0;
}