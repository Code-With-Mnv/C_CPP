/*
    Author: Code_with_Manav
    Concept: Parameterized Constructors
    Task: WAP to add a parameterized constructor in the previous program and make it perform an action.
*/

#include <iostream>
#include <string>
using namespace std;

class Dog 
{
    public:
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();

        Dog();

        Dog(string breed, int age, string color, string petName)
        {
            this -> breed = breed;
            this -> age = age;
            this -> color = color;
            this -> petName = petName;
        }
};

Dog :: Dog() 
{
    cout << "Dog object created\n";
}

void Dog :: displayDetails() 
{
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main()
{
    Dog dog1("Dalmatian", 7, "White-black", "Jackie");
    dog1.displayDetails();

    Dog dog2("Beagle", 4, "Brown", "Pluto");
    dog2.displayDetails();

    return 0;
}