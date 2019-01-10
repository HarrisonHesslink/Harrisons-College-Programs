/*
Program: Change temp from either C to F or F to C
Author: Harrison Hesslink
Date: Jan 9, 2019
Description: Made this in class from the "program" design example.
*/
#include <iostream>
#include <string>

double convertToF(double temp){
return (temp * 1.8)+ 32;
}
double convertToC(double temp){
return (temp - 32) * 1.8;
}
double convertCToK(double temp){
  return (temp + 273.15);
}
double convertFToK(double temp){
return convertToC(temp) + 273.15;
}
double convertKToC(double temp){
return (temp - 273.15);
}
double convertKToF(double temp){
return convertToF(temp + 273.15);
}

int main()
{
  std::string temp;
  std::string type;
  std::string type2;


  std::cout << "Enter Temp: ";
  getline (std::cin, temp);
  std::cout << "Enter Type (C or F or K): ";
  getline (std::cin, type);
  std::cout << "Enter Return Type (C or F or K): ";
  getline (std::cin, type2);

    if(type == "C"){
      if(type2 == "F"){
        try {
        double convertedTemp = convertToF(std::stoi(temp));
        std::cout << "Converted Temp (F): " << convertedTemp << "F";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };
      }else if(type2 == "K"){
        try {

        double convertedTemp = convertCToK(std::stoi(temp));
        std::cout << "Converted Temp (K): " << convertedTemp << "K";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };

      }

    }else if(type == "F"){
      if(type2 == "C"){
        try{

        double convertedTemp = convertToC(std::stoi(temp));
        std::cout << "Converted Temp (C): " << convertedTemp << "C";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };
      }else if(type2 == "K"){
        try{

        double convertedTemp = convertFToK(std::stoi(temp));
        std::cout << "Converted Temp (K): " << convertedTemp << "K";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };
        }

    }else if(type == "K"){
      if(type2 == "F"){
        try{

        double convertedTemp = convertKToF(std::stoi(temp));
        std::cout << "Converted Temp (F): " << convertedTemp << "F";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };
      }else if(type2 == "F"){
        try{
        double convertedTemp = convertKToC(std::stoi(temp));
        std::cout << "Converted Temp (C): " << convertedTemp << "C";
      } catch (int e) {
        std::cout << "Temp was not a number!";
      };
        }


    }else{
      std::cout << "Not supported Temp Type";
    }
    return 0;
}
