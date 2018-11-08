#pragma once
#include <string>
#include <stdio.h>
#include <iostream>
class Animal
{
  private:
    std::string name;
    int age;
    std::string habitat;
    std::string habbits;

  public:
    Animal(const std::string _name, int age, const std::string _habitat, const std::string _habbits);
    void eat();
    std::string getname();
    virtual void play();
    virtual std::string gethabbits() const;
    virtual ~Animal() { std::cout << "bye animal" << std::endl; };
};

class Monkey : public Animal
{

  private:
    bool havetail;

  public:
    Monkey(const Animal &_animal, bool _havetail = true);
    Monkey(const std::string _name, int age, const std::string _habitat, const std::string _habbits, bool _havetail = true);
    void steal();
    virtual std::string gethabbits() const;
    void gettail();
    ~Monkey() { std::cout << "bye monkey" << std::endl; };
};