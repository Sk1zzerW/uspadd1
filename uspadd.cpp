#include <iostream>
#include <string>

class Pet {
protected:
    std::string name;
    std::string characteristic;

public:
    Pet(const std::string& petName, const std::string& petCharacteristic)
        : name(petName), characteristic(petCharacteristic) {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << "\nCharacteristic: " << characteristic << "\n";
    }

    virtual ~Pet() {}
};

class Dog : public Pet {
public:
    Dog(const std::string& dogName, const std::string& dogCharacteristic)
        : Pet(dogName, dogCharacteristic) {}

    void displayInfo() const override {
        std::cout << "[Dog]\n";
        Pet::displayInfo();
    }
};

class Cat : public Pet {
public:
    Cat(const std::string& catName, const std::string& catCharacteristic)
        : Pet(catName, catCharacteristic) {}

    void displayInfo() const override {
        std::cout << "[Cat]\n";
        Pet::displayInfo();
    }
};

class Parrot : public Pet {
public:
    Parrot(const std::string& parrotName, const std::string& parrotCharacteristic)
        : Pet(parrotName, parrotCharacteristic) {}

    void displayInfo() const override {
        std::cout << "[Parrot]\n";
        Pet::displayInfo();
    }
};

int main() {
    Dog myDog("Archy", "Loyal and playful");
    Cat myCat("Murka", "Independent and curious");
    Parrot myParrot("Kesha", "Talkative and colorful");

    myDog.displayInfo();
    std::cout << "\n";

    myCat.displayInfo();
    std::cout << "\n";

    myParrot.displayInfo();

    return 0;
}
