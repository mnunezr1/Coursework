#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
   string s;
   int sum, i, n, power;
   
   getline(cin, s);
   n = s.size();
   
   sum = 0;
   power = 0;
   for (i = n-1; i >= 0; --i){
      if (s.at(i) == '1'){
         sum += pow(2, power); 
      }
      power += 1;
   }
            
   cout << sum << endl;
   
   return 0;
}