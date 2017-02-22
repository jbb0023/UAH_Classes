// ***************************************************
// Project File: Project_11.cpp
// Name: John Bennett
// Course Section: CPE-211-01
// Lab Section: 01
// Due Date: 08/04/2016
// program description: 
// Performs various calculations on given numbers
// returns errors for invalid operations
// ***************************************************
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void OpenInFile(ifstream&);

const float PI = 3.14159265;

int main()
{
    ifstream inFile;                    // filestream variable
    string type, junk0, junk1, junk2;   // type of calculation (math or trig), junk items to be discarded
    char op, trigop, trigtype;          // characters representing operation to be performed, type of trig units
    float num1, num2, trignum;          // numbers to be used in calculation
    
    // open file stream, return error if invalid
    OpenInFile(inFile);

    // priming read to test if file is empty
    inFile >> type;
    
    // return error and exit if file is empty
    if (inFile.fail() == true)
    {
        cout << string(11,'*') << " Empty Input File  " << string(11,'*') << endl;
        cout << "==> The input file was empty.\n";
        cout << "==> There is no information to process.\n";
        cout << "==> Terminating the program!!!\n";
        cout << string(41,'*') << endl << endl;
        
        return 0;
    }
    
    // main while loop performs operations as directed by inputs using nested if statements
    while (inFile.fail() == false)
    {
        if (type == "Math")
        {
            // read in operation to be performed and numbers
            inFile >> op >> num1 >> num2;
            if (op == '+')
            {
                cout << "Add: " << num1 << op << num2 << " = " << num1 + num2 << endl;
            }
            else if (op == '-')
            {
                cout << "Sub: " << num1 << op << num2 << " = " << num1 - num2 << endl;
            }
            else if (op == '*')
            {
                cout << "Mul: " << num1 << op << num2 << " = " << num1 * num2 << endl;
            }
            else if (op == '/')
            {
                cout << "Div: " << num1 << op << num2 << " = " << num1 / num2 << endl;
            }
            else if (op == '%')
            {
                cout << "Mod: " << num1 << op << num2 << " = " << int(num1) % int(num2) << endl;
            }
            else
            {
                cout << "Invalid Operator for Math Operations: " << op << endl;
            }
            
        }
        else if (type == "Trig")
        {
            inFile >> trigop >> trigtype >> trignum;
            // angle type conversion equation: trignum = trignum * PI / 180;
            if (trigop == 's')
            {
                if (trigtype == 'd')
                {
                    cout << "sin(degrees): sin(" << trignum << ") = " << sin(trignum * PI / 180) << endl;
                }
                else if (trigtype == 'r')
                {
                    cout << "sin(radians): sin(" << trignum << ") = " << sin(trignum) << endl;
                }
                else
                {
                    cout << "Invalid angle units: " << trigtype << endl;
                }
            }
            else if (trigop == 'c')
            {
                if (trigtype == 'd')
                {
                    cout << "cos(degrees): cos(" << trignum << ") = " << cos(trignum * PI / 180) << endl;
                }
                else if (trigtype == 'r')
                {
                    cout << "cos(radians): cos(" << trignum << ") = " << cos(trignum) << endl;
                }
                else
                {
                    cout << "Invalid angle units: " << trigtype << endl;
                }            
            }
            else if (trigop == 't')
            {
                if (trigtype == 'd')
                {
                    cout << "tan(degrees): tan(" << trignum << ") = " << tan(trignum * PI / 180) << endl;
                }
                else if (trigtype == 'r')
                {
                    cout << "tan(radians): tan(" << trignum << ") = " << tan(trignum) << endl;
                }
                else
                {
                    cout << "Invalid angle units: " << trigtype << endl;
                }            
            }
            else
            {
                cout << "Invalid Operator for Trig Operations: " << trigop << endl;
            }
        }
        else
        {
            cout << "Invalid Calculation Type: " << type << endl;
            // read in following two unused values to continue filestream successfully
            inFile >> junk0 >> junk1 >> junk2;
        }
        // read in next type of calculation to be performed
        inFile >> type;
    }

    cout << endl;

    // turn off the lights
    inFile.close();    
    
    return 0;
}

void OpenInFile(ifstream& inFile)
{
    string input;
    
    cout << endl << "Enter the name of the input file now: ";
    cin >> input;
    cout << input << endl << endl;
    
    inFile.open(input.c_str());
    
    while (inFile.fail())
    {
        cout << string(12,'*') << " File Open Error " << string(12,'*') << endl;
        cout << "==> Attempted to open file: " << input << endl;
        cout << "==> Please try again...\n";
        cout << string(41,'*') << endl << endl;
        
        cout << "Enter the name of the input file now: ";
        cin >> input;
        cout << input << endl << endl;
        
        // clear the file stream
        inFile.clear();
        
        inFile.open(input.c_str());
    }
}
