‘/* 
 * File:   main.cpp
 * Author: Fernando Martinez
 * Created on June 29, 2015, 12:43 PM
 * Purpose: To show that Truth 
 */

#include <iostream>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    int min=10, max=100;
    
    //Input the values for a and b
    cout<<"Input 2 integer values between"<<min<<"and";
    cout<<max<<endl;
    cin>>a>>b;
    
    //validate the results
    if(a>=min && a <=max && b>=min && b<=max){
        //promt the user for which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage variable -> s or in-place -> i"<<endl;
        //Declare the variable type
        char type;
        cin>>type;
        switch(type){
            case 'S':{
                int temp=a;
                a=b;
                b=temp;
                cout<<"type and temp are visible do to scope"<<endl;
                cout<<"type = "<<endl;
                break;
            }
            case 'i':{
                a=a^b;
                b=a^b;
                a=a^b;
                
            }            
            default: cout<<"You don't follow instructions"<<endl;
             
        }
    }else{
        cout<<"You don't follow instructions"<<endl;
        cout<<"No swap for you"<<endl;
        

    }
    //Output the results for the swap
    cout<<"old a = "<<b<<", new a = "<<a<<endl;
    cout<<"old b ="<<a<<",new b ="<<b<<endl;
    //cout<<temp<<endl; // Scope/visability error
    //exit stage right!
    return 0;
    }
