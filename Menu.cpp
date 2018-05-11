//
//  Menu.cpp
//  E.R-Simulator
//
//  Created by Esrey on 5/6/18.
//  Copyright © 2018 Esrey Enterprises. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>

using namespace std;

void endPrompt()
{
    bool done = false;
    char boolAns = ' ';
    string name = "";
    cout << " Would you like to review patient info? Enter y for yes and any other character for no" << endl;
    cin >> boolAns;
    boolAns = tolower(boolAns);
    if (boolAns != 'y')
        done = true;

    while(!done)
    {
        cout << "Please enter the last name of the patient you wish to view the records of." << endl;
        cin >> name;
        for(int i =0; i<name.length(); i++)
        {
            name[i] = toupper(name[i]);
        }
        Patient record = Patient getRecord(std::string name);
        //series of print statements for aspects of patient record
    }
        cout << "Thank you, come again!" << endl;
}

Patient getRecord(std::string name)
{
    Patient record;
    
    //search vector for name
        //if no name found, turn null into error
        //if name found, return object
    
    return record;
}
