#include "Record.h"
#include <string>

Record::Record(){
    number = 0;
}

Record::Record( int recordNumber, string firstName, string lastName, int inAge, string pNumber ){
    number = recordNumber;
    fname = firstName;
    lname = lastName;
    age = inAge;
    phoneNumber = pNumber;
}

void Record::setNumber( int recordNumber ){
    number = recordNumber;
}

void Record::setfName( string firstName ){
    fname = firstName;
}

void Record::setlName( string lastName ){
    lname = lastName;
}

void Record::setAge( int inAge ){
    age = inAge;
}

void Record::setPhoneNumber( string pNumber ){
    phoneNumber = pNumber;
}

int Record::getNumber(){
    return number;
}

string Record::getfName(){
    return fname;
}

string Record::getlName(){
    return lname;
}

int Record::getAge(){
    return age;
}

string Record::getPhoneNumber(){
    return phoneNumber;
}