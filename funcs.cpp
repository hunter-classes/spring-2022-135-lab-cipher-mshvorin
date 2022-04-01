#include <iostream>
#include "funcs.h"
#include <vector>
#include <cmath>
#include <limits>
#include <cfloat>
#include <bits/stdc++.h>

using namespace std;
// add functions here
string encryptCaesar(string plaintext, int rshift) {
	string deciphered;
	for (char c : plaintext) {
		if (isalpha(c)) {
		if (isalpha(char(int(c) + rshift))) {
		deciphered += char(int(c) + rshift);
			}
		else if (ispunct(char(int(c) + rshift))) {
		deciphered += char(int(c) + rshift - 26);
		}
			}
		else {
		deciphered += c;
			}
	}
	return deciphered;
}
	
char shiftChar(char c, int rshift) {
	return char(int(c) + rshift);
	}


string decryptCaesar(string ciphertext, int rshift){
  char letters[ciphertext.length()];
  string decrypted;
  for(int i = 0; i < ciphertext.length(); i++){
    letters[i] = ciphertext[i];
    decrypted += shiftChar(letters[i], rshift);
  }
  return decrypted;
}


double distance (vector <double> v1, vector <double> v2, int len) {
	double distance;
	for(int i = 0; i < len; i++){
    	if(v1[i] > v2[i]){
      distance += pow(v1[i], 2) - pow(v2[i], 2);
    }
  }
  
  return sqrt(distance);
  
}

string solve(string encrypted_string) {
	vector <double> englishFrequencies = {0.082, 0.015, 0.027, 0.047,
			      0.13, 0.022, 0.02, 0.062,
			      0.069, 0.0016, 0.0081, 0.04,
			      0.027, 0.067, 0.078, 0.019,
			      0.0011, 0.059, 0.062, 0.096,
			      0.027, 0.0097, 0.024, 0.0015,
			      0.02, 0.0078};
	vector <double> letterFrequencies = {0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0};
	string lowerabc = "abcdefghijklmnopqrstuvwxyz";
  	string upperabc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int chars = 0;
	int rot = 0;
	string rotate;
	double min = DBL_MAX;
	
	for (int i=0; i < 26; i ++) {
	rotate = encryptCaesar(encrypted_string, i);
	 	for(int j = 0; j < encrypted_string.length(); j++){
	 		if (lowerabc.find(rotate[j])!= string::npos){
			letterFrequencies[lowerabc.find(rotate[j])] += 1;
			chars += 1;
			}
			else if (upperabc.find(rotate[j]) != string::npos){
	 		letterFrequencies[upperabc.find(rotate[j])] += 1;
			chars += 1;
		}
	}
	int sum = 0;
	for (int j = 0; j < 26; j++) {
		 if (letterFrequencies[j] > 0){
		letterFrequencies[j] = letterFrequencies[j] / chars;
	      }
	    }
	    
	 if(min > distance(letterFrequencies, englishFrequencies, 26)){
		min = distance(letterFrequencies, englishFrequencies, 26);
		rot = i;
     	 }
     	 
     	 letterFrequencies = {0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0, 0, 0, 0,
			      0,0, 0, 0,
			      0, 0, 0, 0,
			      0, 0};
    chars = 0;
  }
  	
	string decrypted = decryptCaesar(encrypted_string, 26 - rot);
	return decrypted;
}


