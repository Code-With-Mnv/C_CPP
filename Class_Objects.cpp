/*
    Author: Code_with_Manav
    Concept: Classes and Objects 
    Task: WAP to print the details of DOGS using CLASSES AND OBJECTS.
*/

#include <iostream>
#include <string>
using namespace std;

class Dogs
{
    public:

        int age;
        string color;
        string breed;
        string pet_name;

    void dog_details()
    {
        cout << endl << "I have a " << breed << " dog whose name is " << pet_name <<"."<<  endl << "He is a " << age << " year old " << color << " coloured dog." << endl ;
    }
};

int main()
{
    Dogs dog1, dog2;

    dog1.age = 4;
    dog1.color = "black";
    dog1.breed = "Siberian Husky";
    dog1.pet_name = "Blackyy";

    dog1.dog_details();

    dog2.age = 6;
    dog2.color = "white";
    dog2.breed = "Alaskan Malamute";
    dog2.pet_name = "Alcyyy";

    dog2.dog_details();

    return 0;

}