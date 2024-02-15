#include <iostream>
#include <string>
#include <ctime>

class VirtualPet {
private:
    std::string name;
    int hunger;
    int happiness;

public:
    VirtualPet(std::string petName) : name(petName), hunger(50), happiness(50) {}

    void feed() {
        hunger -= 10;
        if (hunger < 0) {
            hunger = 0;
        }
        std::cout << name << " happily eats the food. Yummy!\n";
    }

    void play() {
        happiness += 10;
        if (happiness > 100) {
            happiness = 100;
        }
        std::cout << name << " enjoys playing with you. It's having so much fun!\n";
    }

    void checkStatus() {
        std::cout << "-------------------------\n";
        std::cout << name << "'s Status:\n";
        std::cout << "Hunger: " << hunger << "/100\n";
        std::cout << "Happiness: " << happiness << "/100\n";
        std::cout << "-------------------------\n";
    }
};

int main() {
    srand(time(0)); // Seed for random number generation

    std::cout << "Welcome to the Virtual Pet Simulator!\n";
    std::string petName;
    std::cout << "Enter your pet's name: ";
    std::cin >> petName;

    VirtualPet pet(petName);

    int choice;
    do {
        std::cout << "\nWhat would you like to do?\n";
        std::cout << "1. Feed " << petName << "\n";
        std::cout << "2. Play with " << petName << "\n";
        std::cout << "3. Check " << petName << "'s status\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                pet.feed();
                break;
            case 2:
                pet.play();
                break;
            case 3:
                pet.checkStatus();
                break;
            case 4:
                std::cout << "Exiting the Virtual Pet Simulator. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
