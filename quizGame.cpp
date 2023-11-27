#include <iostream>

//a function to print out the categories
void printCategories(std::string categories[], int categorySize);
bool searchCategories(int chosenCategories[], int userCategory);
//a function that loops through and prints the questions and answers, and returns true if the person gets a true answer
int printQuestions(std::string questions[], std::string answers[][4], char correctAnswers[], int size);
void americanHistory();
void science();
void math();
void literature();
void popCulture();
void politics();
void mythology();
void sports();

//variable for the score
int score = 0;

int main() {
    std::string categories[8] = {"American History", "Science", "Math", "Literature", "Pop Culture", "Politics", "Mythology", "Sports"};
    int categorySize = sizeof(categories)/sizeof(categories[0]);
    int availableCategories = sizeof(categories)/sizeof(categories[0]);
    int chosenCategories[8];
    int userCategory;

    do {
        printCategories(categories, categorySize);
        std::cout << "What category do you want?: ";
        std::cin >> userCategory;
        std::cout << "You chose " << categories[userCategory - 1] << '\n';
        if (searchCategories(chosenCategories, userCategory) == true) {
            std::cout << "You chose that option already." << '\n';
        } else {
            switch(userCategory) {
                case 1:
                    chosenCategories[0] = userCategory;
                    americanHistory();
                    availableCategories--;
                    break;
                case 2:
                    chosenCategories[1] = userCategory;
                    science();
                    availableCategories--;
                    break;
                case 3:
                    chosenCategories[2] = userCategory;
                    math();
                    availableCategories--;
                    break;
                case 4:
                    chosenCategories[3] = userCategory;
                    literature();
                    availableCategories--;
                    break;
                case 5:
                    chosenCategories[4] = userCategory;
                    popCulture();
                    availableCategories--;
                    break;
                case 6:
                    chosenCategories[5] = userCategory;
                    politics();
                    availableCategories--;
                    break;
                case 7:
                    chosenCategories[6] = userCategory;
                    mythology();
                    availableCategories--;
                    break;
                case 8:
                    chosenCategories[7] = userCategory;
                    sports();
                    availableCategories--;
                    break;
                default:
                    std::cout << "Invalid Option" << '\n';
                }
            }
        } while (availableCategories > 0);

    std::cout << "Thank you for playing! You got " << score << " out of " << categorySize * 4 << " correct!";

    return 0;
}

void printCategories(std::string categories[], int categorySize) {
    for (int i = 0; i < categorySize; i++) {
        std::cout << i + 1 << ". "<< categories[i] << '\n';
    }
}

bool searchCategories(int chosenCategories[], int userCategory) {

    for (int i = 0; i < 8; i++) {
        if (chosenCategories[i] == userCategory) {
            return true;
        }
    }

    return false;

}

int printQuestions(std::string questions[], std::string answers[][4], char correctAnswers[],int size) {
    char guess;
    int score = 0;
    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << '\n';
        for (int j = 0; j < size; j++) {
            std::cout << answers[i][j] << '\n';
        }
        std::cout << "What is your answer?: ";
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == correctAnswers[i]) {
            std::cout << "CORRECT!" << '\n';
            score++;
        } else {
            std::cout << "WRONG!" << '\n';
        }
    }
    return score;
}

