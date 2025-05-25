#include<iostream>
#include<math.h>
using namespace std;

int main()
{ int a,b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    
    char op;
    cout << "Enter the operation" << endl;
    cin >> op;
    switch (op) {
     case '+': cout<< a+b << endl;
      break ;
     case '-': cout << a-b << endl; 
      break;
     case '*': cout << a*b << endl; 
      break;
     case '/':cout << a/b << endl;
      break;
     default: cout << "Invalid operator" << endl; 
    }
    }