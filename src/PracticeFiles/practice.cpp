#include <iostream>
using namespace std;

class Grandparent {
public:
    void greet() {
        cout << "Hello from Grandparent!" << endl;
    }
};

class Parent : public Grandparent {
public:
    void greet() {
        cout << "Hello from Parent!" << endl;
    }
};

class Child : public Parent {
public:
    void greet() {
        cout << "Hello from Child!" << endl;
    }
};

int main() {
    Child childObj;
    childObj.greet(); // Which greet() method will be called?

    Parent* parentPtr = &childObj;
    parentPtr->greet(); // Which greet() method will be called now?

    Grandparent* grandparentPtr = &childObj;
    grandparentPtr->greet(); // Which greet() method will be called here?

    return 0;
}
