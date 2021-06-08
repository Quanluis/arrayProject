// arrayProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

void createArrayTwo() {

    const int numbersTwo = 200; 

    int j = 0; 

    float numTwo[numbersTwo]; 

    string file; 

    ifstream inputFile("random.txt");

    while (!inputFile.eof()) {
        inputFile >> numTwo[j];
            j++;
    };

    for (int i = 0; i < j; i++) {
        cout << numTwo[i] << endl;
    }

}

void createArraysOne() {

    const int numbersOne = 200;

    int j = 0;

    float num[numbersOne];

    string file;

    ifstream inputfile("random.txt");

    while (!inputfile.eof()) {
        inputfile >> num[j];
        j++;
    };

    for (int i = 0; i < j; i++) {
        cout <<  num[i] << endl;
    }

}

void checkFile() {

    ifstream inputFile;

    //Variables

    inputFile.open("random.txt");


    if (!inputFile) {
        cout << "File not found" << endl;
    }
    else {
        cout << "File found." << endl;

        cout << endl;
    }

    inputFile.close();


};


int main()
{

    checkFile();
    createArraysOne();

    cout << " " << endl; 
    cout << " " << endl;

    createArrayTwo();
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
