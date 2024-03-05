// Binary to Decimal with Functions

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int BinToDec(string& input){
   int sum, n, power;
   
   n = input.size();
   
   sum = 0;
   power = 0;
   for (int i = n-1; i >= 0; --i){
      if (input.at(i) == '1'){
         sum += pow(2, power); 
      }
      power += 1;
   }
   return sum;
}
//////////////////////////////////////////////////


int main(){
   string input;
   while (true){
      cin >> input;
      if (input =="q") {
          break;
      }
      cout << BinToDec(input) << endl;
      continue;
   }
   return 0;
}