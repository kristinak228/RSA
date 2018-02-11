/*
 * Kristina Kolibab
 * Prof. Tino - CS 456
 * Assignment 2
 *
 * Compiling: g++ -o decrypt rsa.cpp -lntl -lgmp -std=c++11
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

NTL_CLIENT

using namespace std;
using namespace NTL;

// reads in file line by line and puts into vector
vector<ZZ> read_file(ifstream& f){
	vector<ZZ> v;
	string line;
	ZZ num;

	while(f >> num){
		cout << num << endl;
		v.push_back(num);
		
	}

/*	for(auto i = v.begin(); i != v.end(); ++i){
		cout << *i << endl;
	}*/

	return v;
}

// decrypts each line

int main(int argc, char *argv[]){

	ifstream f("a2.cipher");

	// Two prime numbers p,q
	long p = 5;
	long q = 11;

	// compute n and phi
	long n = p*q;
	long phi = (p-1) * (q-1);

	read_file(f);	
	
	f.close();
	return 0;
}

