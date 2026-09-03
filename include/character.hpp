#pragma once
#include <iostream>
#include <string>

class Character
{
public:
    // constructor
    Character() : Character("Unknown", 0, 100.f) {}

    Character(const std::string& name, int age, float health) 
        : m_name(name), m_age(age), m_health(health) {}

    // getters prototype
    const std::string&  getName()   const { return m_name; }
    int                 getAge()    const { return m_age; }
    float               getHealth() const { return m_health; }

    // setters
    void setName(const std::string& name)    { m_name = name; }
    void setAge(int age)                     { m_age = age; }
    void setHealth(float health)             { m_health = health; }

    // memeber functions
    void setAllValues();
    void printStats() const;

private:
    std::string m_name;
    int m_age;
    float m_health;
};