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
    std::string amount;
    double totalPrice = 0;
    double discount = 0;
    std::cout << "Enter Amount: ";
    getline (std::cin, amount);
    int p_amount = std::stoi(amount);

    if(p_amount > 1000){
        discount = ((p_amount - 1000) * .25) * .1;
    }
    totalPrice = (p_amount * .25) - discount;
    std::cout << "Total Amount: $" << totalPrice << " Total Saved: $" << discount;
    return 0;
}
