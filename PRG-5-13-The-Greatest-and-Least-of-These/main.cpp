//
//  main.cpp
//  PRG-5-13-The-Greatest-and-Least-of-These
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  Write a program with a loop that lets the user enter a series of integers. The user should
//  enter -99 to signal the end of the series. After all the numbers have been entered, the
//  program should display the largest and smallest numbers entered.

#include <iostream>

using namespace std;

int main()
{
    int intLargest = 0, // Initialize counters
        intSmallest = 0,
        intToTest;
    
    cout << "Please enter a series of integer numbers.\n"
         << "This program will tell you the largest and smallest number\n"
         << "that you entered.\n"
         << "Please enter -99 when you are finished to terminate data entry.\n";
    cin >> intToTest;
    
    //Data validation, prevent user from entering -99 as first integer
    while(!cin || intToTest == -99)
    {
        cout << "Please enter a valid number before terminating the sequence:\n";
        cin.clear();
        cin.ignore();
        cin >> intToTest;
    }
    
    while(!cin || intToTest <= -1000 || intToTest >= 1000)
    {
        cout << "Please enter a number from -999 to 999:\n";
        cin.clear();
        cin.ignore();
        cin >> intToTest;
    }
    
    // Special initial case, have to set both smallest and largest
    // to the same value of the first number
    intSmallest = intToTest;
    intLargest = intToTest;
    
    while(intToTest != -99)
    {
        cout << "Please enter a number:\n";
        cin >> intToTest;
        
        while(intToTest <= -1000 && intToTest >= 1000)
        {
            cout << "Please enter a number from -999 to 999:\n";
            cin >> intToTest;
        }
        
        if(intToTest > intLargest && intToTest != -99)
        {
            intLargest = intToTest;
        }
        
        if(intToTest < intSmallest && intToTest != -99)
        {
            intSmallest = intToTest;
        }
    }
    
    cout << "Your largest number was: " << intLargest << endl
         << "And your smallest number was: " << intSmallest << endl;
    
    return 0;
}


