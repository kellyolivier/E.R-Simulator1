//
//  Menu.hpp
//  E.R-Simulator
//
//  Created by Esrey on 5/6/18.
//  Copyright © 2018 Esrey Enterprises. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include <string>


void endPrompt(); //prompts for the name and calls getRecord, then prints out patient info

Patient getRecord(std::string name); //gets patient object from names vector and returns the object


#endif /* Menu_hpp */
