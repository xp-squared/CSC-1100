/******************************************************************************

Lab 10-1 Zane Christe 

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int showChoice() {
    int uCH;
    cout << "MENU!" << endl; 
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> uCH; 
    return uCH;
}

int add(int x, int y) {
    int sum;
    sum = x + y;
    return sum; 
}

int sub(int x, int y) {
    int difference;
    difference = x - y;
    return difference; 
}

int mult(int x, int y) {
    int mult;
    mult = x * y;
    return mult; 
}

float quo(float x, float y) {
    float quo;
    quo = x / y;
    return quo; 
}


int main()
{
    int q = 1;
    int user; 
    while (q = 1) {
    user = showChoice();
    
    if (user == 1) {
        int x,y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Sum is " << add(x,y) << "\n\n";
    }
    
    else if (user == 2) {
        int x,y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Difference is " << sub(x,y) << "\n\n";
    }
    
    else if (user == 3) {
        int x,y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Product is " << mult(x,y) << "\n\n";
    }
    
    else if (user == 4) {
        float x,y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Quotient is " << quo(x,y) << "\n\n";
    }
    
    else if (user == 5) {
        break;
    }
    
    else {
        cout << "TRY AGAIN" << "\n\n";
        continue;
    }
    
    }

    return 0;
}




