#include<iostream>

class Animal
{
    public:
        void eat();
        void sleep();
        void drool();
};

class Turtle : public Animal
{
    public:
        void swim();
};

class Pig : public Animal
{
    public:
        void climb();
};

int main()
{
    Turtle turtle;
    Pig pig;

    turtle.eat();
    turtle.swim();
    pig.climb();

    return 0;
}

void Animal:: eat()
{
    std::cout << "I'm eating!" << std::endl;
}

void Animal::drool()
{
    std::cout << "I'm drolling!" << std::endl;
}

void Animal::sleep()
{
    std::cout << "I'm sleeping!" << std::endl;
}

void Turtle::swim()
{
    std::cout << "I'm sleeping!" << std::endl;
}

void Pig::climb()
{
    std::cout << "I'm climbing!" << std::endl;
}