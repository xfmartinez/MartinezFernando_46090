/* 
 * File:   main.cpp
 * Author:Fernando Martinez 
 * Created on June 28, 2015, 9:13 AM
 * Purpose:Land Calculation in 
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants 

//Function Prototypes 

//Execution begins here!
int main(int argc, char** argv) {
    int OAc, LSq, NAc; // One Acre of land, and the land given in square feet.
    OAc=43560; // One acre on land is equal to 43560 in square ft.
    LSq=389767; // The area of tract.
    NAc=(LSq/OAc); //The number of Acres of land.
    //Output Values 
    cout<<"The Number of acres in this tract of land = "<<NAc<<" Acres"<<endl;
    
            
    

    return 0;
}

