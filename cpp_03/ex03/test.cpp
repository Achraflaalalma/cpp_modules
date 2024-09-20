#include <iostream>

class Animal {
public:
    virtual void makeSound(){
        std::cout << "Animal sound" << std::endl;
    }
    int age;
};


class Dog : virtual public Animal {
public:
    // void makeSound() {
    //     std::cout << "Woof" << std::endl;
    // }
};

class Cat : virtual public Animal {
public:
    // void makeSound() {
    //     std::cout << "Meow" << std::endl;
    // }
};


class Diamond : public Dog, public Cat {
public: 
    Diamond() {
        Dog::age = 10;
        Cat::age = 20;
    }  
    void makeSound() {œ
        std::cout << "Diamond sound" << std::endl;
    }
};





int main() {

    Diamond* diamond = new Diamond();
    std::cout << diamond->Cat::age << std::endl;
    std::cout << diamond->Dog::age << std::endl;
    return 0;
}