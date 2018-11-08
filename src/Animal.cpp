#include "Animal.hpp"

using namespace std;

Animal::Animal(const std::string _name, int age, const std::string _habitat, const std::string _habbits) : name(_name), habitat(_habitat), habbits(_habbits)
{
}

void Animal::eat()
{
    cout << "I eat three times a day!" << endl;
}
std::string Animal::getname()
{
    return name;
}
void Animal::play()
{
    cout << "I like playing ball at " + habitat << endl;
}

std::string Animal::gethabbits() const
{
    return habbits;
}

Monkey::Monkey(const Animal &_animal, bool _havetail) : Animal(_animal), havetail(_havetail)
{
}

Monkey::Monkey(const std::string _name, int age, const std::string _habitat, const std::string _habbits, bool _havetail) : Animal(_name, age, _habitat, _habbits), havetail(_havetail)
{
}

void Monkey::steal()
{
    cout << "I like stealing foods!" << endl;
}

std::string Monkey::gethabbits() const
{
    return Animal::gethabbits();
}

void Monkey::gettail()
{
    if (havetail)
        cout << "haha, I have a tail!" << endl;
    else
        cout << "wuwu,I don't have atail" << endl;
}