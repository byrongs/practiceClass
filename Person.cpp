//
// Created by Alice Soriano on 5/12/22.
//

#include <stdexcept>

#include "Person.h"

using namespace std ;

Person::Person() {
    newName = "IDK";
    newWeight = 0;
    newAge = 0;
    cout << "Name: '" << newName << "' Age: '" << newAge << "' Weight: '" << newWeight << "'" << endl;
}

Person::Person(string name, int age, float weight) {
    newName = name;
    newWeight = weight;
    newAge = age;
    cout << "Name: '" << name << "' Age: '" << age << "' Weight: '" << weight << "'" << endl;
}



