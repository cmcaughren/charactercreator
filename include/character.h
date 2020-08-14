//header file for character class

#ifndef __CHARACTER_HEADER__
#define __CHARACTER_HEADER__

#include <iostream>
#include <string>

using namespace std;

const string DEFAULT_NAME = "Jane Doe";
const string DEFAULT_GENDER = "Female";
const int DEFAULT_AGE = 40;

class Character {
  private:
     string name;
     string gender;
     int age;
  public:
     //default constructor
     Character();
     
     //regular constructor
     Character(string name, string gender, int age);
     
     //copy constructor
     Character(const Character&);
     
     //move constructor
     Character(Character&&);

     //destructor
     ~Character();

     //returns the name
     string getName() const;

     //returns the gender
     string getGender() const;

     //returns the age
     int getAge() const;
             
     //sets the name
     void setName(string);

     //sets the gender
     void setGender(string);

     //sets the age
     void setAge(int);

     //copy assignment
     Character& operator = (const Character&);

     //move assignment
     Character& operator = (Character&&);

     //displays characte stats
     void displayCharacter();


};

#endif
