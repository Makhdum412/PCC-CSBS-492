#include <iostream>

using namespace std;

// Base class 1
class BaseClass1 {
public:
    void display1() {
        cout << "BaseClass1 Display" << endl;
    }
};

// Base class 2
class BaseClass2 {
public:
    void display2() {
        cout << "BaseClass2 Display" << endl;
    }
};

// Derived class inheriting from BaseClass1 and BaseClass2
class DerivedClass : public BaseClass1, public BaseClass2 {
public:
    void displayDerived() {
        cout << "DerivedClass Display" << endl;
    }
};

int main() {
    // Create an object of the derived class
    DerivedClass derivedObj;

    // Access methods from BaseClass1
    derivedObj.display1();

    // Access methods from BaseClass2
    derivedObj.display2();

    // Access methods from DerivedClass
    derivedObj.displayDerived();

    return 0;
}
