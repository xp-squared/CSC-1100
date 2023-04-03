/******************************************************************************

Lab 5-1 Zane Christe

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  float a,b,c,s,area;
  cout << "Enter three sides of a triangle: ";
  cin >> a >> b >> c;
  s = (a+b+c)/2; 
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  cout << "Area of the triangle is : " << area;
  
  
  return 0;
}