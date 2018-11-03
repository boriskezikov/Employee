#include <iostream>
#include <string>
#include <time.h>

#ifndef CLASS_DATE_CLASSDATA_H
#define CLASS_DATE_CLASSDATA_H

class Time {
private:
    int dd;
    int mm;
    int yy;
    int secs;
    //int  rr [12] = {01,02,03,04,05,06,07,08,09,10,11,12};

public:
    Time(){
        dd = 0;
        mm = 0;
        yy = 0;
        secs = 0;
    }
    Time(int  day, int month, int  year){
        if (day <= 31 && month <= 12 && day > 0 && month >0){

            dd = day;
            mm = month;
            yy = year;
            secs = day * month * year *5184000;
        }
        else {
            std::cout << "Date is wrong, try again" << std::endl;
            SetDate();

        }
    }
    /* Time (int msec){

    }*/
    void PrintDateSec(){
        time_t seconds;
        seconds = time (NULL);
        printf ("%ld seconds since January 1, 1970", seconds);
    }
    void SetDate(){
        std::cout << "Enter the date with \"ddmmyy\" form" << std::endl;
        std::cin >> dd >> mm >>yy;
        if (dd <=31 && mm <=12 && dd > 0 && mm >0){
            secs  =  dd* mm * yy *5184000;
            std::cout << "Date is declared" << std::endl;
        }
        else {
            std::cout << "Date is wrong, try again" << std::endl;
            SetDate();
        }

        return;
    }
    int GetDate (){

        std::string new_mm = std::to_string(mm);\
        new_mm = '0' + new_mm;
        //std::cout << "Date: "<< dd<< ':' << new_mm << ':' << yy << std::endl;
        return secs;
    }
    int DateDiff(int date1, int date2){

        return 0;

    };
    void SetDateSecs(int date){
        secs = date * 86400;
        mm = date;

    }
    int GetDateSecs(){
        std::cout << "Months: " << mm;
        return secs;
    };

};




#endif //CLASS_DATE_CLASSDATA_H
