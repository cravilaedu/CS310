// Ch02Exercise13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//To make a profit, a local store marks up the prices of its items by a certain percentage.
//  Write a C++ program that reads the original price of the item sold, the percentage of the marked-up price, and the sales tax rate.
//  The program then outputs the original price of the item, the percentage of the mark-up, the store's selling price of the item, the sales tax rate, the sales tax, and the final price of the item.
//  (The final price of the item is the selling price plus the sales tax.)

#include <iostream>
#include <iomanip>

int main()
{
	// Variables
    double orignalPrice;
    double markupPercentage;
    double salesTaxRate;

	// Asking user for values
    std::cout << "Enter the original price of the item: $";
	std::cin >> orignalPrice;

	std::cout << "Enter the markup percentage: ";
	std::cin >> markupPercentage;

	std::cout << "Enter the sales tax rate: ";
	std::cin >> salesTaxRate;
	
	// Calculations
	double sellingPrice = orignalPrice + (orignalPrice * (markupPercentage / 100));
	double salesTax = sellingPrice * (salesTaxRate / 100);
	double finalPrice = sellingPrice + salesTax;

	// Outputs
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Original price of the item: $" << orignalPrice << std::endl;
	std::cout << "Markup percentage: " << markupPercentage << "%" << std::endl;
	std::cout << "Selling Price: $" << sellingPrice << std::endl;
	std::cout << "Sales Tax Rate: " << salesTaxRate << "%" << std::endl;
	std::cout << "Sales Tax: $" << salesTax << std::endl;
	std::cout << "Final Price: $" << finalPrice << std::endl;

	return 0;
}
