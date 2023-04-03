/*==========================================================

 Title:       Assignment 5 - Numerical Representation
 Course:      CSC 1100
 Author:      Zane Christe
 Date:        1/31/23
 Description: This program is assignment 5, we want to use loops and conditionals to solve the problem

 ==========================================================
*/
#include <iomanip>
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    

  int a,b; // initialize the variables
  cin >> a;
  cin >> b;
  bool b1 = true; 
  for(a; a <= b; a++) {
      if (a <= 9) {
        if (a == 1) {
            cout << "one\n";
            continue;
      }
        else if (a == 2) {
            cout <<"two\n";
            continue;
        }
        else if (a == 3) {
            cout <<"three\n";
            continue;
        }
        else if (a == 4) {
            cout << "four\n";
            continue;
        }
        else if (a==5) {
            cout << "five\n";
            continue;
        }
        else if (a==6) {
            cout << "six\n";
            continue;
        }
        else if (a==7) {
            cout<< "seven\n";
            continue;
        }
        else if (a==8) {
            cout << "eight\n";
            continue;
        }
        else if (a==9) {
            cout << "nine\n";
            continue;
        }
      }
      else if (a >= 10 && a % 2 == 0) {
          cout << "even\n";
          continue;
      }
      
      else if (a >= 10 && a % 2 == 1) {
        cout << "odd\n";
        continue;
          
      }
  
                   
  return 0;
} }


