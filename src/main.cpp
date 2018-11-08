#include "Animal.hpp"

int main()
{
    Animal m_animal = Animal("pony", 10, "grass", "coding");
    Monkey m_monkey = Monkey(m_animal, true);
    Monkey y_monkey = Monkey("taishan", 12, "forest", "requesting", false);

    std::cout << "\nI am " << m_animal.getname() << std::endl;
    m_animal.eat();
    std::cout << "I like " << m_animal.gethabbits() << std::endl;
    m_animal.play();

    std::cout << "\nI am " << m_monkey.getname() << std::endl;
    m_monkey.eat();
    std::cout << "I like " << m_monkey.gethabbits() << std::endl;
    m_monkey.play();
    m_monkey.steal();
    m_monkey.gettail();

    std::cout << "\nI am " << y_monkey.getname() << std::endl;
    y_monkey.eat();
    std::cout << "I like " << y_monkey.gethabbits() << std::endl;
    y_monkey.play();
    y_monkey.steal();
    y_monkey.gettail();

    return 0;
}