#include <iostream>

/*A program that takes in a person's name, and a number, and it sings Happy Birthday to that person*/

void happyBirthday(std::string name);

int main() {

    std::string name;
    int sing;

    std::cout << "Happy birthday! Tell me your name first: ";
    getline(std::cin, name);

    std::cout << "How many times do you want me to sing happy birthday?: ";
    std::cin >> sing;

    if (sing == 1) {
        std::cout << "Will do!\n";
        happyBirthday(name);
    } else if (sing < 0) {
        std::cout << "Alright, have it your way\n";
    } 
    else {
        std::cout << "That is way too many times, but I'll oblige!\n";
        while (sing != 0) {
            happyBirthday(name);
            sing = sing - 1;
        }
    }

    return 0;
}

void happyBirthday(std::string name) {
    std::cout << "********************************\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to you!" << '\n';
    std::cout << "********************************\n";
}