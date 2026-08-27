#pragma once
#include <iostream>
#include <string>

class Character {
    public:
    // constructor prototype
    Character(void); // default values
    Character(std::string name, int age, float health); // multi set (overload)

    // getters prototype
    std::string getName(void) const;
    int getAge(void) const;
    float getHealth(void) const;

    // setters prototype
    const void setName(std::string name);
    const void setAge(int age);
    const void setHealth(float health);

    const void setAllValues(void);

    // memeber functions
    const void printStats(void) const;

    private:
        std::string m_name;
        int m_age;
        float m_health;
};