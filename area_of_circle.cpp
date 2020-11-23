// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This is a program that calculates the area and perimeter of a circle
// with a radius of 15mm

#include <iostream>
#include <cmath>

int main()  {
    std::cout << "If a circle has a radius of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15, 2)) << "mm²" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
