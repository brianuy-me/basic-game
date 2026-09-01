#include "character.hpp"

// Constructors
Character::Character(void) : m_name("unknown"), m_age(0), m_health(100) {} // default
Character::Character(std::string name, int age, float health) : m_name(name), m_age(age), m_health(health) {} // overload

// getters
    std::string Character::getName(void) const { return m_name; }
    int Character::getAge(void) const { return m_age; }
    float Character::getHealth(void) const { return m_health; }

// setters
    const void Character::setName(std::string name) { m_name = name; }
    const void Character::setAge(int age) { m_age = age;}
    const void Character::setHealth(float health) { m_health = health; }

    const void Character::setAllValues(void) {
        system("cls");
        std::cout << "Please type your name" << std::endl;
        std::getline(std::cin, m_name);
        system("cls");
        std::cout << "Please type your age" << std::endl;
        std::cin >> m_age;
        std::cin.ignore(); // Ignore the newline character left in the buffer
    }

// memeber functions
const void Character::printStats(void) const {
    system("cls");
    std::cout << "========================================" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Age: " << m_age << std::endl;
    std::cout << "Health points: " << m_health << std::endl;
    std::cout << "========================================" << std::endl;
}