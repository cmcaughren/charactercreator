
#include <iostream>
#include <string>
#include "character.h"

using namespace std;

//default constructor
Character::Character(): name(DEFAULT_NAME), gender(DEFAULT_GENDER), age(DEFAULT_AGE) {
    cout << "Character Default constructor";
}

//regular constructor
Character::Character(string name, string gender, int age): name(name), gender(gender), age(age) {
   cout << "Character Regular constructor";
}

//copy constructor
Character::Character(const Character& temp): name(temp.name), gender(temp.gender), age(temp.age) {
   cout << "Character Copy Constructor";

}

//move constuctor

Character::Character(Character&& temp): name(temp.name), gender(temp.gender), age(temp.age) {
    cout << "Character Move constructor";
} 

//destructor
Character::~Character()
{ cout << "Character Destructor"; }

//returns the name
string Character::getName() const
{
    return name;
}

//returns the gender
string Character::getGender() const{
    return gender;
}

//returns the age
int Character::getAge() const{
    return age;
}

//sets the name
void Character::setName(string name){
    this->name = name;
}

//sets the gender
void Character::setGender(string gender){
    this->gender = gender;
}

//sets the age
void Character::setAge(int age){
    this->age = age;
}

//copy assignment
Character& Character::operator = (const Character& temp){

    cout << "Character copy assignment";
    name = temp.getName();
    gender = temp.getGender();
    age = temp.getAge();

    return *this;
}

//move assignment
Character& Character::operator = (Character&& temp)
{
    cout << "Character move assignment";
    name = temp.name;
    gender = temp.gender;
    age = temp.age;

    return *this;
}

//displays Character stats
void Character::displayCharacter()
{
    cout << "The Characters statistics are as follows," << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
}
