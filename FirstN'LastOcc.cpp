#include<iostream>
using namespace std;

int FirstOcc( int arr[] , int size , int key){

    int s=0;
    int e=size-1;

    int mid = (s+e)/2;
    int ans = -1; // Initialize ans to -1 to indicate not found
    while(s<=e) {

        if(arr[mid]==key){
            ans = mid; // Update ans to the current mid
            e = mid - 1; // Move left to find the first occurrence
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else{
            e= mid-1;
        }

        mid=(s+e)/2;

    }
    return ans; // Return the first occurrence index or -1 if not found
}

    int LastOcc( int arr[] , int size , int key){
    int s=0;
    int e=size-1;
    int mid = (s+e)/2;
    int ans = -1; // Initialize ans to -1 to indicate not found
    while(s<=e) {

        if(arr[mid]==key){
            ans = mid; // Update ans to the current mid
            s = mid + 1; // Move right to find the last occurrence
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else{
            e= mid-1;
        }

        mid=(s+e)/2;

    }
    return ans; // Return the last occurrence index or -1 if not found
}


int main(){

    int even[6]={2,4,6,8,8,8};
    int odd[5]={3,5,7,9,11};

    int firstIndex = FirstOcc(even, 6, 8);
    cout<<"First occurrence of 8 is at index: "<<firstIndex<<endl;

    int lastIndex = LastOcc(even, 6, 8);
    cout<<"Last occurrence of 8 is at index: "<<lastIndex<<endl;

    return 0;
}

   