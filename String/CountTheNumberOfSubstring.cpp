#include<bits/stdc++.h>
using namespace std;
int main () {
   string str = "yellow";
   // finding the length of string
   int n = str.length ();
   // calculating result from formula
   int number_of_strings = n * (n + 1) / 2;
   cout << "Number of substrings of a string : " << number_of_strings;
   return 0;
}