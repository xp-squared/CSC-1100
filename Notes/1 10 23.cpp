/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.


// 1/10/23 NOTES!

*******************************************************************************/


//NOTES FROM INTRO TO CPP SLIDES
// Computer understands by using the compiler
// A computer cannot understand the spoken or written langauge that we humans use
// We cannot understand the binary language (0,1) that the computer uses to do its tasks

// It is therefore neccessary for us to write instructions in some specifically defined language, C++, which we can understand
// then have that very precise lanuage converted into the very concise lang that the computer can understand (0 and 1)
// That is the job of the compiler

// original c++ program is called source code, and the resulting compiled code produced by compiler is called object file

// Static library: library becomes part of your program
// Dynamic libraries: library does not become part of your executable it remains as a seperate unit # ON FINAL!!!!

// C++ object-oriented programming

// ide (integrated development environment)
// tutorial on slide to download codeblocks

// hexadecimal code

// syntax rules of langauge
// semantics rules of what you need to do green = go red = stop
// pragmatics conditions 

/* Multi line
comment!!!!!!!!!!!!!!!!!!!!!!!
*/

// spacing or indentation doesnt really matter in CPP
// ; semicolon lets compiler know its reached end of command
// SCOPE OPERATOR?
// #include <iostream> // must always do this to bring library
// CPP iostream lookup on google for more information cplusplus.com
// seeded database
// srand seating a random number, it is a function
// int a = 5 

#include <stdio.h>		// originally only thing there
#include <iostream>		// added
#include <fstream> // check out what this does
#include <iomanip> // iomanipulation library std::setw
using namespace std;		// added, using namespace lets us not have to type std in front of every command 

int main () // need main to do anything in cpp
{ // scope inside main is between these brackets
  cout << "Testing Testing!"; // output
  cout << "\n";
  return 0; // returns execution if program is successful
}


/* DATATYPES
PRIMARY
integer
character
boolean
floating point
double floating point
void
wide character

DERIVED
function
arrary
pointer
reference

USER DEFINED
class
structure 
union 