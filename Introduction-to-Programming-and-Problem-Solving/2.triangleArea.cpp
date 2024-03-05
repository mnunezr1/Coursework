#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
   double x1, y1;
   double x2, y2;
   double x3, y3;
   double a, b, c;
   double perimeter, halfPerimeter;
   double area;
   
   cin >> x1 >> y1 >> x2 >> y2>> x3>> y3;
   
   a = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
   b = sqrt((pow((x3-x1),2))+(pow((y3-y1),2)));
   c = sqrt((pow((x2-x3),2))+(pow((y2-y3),2)));
   
   perimeter = a + b + c;
   halfPerimeter = perimeter/2;
   
   area = sqrt(halfPerimeter*(halfPerimeter-a)*(halfPerimeter-b)*(halfPerimeter-c));
   
   cout << fixed << setprecision(2) << area << endl;
   
   return 0;
} 