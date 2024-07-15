#pragma once
#ifndef CALCULATIONS_H_
#define CALCULATION_H_

#include <chrono>
#include <thread>
#include <iostream>
#include <fstream>//C++ function to read and write to files
#include <sstream>// convert string to an int 

using namespace std;


int main(){
    std::ofstream ofile;

    std::fstream myfile("investment.txt", std::ios_base::in);

    int BankBalance;
    while (myfile >> BankBalance)
    {
        std::cout << "$" << BankBalance << endl;
    }

    }

#endif //CALCULATIONS_H_


