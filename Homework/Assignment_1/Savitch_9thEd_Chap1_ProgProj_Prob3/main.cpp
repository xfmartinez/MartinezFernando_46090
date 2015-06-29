/* 
 * File:   main.cpp
 * Author:Fernando Martinez 
 * Created on June 23, 2015, 9:20 PM
 * Purpose:Be able to input Number of Nickels,dimes and quarters and output value  
 */

#include <iostream>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototype
//Execution Begins Here 
int main(int argc, char** argv) {
    //Value of Nickels
    float nik; // Nickels 
    float dim; // Dimes 
    float qut; // Quarters 
    float sum; // Sum of value of coins entered
    
    cout<<"Input Number of Nickels you have.\n";
    cin>>nik;
    cout<<"Input Number of dimes you have.\n";
    cin>>dim;
    cout<<"Input Number of Quarters you have.\n";
    cin>>qut;
    //Process the Inputs here
    sum=(nik*5)+(dim*10)+(qut*25);
    cout<<"Total Value of coins entered is:"<<sum<<endl;
    //Exit stage right!

    return 0;
}

