#include <iostream>
enum Week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

struct Date {
    int day;
    int month;
    int year;
};

int main() 
{
    Week w = Friday;
    switch (w) {
    case Monday:
        std::cout << "Monday" << std::endl;
        break;
    case Tuesday:
        std::cout << "Tuesday" << std::endl;
        break;
    case Wednesday:
        std::cout << "Wednesday" << std::endl;
        break;
    case Thursday:
        std::cout << "Thursday" << std::endl;
        break;
    case Friday:
        std::cout << "Friday" << std::endl;
        break;
    }

    Date day;
    std::cout << "Enter the day: ";
    std::cin >> day.day;
    if (day.day <= 0 || day.day >= 31) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    std::cout << "Enter the month: ";
    std::cin >> day.month;
    if (day.month <= 0 || day.month >= 13) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    std::cout << "Enter the year: ";
    std::cin >> day.year;
    if (day.year >= 2025) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    if (day.day < 10) {
        std::cout << "0" << day.day << ".";
    }
    else {
        std::cout << day.day << ".";
    }
    if (day.month < 10) {
        std::cout << "0" << day.month << ".";
    }
    else {
        std::cout << day.month << ".";
    }
    std::cout << day.year << std::endl;

   
}