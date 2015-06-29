/* 
 * File:   main.cpp
 * Author: Fernando Martinez
 * Created on June 26, 2015, 11:06 AM
 * Purpose: Display the Number of millimeters the ocean will rise in the upcoming  given year
 */

#include <iostream>

using namespace std;
//User Libraries 

//Global Constants 

//Function prototypes

//Execution Begins Here!!

int main(int argc, char** argv) {
    //Declare Variables 
    float OnLv_1, OnLv_2, OnLv_3, On_1; 
    //Initializing Values
    On_1=1.5;//The current ocean rising amount per year in (mm).
    OnLv_1=(On_1*5);//The amount the ocean will have risen in 5 year in (mm).
    OnLv_2=(On_1*7);//The amount the ocean will have risen in 7 years in(mm).
    OnLv_3=(On_1*10);//The amount the ocean will have risen in 10 years in(mm).
    //Output values 
    cout<<"The estimated amount the ocean will rise in 5 years is ="<<(OnLv_1)<<"mm"<<endl;
    cout<<"The estimated amount the ocean will rise in 7 years is ="<<(OnLv_2)<<"mm"<<endl;
    cout<<"The estimated amount the ocean will rise in 10 years is ="<<(OnLv_3)<<"mm"<<endl;

    return 0;
}

