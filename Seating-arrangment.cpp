#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int f=0,s=9, ans;
bool firstclass [5] = {0,0,0,0,0};
bool secondclass [5]= {};
int fspace = 5;
int positionint = 0 ;
int sspace= 8;
char check, con, position;

using namespace std;

//Function declarations
void first_class();
void second_class();
//Variable declarations
short int answer = 0;
char cont = 'y'; //So we do not quit immediately! The user can make this to n (no) later on.

int main()
{
    if(cont == 'n' || cont == 'N') //If the user chooses not to continue after booking a seat, then we will quit.
    {
        cout << "\t Thankyou for booking with SHARMA AIRLINE reservationss" << endl;
        return 0;
    }

cout << "\t---Welcome to the SHARMA AIRLINE booking system---" << endl;
    cout << "\t---Which class would you like?---" << endl;
	cout << "\t---(1) For First-Class---" << endl;
	cout << "\t---(2) For Economy-Class---" << endl;
    cin >> answer;
    if(answer == 1)
    {
        first_class(); //Function call.
    }
    else if(answer == 2)
    {
        second_class(); //Function call.
    }
    else
    {
        return 0; //Any other number quits.
    }
}
void first_class()
{
	cout<<"\tPlease choose a seat from 1-5"<< endl;
            cin >> positionint;
            f = positionint - 1;





