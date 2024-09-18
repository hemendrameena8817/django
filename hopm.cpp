#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int targer){
    for(int i=0; i<sz; i++){
        if(arr[i] == targer){
            return i;

        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,3};
    int sz =5
    int targer = 8;
    cout << linearSearch(arr, sz, targer )<<endl;

    return 0;
}