#include <iostream>

int main() {

    int credits;

    std::cout << "Enter the amount of credits you've earned so far: ";
    std::cin >> credits;

    double gpa;

    std::cout << "Enter your GPA: ";
    std::cin >> gpa;

    int holds;
    
    std::cout << "Do you have any holds? ";
    std::cin >> holds;

    int reqs;

    std::cout << "How many course requirements do you have left to complete? ";
    std::cin >> reqs;

    if (credits >= 60 && gpa >= 2.0 && holds == 0 && reqs == 0) {
        std::cout << "You have completed all your graduation requirements. You are eligible to graduate.";   
    }

    else {
        std::cout << "You are unable to graduate for the following reasons:\n";

        if (credits < 60) {
            std::cout << "You do not have the minimum of 60 credits required.\n";
        }
        if (gpa < 2.0) {
            std::cout << "Your GPA is below the minimum required GPA of 2.0.\n";
        }
        if (holds != 0) {
            std::cout << "You must have no holds before you are able to graduate.\n";
        }
        if (reqs > 0) {
            std::cout << "You must complete all of your course requirements before you are able to graduate.\n";
        }
    }

    return 0;
}
