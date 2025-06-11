#include<iostream>
using namespace std;

int BinarySearch( int arr[] , int size , int key){

    int s=0;
    int e=size-1;

    int mid = (s+e)/2;

    while(s<=e) {

        if(arr[mid]==key){
            return mid;
        }
            if(key>arr[mid]){
                s= mid+1;
            }
           else{
            e= mid-1;
    }

        mid=(s+e)/2;

    }
    return -1;
}


   int main(){

    int even[6]={2,4,6,8,12,14};
    int odd[5]={3,5,7,9,11};

        int index =     BinarySearch(even, 6, 8);

        cout<<"index of 8 is "<<index<<endl;


         int index2 =     BinarySearch(odd, 5, 7);

         cout<<"index of 7 is "<<index2<<endl;

        return 0;
   }





