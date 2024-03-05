#include <iostream>
#include <iomanip>
using namespace std;
int main (){

   double weight, distance, distanceRate;
   double rate;
   double total;
   cin >> weight >> distance;
         
   if (weight <= 0){
      cout << "ILLEGAL WEIGHT: BELOW MINIMUM" << endl;
   }
   else if (weight >= 20){
      cout << "ILLEGAL WEIGHT: ABOVE MAXIMUM" << endl;
   }
   else if ((distance < 10) || (distance > 3000)){
      cout << "ILLEGAL DISTANCE" << endl;
   }
   else {
      distanceRate = distance/500;
      
      if (distanceRate == 0){
         distanceRate = 1;
      }
      if (weight <= 2){
      rate = 1.10;
      }
      else if (weight < 6){
         rate = 2.20;
      }
      else if (weight < 10){
         rate = 3.70;
      }
      else if (weight < 20){
         rate = 4.80;
      }
      
      total = rate * distanceRate;
      cout << fixed << setprecision(2) << total << endl;
   }
      return 0;
}  