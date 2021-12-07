// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Date: Dec 6, 2021
// his program asks the user for the subtotal and the tax
// percentage. It then calculates and displays the HST
// and the total.
#include <iostream>
#include <iomanip>

int main() {
  // declare constants
  const float TAX_RATE = 0.13;

  // declare variables
  float subtotal, tax, total;

  // get the user input
  std::cout << "Enter the subtotal: ";
  std::cin >> subtotal;

  // calculate tax and the total
  tax = subtotal * TAX_RATE;
  total = subtotal  + tax;

  // display total
  std::cout << "You entered a subtotal of $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << subtotal << "\n";
  std::cout << "The HST is $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << tax << "\n";
  std::cout << "And the total is $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << total << "\n";
}
