#include <iostream>
#include "employee.h"
#include "employee.cpp"
#include "manager.cpp"
#include "supervisor.h"
#include "supervisor.cpp"

using namespace std;

int main() {

     Employee v1("Kezikov", "Boris","Developer",12000, 12);
     Employee v2;
     Employee v3;
     Employee v4;

     Manager manager1 ("Robers","Factor",120000);
     manager1.MAddEmployees(v1.GetPointer());
     manager1.MAddEmployees(v2.GetPointer());
     manager1.MAddEmployees(v3.GetPointer());
     manager1.MAddEmployees(v4.GetPointer());

     manager1.MRaiseTheSalary(v1.GetPointer(), 1.5);
     Supervisor supervisor1("Noy","Calswer");
     supervisor1.AddManager(manager1.MgetPointer());
     cout <<"Before: " <<  manager1.MgetSalary() << endl;

     supervisor1.AssignBonus(manager1.MgetPointer(),2);
     cout <<"After: " <<manager1.MgetSalary()<<endl;








    return 0;
}