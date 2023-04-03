/******************************************************************************

Zane Christe 
Lab 1: RNG Lab assignment 
1/17/2023

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib> // brings random 
#include <ctime> // time

using namespace std;

int main()
{
    srand(time(0)); // gives new seed with srand, takes the seed from unix epoch 
    cout << "The randomly selected number is: " << rand()% 91 + 10  << endl;
    // srand gives new seed, starting point
    // time(0) gives seconds since unix epoch 1970, which creates unpredicatable seed since every second is a new different number 
    // 91 + 10 generates numbers between 10 and 100, because we always start from 0 not 1 
    // 30 + 1985, numbers between 1985 and 2014
    // rand()% 100 = 0 to 99
    // 5 + 6 = 5,6,7,8,9,10
    // 10 + 6 = 10 11 12 13 14 15
    // 4 + 6 = 4 5 6 7 8 9 
    // 6 + 5 = 6 7 8 9 10
    // 25 + 10 = 10 to 35 
    // 11 + 20 = 20 and 30 
    // 9 + 20 = between 20 and 30, does not includes 30 
    // 11 + 11 = 11 and 20 
    // to explain this you add two numbers the two numbers in your head to create the number that it will end at 
    // if you want to do between 6 and 10 you must add 6 and 5 to get to 11, remember that we always start at 0 
    
    return 0;
}