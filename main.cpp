#include <bits/stdc++.h>
using namespace std;


class Animal {											
private:
    string name;
  
  public:
  Animal(string n) : name(n) {}

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    virtual void makeSound() = 0; 
};


class Dog : public Animal {				 
public:
    Dog(string n) : Animal(n) {}

    void makeSound() override {
        cout << getName() << " says Woof Woof!" << endl;
    }
};


class Cat : public Animal {			
public:
    Cat(string n) : Animal(n) {}

    void makeSound() override {
        cout << getName() << " says Meow Meow!" << endl;
    }
};

int main() {

 
    Dog myDog("Dog's:");
    Cat myCat("Cat's:");
  
Animal* animals[] = {&myDog, &myCat};
    
    for (Animal* animal : animals) {
        animal->makeSound();
    }

    return 0;
}
