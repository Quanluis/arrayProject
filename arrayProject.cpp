// arrayProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Sort {

        private:

        public: 

        //Constructor

        Sort() {

            cout << "Running program." << endl;


            checkFile();

            createArraysOne();

            createArrayTwo();

        };

        //Sort function prototypes

        void createArrayTwo();
        void createArraysOne();
        void checkFile();
        void display();

};

// Sort member function implementation


void Sort::checkFile() {

    ifstream inputFile;

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

void Sort::createArraysOne() {

    //variables

    const int numbersOne = 201;

    int j = 0;

    int swap;

    int exchanges = 0;

    int num[numbersOne];

    string file;

    ifstream inputfile("random.txt");

    while (!inputfile.eof()) {
        inputfile >> num[j];
        j++;
    };

    for (int i = 0; i <= 201; i++) {


        for (j= i+1; j <= 200; j++) {
            
            if (num[i] > num[j]) {
                swap = num[i];
                num[i] = num[j];
                num[j] = swap;

                exchanges += 1;

            }

        }
    }

    // for loop to show the bubblesort works

    for (int i = 1; i < numbersOne; i++) {
        cout << num[i] << endl;    
    }

    cout << " " << endl;

    // exchanges

    cout << exchanges << " exchanges were made." << endl;

}

void Sort::createArrayTwo() {

    //variables

    const int numbersTwo = 200; 

    int j = 0; 

    int exhanges = 0;

    int startscan, minIndex, minValue;

    int numTwo[numbersTwo]; 

    string file; 

    ifstream inputFile("random.txt");

    while (!inputFile.eof()) {
        inputFile >> numTwo[j];
            j++;
    };

    for (startscan = 0; startscan < (numbersTwo - 1); startscan++) {

        minIndex = startscan;
        minValue = numTwo[startscan];

        for (int index = startscan + 1; index < numbersTwo; index++) {

            if (numTwo[index] < minValue) {

                minValue = numTwo[index];
                minIndex = index;

                exhanges += 1;

            }

        }

        numTwo[minIndex] = numTwo[startscan];
        numTwo[startscan] = minValue;

    }

    // display to show selection sort works

    for (int i = 0; i < numbersTwo; i++) {
        cout << numTwo[i] << endl;
    }


    cout << " " << endl; 

    cout << exhanges << " exchanges were made." << endl;
    

}

void Sort::display() {

    void createArrayTwo();
    void createArraysOne();
    void checkFile();

}


int main()
{
    Sort m;

    return 0;

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
