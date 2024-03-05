#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

void Area(double& s1, double& s2, double& s3){
   double semiPer;
   double area;
   if((s1 && s2 && s3) == 0){
   }
   else{
      semiPer = (s1 + s2 + s3)/2;
      area = sqrt(semiPer*(semiPer - s1) * (semiPer - s2) * (semiPer - s3));
      cout << fixed << setprecision(2) << area << endl;
   }
}

int main(){
   string s;
   ifstream inFS;
   double num1, num2, num3, num4, num5, num6;
   
   cin >> s;
   
   inFS.open(s);
   inFS >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
   
   Area(num1, num2, num3);
   Area(num4, num5, num6);
   
   inFS.close();
   
   return 0;
}