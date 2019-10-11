#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

#ifndef RECORD_H
#define RECORD_H

class Record{

    private:
        int number;
        string fname;
        string lname;
        int age;
        string phoneNumber;

    public:
        Record();

        Record( int recordNumber, string firstName, string lastName, int inAge, string pNumber );
        
        void setNumber( int recordNumber );

        void setfName( string firstName );

        void setlName( string lastName );

        void setAge( int inAge );

        void setPhoneNumber( string pNumber );

        int getNumber();

        string getfName();

        string getlName();

        int getAge();

        string getPhoneNumber();
};

#endif