#include <iostream>
#include <cctype>

int main() {

    char likeChoice;
    int iceCreamChoice;
    std::string iceCreamFlavors[] = {"Vanilla", "Chocolate", "Strawberry", "Oreo", "Cake Batter"};
    int size = (sizeof(iceCreamFlavors)/sizeof(iceCreamFlavors[0]));

    std::cout << "Here are some of my favorite flavors: " << '\n';

    for (int i = 0; i < size; i++) {
        std::cout << iceCreamFlavors[i] << '\n';
    }

    std::cout << "Do you like these flavors? Yes (y) or No (n):  ";
    std::cin >> likeChoice;
    likeChoice = tolower(likeChoice);

    if (likeChoice == 'y') {
        std::cout << "Which one do you like?" << '\n';
        for (int i = 0; i < size; i++) {
                std::cout << i + 1 << " " << iceCreamFlavors[i] << '\n';
            }
        std::cin >> iceCreamChoice;
        std::cout << iceCreamFlavors[iceCreamChoice - 1] << " is a great choice!" << '\n';
        }
    else {
        std::cout << "Different strokes for different folks!" << '\n';
    }

    return 0;
}