/* 
 * File:   main.cpp
 * Author: Fernando Martiinez
 * Created on June 30, 2015, 12:18 PM
 * Purpose: How many candy bars can I eat per day with out gaining weight 
 */
//system libraries 
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!!
int main(int argc, char** argv) {
    //Set Random Variables 
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short op1, op2, results;
    bool doAgain;
    //Loop bases upon continuing to play with the math tutor
    do{
        //Determine op1/op2
        op1=rand()%900+100;//[100-999];
        op2=rand()%900+100;//[100-999];
        //Display the problem
        cout<<setw(6)<<op1<<endl;
        cout<<" + "<<op2<<endl;
        cout<<"------"<<endl;
       
        //Input the value for the sum
        cin>>results;
        //If correct output "Congratulations" else try again?
        if(results==op1+op2){
            cout<<"Congratulations"<<endl;
        }else{
            cout<<"Wroung Answer"<<endl;
        }
        //Prompt if they would like to continue
        cout<<"Would you like to continuie y/n"<<endl;
        char response;
        cin>>response;
        if(response=='y')doAgain=true;
        else doAgain=false;          
    }while(doAgain);
    //Exit stage right!
       

    return 0;
}