void americanHistory() {
    std::string questions[] = {"What year was the Declaration of Independece signed?", "What year was the Emancipation Proclamation issued?", "What Constitutional Amendment prevented the sale of alcohol?", "What Country Gave America the Statue of Liberty?"};//the questions
    std::string answers[][4] = {{"A. 1736", "B. 1776", "C. 1773", "D. 1783"},
                                {"A. 1861", "B. 1862", "C. 1863", "D. 1864"},
                                {"A. 21st Amendment", "B. 18th Amendment", "C. 19th Amendment", "D. 17th Amendment"},
                                {"A. Germany", "B. China", "C. Mexico", "D. France"}};
    char correctAnswers[4] = {'B', 'C', 'B', 'D'};                          
    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void science() {
    std::string questions[] = {"What phenomena keep the planets in orbit around the sun?", "What is the largest organ in the human body?", "How many limbs does an octopus have?", "How do scientists measure the severity of an earthquake?"};

    std::string answers[][4] = {{"A. Photosynthesis", "B. Magnetism", "C. Solar Flares", "D. Graviy"},
                                {"A. The skin", "B. The heart", "C. The brain", "D. The lungs"},
                                {"A. 7", "B. 16", "C. 8", "D. 32"},
                                {"A. The Mohs Scale", "B. The Ordinal Scale", "C. The Richter Scale", "D. The Major Scale"}};
    
    char correctAnswers[4] = {'D', 'A', 'C', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void math() {
    std::string questions[] = {"What is the perimeter of a circle called?", "What is an angle called if it is greater than 90 degrees? ","What kind of number is negative four?", "What does the Roman numeral X equal?"};

    std::string answers[][4] = {{"A. The circumference", "B. The radius", "C. The area", "D. The product"},
                                {"A. Acute", "B. Right", "C. Wrong", "D. Obtuse"},
                                {"A. Positive", "B. Integer", "C. Binary", "D. Whole Number"},
                                {"A. Eight", "B. 20", "C. 100", "D. 10"}};

    char correctAnswers[4] = {'A','D', 'B', 'D'};
    int size = sizeof(questions)/sizeof(questions[0]);

    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void literature() {
    std::string questions[] = {"Who wrote the novel To Kill a Mockingbird", "What instrument did Sherlock Holmes play?", "What is Stephen King's first novel?", "Who is the protagonist of The Catcher in the Rye?"};

    std::string answers[][4] = {{"A. Harper Lee", "B. F. Scott Fitzgerald", "C. Frank Herbert", "D. Mark Twain"},
                                {"A. Cello", "B. Violin", "C. Piano", "D. Lyre"},
                                {"A. Salem's Lot", "B. Cujo", "C. Carrie", "D. Firestarter"},
                                {"A. Holden Caulfield", "B. J.D. Salinger", "C. Hester Prynne", "D. Ron Weasley"}};

    char correctAnswers[4] = {'A', 'B', 'C', 'A'};
    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void popCulture() {
    std::string questions[] = {"Who is the most recent actor to play James Bond?", "Who is the artist behind the hit song 'drivers license'?", "Which comedian did Will Smith slap?", "Which company did Michael Scott work for?"};

    std::string answers[][4] = {{"A. Tom Hiddleston", "B. Daniel Craig", "C. Pierce Brosnan", "D. John Cena"},
                                {"A. Ariana Grande", "B. Taylor Swift", "C. Olivia Rodrigo", "D. Marky Mark"},
                                {"A. Joe Rogan", "B. Chris Rock", "C. Dane Cook", "D. Carrot Top"},
                                {"A. Dunder Mifflin", "B. Acme Corporation", "C. Stark Industries", "D. Los Pollos Hermanos"}};

    char correctAnswers[4] = {'B', 'C', 'B', };
    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void politics() {
    std::string questions[] = {"What nation has the highest minimum wage?", "What European country encircles the Vatican?", 
    "Who is the current prime minister of Canada?", "What city is the capital of Thailand?"};
    std::string answers[][4] = {{"A. Australia", "B. Russia", "C. Ireland", "D. Venezuela"},
                                {"A. Spain", "B. Switzerland", "C. Poland", "D. Italy"},
                                {"A. Frank Smith", "B. Justin Trudeau", "C. Seth Rogen", "D. Tommy Douglas"},
                                {"A. Phuket", "B. Krabi", "C. Bangkok", "D. Pattaya City"}};

    char correctAnswers[4] = {'A', 'D', 'B', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}

void mythology() {
    std::string questions[] = {"Who was the Greek god of Wine?", "What is Medusa's hair made of?", "Who shot the arrow that killed Achilles?", "Which monster is half man and half bull?"};

    std::string answers[][4] = {{"A. Apollo", "B. Aether", "C. Dionysus", "D. Horae"},
                                {"A. Snakes", "B. String", "C. Spaghetti", "D. Wind"},
                                {"A. Hector", "B. Odysseus", "C. Paris", "D. Hypnos"},
                                {"A. Griffin", "B. Gorgon", "C. Siren", "D. Minotaur"}};

    char correctAnswers[4] = {'C', 'A', 'C', 'D'};

    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);

}

void sports() {
    std::string questions[] = {"What is the most popular sport in the world?", "Who was the first boxer to defeat Muhammad Ali?", "The olympics are held every how many years?", "How many holes are played in a round of golf?"};

    std::string answers[][4] = {{"A. American Football", "B. Ice Hockey", "C. Boxing", "D. Soccer"},
                                {"A. George Foreman", "B. Joe Frazier", "C. Leon Spinks", "D. Archie Moore"},
                                {"A. 8 years", "B. 4 years", "C. 6 years", "24 years"},
                                {"A. 18", "B. 22", "C. 30", "D. 14"}};

    char correctAnswers[4] = {'D', 'B', 'B', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    score = score + printQuestions(questions, answers, correctAnswers, size);
}