//Static Binding
// #include<iostream>

// class Animal {
// public:
//     void display() {
//         std::cout << "This is an animal." << std::endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void display() {
//         std::cout << "This is a dog." << std::endl;
//     }
// };

// int main() {
//     Animal a;
//     Dog d;

//     a.display();  // Outputs "This is an animal."
//     d.display();  // Outputs "This is a dog."

//     Animal* b=new Dog();
//     b->display();
    
// }

#include<iostream>

class Animal {
public:
    virtual void display() {
        std::cout << "This is an animal." << std::endl;
    }
};

class Dog : public Animal {
public:
    void display() override {
        Animal::display();
        std::cout << "This is a dog." << std::endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->display();  // Outputs "This is a dog."
    Animal b;
    Dog d;
    b.display();
    d.display();
    Animal c = Dog();  // Object slicing occurs here
    c.display();
}
