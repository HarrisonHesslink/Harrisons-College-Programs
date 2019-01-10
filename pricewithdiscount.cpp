/*
Program: Total Price Calculator with discount after x
Author: Harrison Hesslink
Date: Jan 9, 2019
Description: Made this in class from the "program" design example.
*/

// Example program
#include <iostream>
#include <string>

int main()
{
    std::string sA;
    std::string sDT;
    std::string sDP;
    std::string sP;

    int amount;
    double discountThreshold;
    double discountPercent;
    double price;

    double totalPrice = 0;
    double discount = 0;
    double avgPrice = 0;
    std::cout << "Enter Amount Buying (0): ";
    getline (std::cin, sA);
    std::cout << "Enter Discount Threshold(0): ";
    getline (std::cin, sDT);
    std::cout << "Enter Discount Percent (0%): ";
    getline (std::cin, sDP);
    std::cout << "Enter Price of each unit (0.00): ";
    getline (std::cin, sP);
    amount = std::stod(sA);
    discountThreshold = std::stod(sDT);
    discountPercent = std::stod(sDP);
    price = std::stod(sP);


    if(amount > discountThreshold){
        discount = ((amount - discountThreshold) * price) * (discountPercent / 100);
    }
    totalPrice = (amount * price) - discount;
    avgPrice = totalPrice / amount;
    std::cout << "Total Amount: $" << totalPrice << " | Total Saved: $" << discount << " | Average Price Per Unit: $" << avgPrice;
    return 0;
}
