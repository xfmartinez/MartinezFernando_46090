/* 
 * File:   main.cpp
 * Author: Fernando Martiinez
 * Created on June 30, 2015, 12:18 PM
 * Purpose: How many candy bars can I eat per day with out gaining weight 
 */
//system libraries 
#include <fstream>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short wtLbs, htInch, ageYrs, bmr;
    unsigned char  nChcbar,stLbs,calChoc=230;
    char sex;
    // read from file
    ifstream input;
    // Loop as long as we have data
    input.open("bmr.dat");
    while(input>>sex>>wtLbs>>htInch>>ageYrs){
        if(sex=='F'){
            bmr=655+4.3*wtLbs+4.7*htInch-4.7*ageYrs;
        }else{
            bmr=66+6.3*wtLbs+12.9*htInch-6.8*ageYrs;
        }
        nChcbar=bmr/calChoc;
        //output the results
        cout<<"sex = "<<sex<<endl;
        cout<<"Wt  = "<<wtLbs<<"(lbs)"<<endl;
        cout<<"Ht  = "<<htInch<<"(inches)"<<endl;
        cout<<"Age = "<<ageYrs<<"(years"<<endl;
        cout<<"Your BMR = "<<bmr<<"(cal)"<<endl;
        cout<<"Number of candy bars you may consume = "
                <<static_cast<int>(nChcbar)<<endl;
        cout<<endl<<endl;
        
    }
 

    return 0;
}

