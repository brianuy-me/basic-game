#include "character.hpp"

void Character::setAllValues() {
    system("cls");
    std::cout << "Please type your name" << std::endl;
    std::getline(std::cin, m_name);
    system("cls");
    std::cout << "Please type your age" << std::endl;
    std::cin >> m_age;
    std::cin.ignore(); // Ignore the newline character left in the buffer
}

// memeber functions
void Character::printStats() const {
    system("cls");
    std::cout << "========================================" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Age: " << m_age << std::endl;
    std::cout << "Health points: " << m_health << std::endl;
    std::cout << "========================================" << std::endl;
}