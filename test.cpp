// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6A
// Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). 
// The program should report all characters from the input line together with their ASCII codes.
// Make sure to print exactly one space between the character and it’s code.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string character; 

    cout << "Input: "; 
    getline(cin , character);

    for (int i = 0; i < character.length(); i++){
        cout << character[i] << " " << int(character[i]) << endl;
    }


}