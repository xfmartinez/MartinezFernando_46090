A/* 
 * File:   main.cpp
 * Author: Fernando Martinez 
 * Created on June 26, 2015, 10:37 AM
 * Purpose: Be able to Calculate the annual Pay of an employee (given values) 
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    short PyAmt;//The amount of money employee earns each pay period.
    short PyPrd;//The number of pay periods in a year. 
    float AnPy;//The employees total annual pay. 
    //Initializing Variables 
    PyAmt=1700;
    PyPrd=26;
    AnPy=(PyAmt*PyPrd); 
    //Output Products 
    cout<<"The Total Annual Income of this employee is ="<<(AnPy)<<"$"<<endl;
    //Exit Stage Right!!
           
    

    return 0;
}

