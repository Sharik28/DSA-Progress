#include<iostream>
#include<math.h>
using namespace std;

bool isEven(int n) {

   if (n%2==0) 
   
     cout << "Number is Even" << endl;
     
   else 
       cout << "No is odd" << endl;  
       
       return 0;
       }
       
       int main() {
       
       int n;
       
       cin >> n;
       
       isEven(n);
       
       return 0;
       }