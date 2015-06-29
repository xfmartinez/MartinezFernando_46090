/* 
 * File:   main.cpp
 * Author:Fernando Martinez
 * Created on June 23, 2015, 8:30 PM
 * Purpose: Input two integers and Output the sum 
 */

#include <iostream> //File I/O

using namespace std; //std namespace -> iostream 

//User Libraries 

//Execution Begins Here!


int main(int argc, char** argv) {
    //Define variables here 
    float integer_1, integer_2, sum, product;
    cout<<"Input a integer then press enter.\n ";
    cout<<"Enter the first integer:\n";
    cin>>integer_1;
    cout<<"Enter the second integer:\n";
    cin>>integer_2;
    //Process the input here
    sum=integer_1+integer_2;
    product=integer_1*integer_2;
    //output unknowns here
    cout<<"the sum of the two number entered is:"<<sum<<endl;
    cout<<"the product of the two numbers entered is:"<<product<<endl;
    //exit stage right.
    return 0;
 
}

