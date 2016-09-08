//*****************

//Project Name: Chapter 9 Project: Array Pointer!

//Project Description: We need a new function in our array of Utilities which will expand an array when we run out of room.

//Project Author: Smith, Shannon

//Is this an extra credit Project:  No

//Date completed: 09/07/2016

//Operating system used: OSX

//IDE Used:  xCode

//*****************
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include "utilities.hpp"



//PROTO
int *expandArray(int*,  int, int);
int *compressArray(int*,  int, int);
using namespace std;
//MAIN
int main(int argc, const char * argv[]) {
    
    
    int size = 5;
    int shrink = 8;
    int expanded = 13;
    srand((unsigned)time(0));
    
    int *iPtr = nullptr;
    iPtr = new int[size];
    int* cPtr = nullptr;
    
    cPtr = new int[shrink];
    
    
    
    for(int i= 0; i < size; i++){
        int temp =(rand()%101);
        iPtr[i] = temp;
    }//for
    
    
    cout << "Welcome to my dynamic array demenstration.\n";
    cout << "\nOriginal array!\n";
    
    for (int i = 0; i < size; i++){
        cout << "Entry at " << i << " is " << iPtr[i] << endl;
    }
    
    cout << "\n";
    
    expandArray(iPtr, size, expanded);
    compressArray(cPtr, expanded, shrink);
    
    cout << "Goodbye; have a great day!\n";
    
    return 0;
}//MAIN

//DEFS
int* expandArray(int* intAP,  int CURRENT_SIZE, int max) {
    
    int* tempAP = nullptr;
    tempAP = new int[max];
    
    if ( CURRENT_SIZE < max){
        
        
        
        
        // allocate
        for (int i = 0; i < max; i++) {
            *(tempAP + i) = 0;
        }//for
        
        
        // copy old into new
        for (int i = 0; i < CURRENT_SIZE; i++) {
            *(tempAP + i) = *(intAP + i);
            
            //display copy
            cout << "Copying row "  << "[" << i << "]"
            << " with data " << intAP[i]
            << " into the new array \n";
            
            
        }//for
        
        //display new
        cout << "\nExpanded array! (+8)\n";
        
        for (int i = 0; i < max; i++){
            cout << "Entry at " << i << " Is " << tempAP[i] << endl;
        }//for
        
        cout << "\n";
        
        for (int i = 0; i < max; i++) {
            *(tempAP + i) = *(intAP + i);
            
            //display copy
            cout << "Copying row "  << "[" << i << "]"
            << " with data " << *(intAP + i)
            << " into the new array \n";
            
            
        }//for
        cout << "\n";
        
        
        
        //deallocate
        delete[] intAP;
        intAP = nullptr;
        
    }
    else{}
    return tempAP;
}//expandArray



int* compressArray(int* intAP,  int CURRENT_SIZE, int max) {
    
    int* tempAP = nullptr;
    tempAP = new int[max];
    
    
    if ( CURRENT_SIZE > max){
        // allocate
        for (int i = 0; i < max; i++) {
            *(tempAP + i) = 0;
        }//for
        for (int i = 0; i < max; i++){
            cout << "Entry at " << i << " Is " << tempAP[i] << endl;
        }//for
        
        
        // copy old into new
        for (int i = 0; i < CURRENT_SIZE; i++) {
            *(tempAP + i) = *(intAP + i);
            
        }//for
        
        //display new
        cout << "\nCompressed array! (-5)\n";
        
        for (int i = 0; i < max; i++){
            cout << "Entry at " << i << " Is " << tempAP[i] << endl;
        }//for
        
        cout << "\n";
        
        for (int i = 0; i < max; i++) {
            *(tempAP + i) = *(intAP + i);
            
        }//for
        cout << "\n";
        
        
        
        //deallocate
        delete[] intAP;
        intAP = nullptr;
        
    }
    else{}
    return tempAP;
}//compressArray




