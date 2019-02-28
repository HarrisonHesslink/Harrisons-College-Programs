/*
Author: Harrison Hesslink
Assignment: Assignment 6
Class: CS-161
IDE: MAC CLION / Visual Studio
*/

#include <iostream>

using namespace std;

/*
* Name: getTime24
* Description: Gets the time in a 24 hour format
* Params: int hour, int minute
* Return: void (passes back data from reference)
*/
void getTime24(int &hour, int &minute);

/*
* Name: convertTime24to12
* Description: convertsTime2 format from 24 to 12
* Params: int hour, char ampm
* Return: int return of hour (passes back char from reference)
*/
int convertTime24to12(int hour, char &ampm);

/*
* Name: printTime24
* Description: prints 24 hour 
* Params: int hour, int minute, char
* Return: void
*/
void printTime24(int hour, int minute);

/*
* Name: printTime12
* Description: prints 12 hour
* Params: int hour, int minute, char
* Return: void
*/
void printTime12(int hour, int minute, char &ampm);

/*
* Name: wantToCont
* Description: asks if wants to continue
* Params: 
* Return: bool (true/false)
*/
bool wantToCont();

void main() {
	int hour;
	int minute;
	char ampm;
	bool letsCont = true;

	while (letsCont) {

		getTime24(hour, minute);

		int hour2 = convertTime24to12(hour, ampm);

		printTime12(hour2, minute, ampm);
		
		printTime24(hour, minute);

		letsCont = wantToCont();

	}
	cin.get();
	cin.ignore();
}

void getTime24(int &hour, int &minute) {
	char colon;
	bool isCorrect = false;
	while (!isCorrect) {
		cout << "Enter a time in the 24 hour format (13:45): ";
		cin >> hour >> colon >> minute;
		if (hour >= 0 && hour <= 24) {
			if (minute >= 0 && minute <= 59) {
				isCorrect = true;
			}
		}
	}
}

int convertTime24to12(int hour,char &ampm) {

	if (hour > 12)
	{
		hour -= 12;
		ampm = 'p';
	}
	else if (hour == 0) {
		hour = 12;
		ampm = 'a';
	}
	else
	{
		ampm = 'a';
	}
	

	return abs(hour);
}

void printTime24(int hour, int minute) {
	cout << "24 Hour Clock: " << hour << ":" << minute  << endl;
}
void printTime12(int hour, int minute, char &ampm) {
	cout << "12 Hour Clock: " << hour << ":" << minute << " " <<  ampm << + ".m." << endl;
}

bool wantToCont() {
	bool letsCont;
	char ans;
	cout << "Do you want to do another time? (Y / N): ";
	cin >> ans;
	if (ans == 'Y') {
		letsCont = true;
	}
	else 
	{
		letsCont = false;
	}

	return letsCont;
}
