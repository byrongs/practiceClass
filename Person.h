
#pragma once


#define MAX_PERSON_NAME (100)
#include <string>
#include <iostream>

using namespace std;

typedef float Weight;

const Weight UNKNOWN_WEIGHT = 1;

class Person {

public: /// Default constructor ///
    Person();

    /// Overload constructor ///

    Person( string name, int age, float weight);


private:
    string newName; /// Member Variables
    int newAge;
    float newWeight;

};
