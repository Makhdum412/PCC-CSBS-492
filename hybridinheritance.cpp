#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Intermediate class 1
class Mammal : public Animal {
public:
    // 'eat' function is already accessible through Animal
    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

// Intermediate class 2
class Bird : public Animal {
public:
    // 'eat' function is already accessible through Animal
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void display() {
        cout << "Bat is a mammal and a bird" << endl;
    }

    // Resolve ambiguity by specifying the base class for 'eat'
    void eat() {
        Mammal::eat(); // or Bird::eat();
    }
};

int main() {
    Bat bat;

    // Accessing methods from the derived class Bat
    bat.eat();

    // Accessing methods from the intermediate class Mammal
    bat.breathe();

    // Accessing methods from the intermediate class Bird
    bat.fly();

    // Accessing methods from the derived class Bat
    bat.display();

    return 0;
}
