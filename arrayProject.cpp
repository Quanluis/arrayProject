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

            display();
            
        };

        //Sort function prototypes

        void checkFile();
        void createArraysOne();
        void createArrayTwo();
        void display();

};

// Sort member function implementation


void Sort::checkFile() {

    ifstream inputFile;

    inputFile.open("random.txt");
     

    if (!inputFile) {
        cout << "File not found" << endl;

        exit(0);
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

    int comparison = 0;

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

    cout << "Array one sorted." << endl;

    cout << endl;

    // for loop to show the bubblesort works

    for (int i = 1; i < numbersOne; i++) {
        cout << num[i] << endl;    
    }

    cout << " " << endl;

    cout << exchanges << " exchanges were made." << endl;

    void linearSearch(); {

        int index = 0;
        int position = -1;
        bool found = false;
        int comparison = 0;

        while (index < numbersOne && !found) {
            comparison++;
            if (num[index] == 869) {
                found == true;
                position = index;

            }

            index++;

        }

        cout << num[position] << " Had to go through " << position << " lines to be found." << endl;

        cout << "A total of " << comparison << " comparisons were made to find " << num[position] << "." << endl;

        cout << endl;

    };

    void linearSearch();

}

void Sort::createArrayTwo() {

    //variables

    const int numbersTwo = 200; 

    int j = 0; 

    int exchanges = 0;

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

                exchanges += 1;

            }

        }

        numTwo[minIndex] = numTwo[startscan];
        numTwo[startscan] = minValue;

    }

    cout << "Array two sorted." << endl;

    cout << endl;

    // display to show selection sort works

    for (int i = 0; i < numbersTwo; i++) {
        cout << numTwo[i] << endl;
    }

    cout << " " << endl; 

    cout << exchanges << " exchanges were made." << endl;


    void binarySearch(); {

        int first = 0;
        int end = numbersTwo - 1;
        int middle;
        int position = -1;
        bool found = false;
        int comparison = 0; 

        while (!found && first <= end) {
            middle = (first + end) / 2;
            comparison++;
            if (numTwo[middle] == 869) {
                found = true;
                position = middle;
            }
            else if (numTwo[middle] > 869) {
                end = middle - 1;  
            }
            else
                first = middle + 1;
        }

        cout << numTwo[position] << " was found in element " << position << " of the array!" << endl;

        cout << "A total of " << comparison << " comparisons were made to find " << numTwo[position] << "." << endl;

    };

    void binarySearch();
 
}

void Sort::display() {

    checkFile();
    createArraysOne();
    createArrayTwo();
   
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
