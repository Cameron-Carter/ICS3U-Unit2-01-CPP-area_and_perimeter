// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program calculates the perimeter and area of a 15 mm radius circle

#include <iostream>
#include <cmath>

int main() {
    // This function calculates perimeter and area

    std::cout << "If a circle has the following radius:" << std::endl;
    std::cout << "15 mm" << std::endl;
    std::cout << std::endl;
    std::cout << "The area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "The perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
