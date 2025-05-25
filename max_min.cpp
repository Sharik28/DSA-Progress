#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {5,4,7,9,6};
    
    int max = numbers[0];
    int i;
    for(i=0;i<5;i++) {
        if (numbers[i]>max) 
        max = numbers[i];
        }
        cout << max << endl;
        
        return 0;
        }