#include <cstdlib>
#include <iostream>
#include <string>
#include "Record.h"
#include "Record.cpp"

using namespace std;

int main() {

    Record Records[10];
    bool exit = false;
    int userInput;
    int inNumber;
    string inFname;
    string inLName;
    int inAge;
    string inPhoneNumber;

    while( exit == false ){
        cout << "Menu" << endl;
        cout << "1. Input new information" << endl;
        cout << "2. Change existing information" << endl;
        cout << "3. Display all records" << endl;
        cout << "4. Exit application" << endl;
        cin >> userInput;
        cout << "\n\n" << endl;

        switch (userInput){
            case 1:
                cin.ignore();

                cout << "Enter record number: ";
                cin >> inNumber;
                Records[inNumber - 1].setNumber(inNumber);
                cout << "\n";

                cout << "Enter the first name: ";
                cin >> inFname;
                Records[inNumber - 1].setfName(inFname);
                cout << "\n";

                cout << "Enter the last name: ";
                cin >> inLName;
                Records[inNumber - 1].setlName(inLName);
                cout << "\n";

                cout << "Enter the age: ";
                cin >> inAge;
                Records[inNumber - 1].setAge(inAge);
                cout << "\n";

                cout << "Enter the phone number: ";
                cin >> inPhoneNumber;
                Records[inNumber - 1].setPhoneNumber(inPhoneNumber);
                cout << "\n";

                break;

            case 2:
                int alterNumber;
                int recLoc;
                char alterAnswer;
                cout << "Enter the record number you would like to alter: ";
                cin >> alterNumber;
                recLoc = alterNumber - 1;

                cout << "Below is the record info prior to altering." << endl;
                cout << "Record number: " << Records[recLoc].getNumber() << endl;
                cout << "Full name: " << Records[recLoc].getfName() << " " << Records[recLoc].getlName() << endl;
                cout << "Age: " << Records[recLoc].getAge() << endl;
                cout << "Phone number: " << Records[recLoc].getPhoneNumber() << endl;

                cout << "Is this the record you want to alter? (y or n) ";
                cin >> alterAnswer;
                
                if (alterAnswer == 'n'){

                    break;

                } else if (alterAnswer == 'y'){
                    cout << "Enter record number: ";
                    cin >> inNumber;
                    Records[inNumber - 1].setNumber(inNumber);
                    cout << "\n";

                    cout << "Enter the first name: ";
                    cin >> inFname;
                    Records[inNumber - 1].setfName(inFname);
                    cout << "\n";

                    cout << "Enter the last name: ";
                    cin >> inLName;
                    Records[inNumber - 1].setlName(inLName);
                    cout << "\n";

                    cout << "Enter the age: ";
                    cin >> inAge;
                    Records[inNumber - 1].setAge(inAge);
                    cout << "\n";

                    cout << "Enter the phone number: ";
                    cin >> inPhoneNumber;
                    Records[inNumber - 1].setPhoneNumber(inPhoneNumber);
                    cout << "\n";

                    break;
                }

            case 3:
                
                for (int i = 0; i < sizeof(Records) - 1; i++){
                    
                    if (Records[i].getNumber() == 0){
                        break;
                    } else if (Records[i].getNumber() != 0){
                        cout << "Record number: " << Records[i].getNumber() << endl;
                        cout << "Full name: " << Records[i].getfName() << " " << Records[i].getlName() << endl;
                        cout << "Age: " << Records[i].getAge() << endl;
                        cout << "Phone number: " << Records[i].getPhoneNumber() << endl;

                    }
                    break;
                }

            case 4:
                exit = true;
        }
    }



    return 0;
}