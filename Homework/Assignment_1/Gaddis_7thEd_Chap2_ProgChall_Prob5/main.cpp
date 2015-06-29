/* 
 * File:   main.cpp
 * Author:Fernando Martinez 
 * Created on June 26, 2015, 9:34 AM
 * Purpose:Be Able to calculate the average off given values  
 */

#include <iostream>
using namespace std;

//User Libraries 

//Global Constants 

//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    char Tw, Tr, Tr_7, Tw_4, Tr_3; 
    float sum;
    //Initialize Values 
    Tw=28; Tr=32; Tr_7=37; Tw_4=24;Tr_3=33;
    sum=Tw+Tr+Tr_7+Tw_4+Tr_3;
    cout<<"The Average of the given vales is ="<<(sum/5)<<endl;
            
          
    
    return 0;
}


