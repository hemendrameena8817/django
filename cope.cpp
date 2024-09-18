#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {2, 5, 6, 1,-6, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;

    for(int i=0; i<smallest; i++){
        if(nums[i] <smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest " << smallest << endl;
    return 0;

}