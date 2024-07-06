/*
    Author: Code_with_Manav
    Concept: Inheritence
    Task: WAP to use inheritence concept adn using superclass and subclass to reduce the code repetation.
*/

#include <iostream>
#include <string>
using namespace std;

class Persons
{
    public:
        int age;
        string fullName;
        string phoneNumber;
};

class Student : public Persons 
{
    public:
        int studentId;
        string schoolName;
        
        void study() 
        {
            cout << "Studying" << endl;
        }
};

class Employee : public Persons
{
    public:
        int employeeId;

        string companyName;
    
        void work()
        {
            cout << "Working" << endl;
        }
};


int main() 
{
    return 0;
}