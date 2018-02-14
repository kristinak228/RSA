/*
 * Kristina Kolibab
 * Prof. Tino - CS 456
 * Assignment 2
 *
 * Compiling: g++ -Wall -pedantic -o ascii ASCII_gen.cpp -lntl -lgmp -std=c++11
 *
 */


#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <NTL/ZZ.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace NTL;

int main(int argc, char *argv[]){

	// Open file to write PowerMod calculations
	ofstream fout;
	fout.open("ASCII_Chars.txt");
	// Read in public keys
	ifstream fin;
	fin.open("a2.pubkeys");
	ZZ n;
	fin >> n;
	ZZ e;
	fin >> e;

	ZZ a, result;
	// For loop using PowerMod
	for(int i = 0; i < 128; ++i){
		a = i;
		result = PowerMod(a, e, n);
		fout << result << endl;
	}	

	fout.close();
	fin.close();
	return 0;
}




