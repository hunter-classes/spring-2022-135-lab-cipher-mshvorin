#pragma once
#include <vector>
using namespace std;
// add prototypes here
string encryptCaesar(string plaintext, int rshift);
char shiftChar(char c, int rshift);
string decryptCaesar(string ciphertext, int rshift);
double distance (vector <double> v1, vector <double> v2, int len);
string solve(string encrypted_string);
