/*
Program: Change temp from either C to F or F to C
Author: Harrison Hesslink
Date: Jan 9, 2019
Description: Made this in class from the "program" design example.
*/
#include <iostream>
#include <string>

double convertToF(double temp){
return (temp * (double) 9/5) + 32;
}
int convertToC(int temp){
return (temp - 32) * (double) 9/5;
}

int main()
{
    std::string temp;
    std::string type;

    std::cout << "Enter Temp: ";
    getline (std::cin, temp);
    std::cout << "Enter Type (C or F): ";
    getline (std::cin, type);
    if(type == "C"){
        double convertedTemp = convertToF(std::stoi(temp));
        std::cout << "Converted Temp (F): " << convertedTemp;

    }else if(type == "F"){
        double convertedTemp = convertToC(std::stoi(temp));
        std::cout << "Converted Temp (C): " << convertedTemp;
    }else{
      std::cout << "Not supported Temp Type";
    }
    return 0;
}
