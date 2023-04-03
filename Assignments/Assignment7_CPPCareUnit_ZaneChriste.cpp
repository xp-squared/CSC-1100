/*==========================================================

 Title:     Assignment 7 - C++ Care Unit
 Course:  	CSC 1100
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
using namespace std;


// Write functions here
float conversionMeters(float height_in_feet) {
    float height_in_meters = 0;
    height_in_meters = height_in_feet / 3.281;
    return height_in_meters;
}


float BMIcalculator(float w1) {
    float BMI = 0;
    float height = 1.8;
    BMI = w1/(1.8*1.8);
    return BMI;
}

float BMIcalculator(float w2, float h) {
    float BMI = 0;
    BMI = w2/(h*h);
    return BMI;
}

int swap(float w1,float w2) {
    int z = 0;
    z = w1;
    w1 = w2;
    w2 = z;
    return w1,w2;
}

/*
Notes !!!!!!!!!!!!!!
-always make sure that function is declared with type, such as float or int in the beginning
-make sure to declare what data type vars sent to functions declare
-use consistent data types for proper results!!!
*/

int main() {
    //DO NOT MODIFY MAIN()!!!
    
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}
