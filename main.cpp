/*

Author: Harrison Hesslink 
Date: 1/23/2019
IDE: Visual Studio 2017
Project: Assignment 1

Write a program named GeometryFun which prompts a user for a positive whole number and outputs the following:
The perimeter and area of a square whose side length is the entered number
The radius, circumference, and area of a circle whose diameter is the entered number
*/

#include <iostream>

using namespace std;

const double PI = 3.14159;

double calculatePerm(double n);
double calculateArea(double n,bool isCircle);
double calculateCircumference(double n);


void main() {
	double wholeNumber;

	//Get the input
	cout <<  "Please enter a whole number: ";
	cin >> wholeNumber;

	//Output if square
	cout << "A square with a side length of: " << wholeNumber << endl;
	cout << "Has a perimeter of: " << calculatePerm(wholeNumber) << endl;
	cout << "Has an area of: " << calculateArea(wholeNumber,false) << endl;

	//Output if circle
	cout << "A circle with a diameter length of: " << wholeNumber << endl;
	cout << "has a  radius of " << wholeNumber / 2 << endl;
	cout << "has a  circumference of " << calculateCircumference(wholeNumber) << endl;
	cout << "has an area of " << calculateArea(wholeNumber,true) << endl;

	cin.ignore(100);
}

//Calculate the perimeter with parameters: input number n, boolean isCircle
double calculateArea(double n,bool isCircle) {
	return isCircle ? ((n / 2) * (n / 2)) * PI : n * n;
}
//Calculate the perimeter with parameters: input number n
double calculatePerm(double n) {
	return n * 4;
}
//Calculate the circumference with parameters: input number n
double calculateCircumference(double n) {
	return 2 * (n / 2) * PI;
}