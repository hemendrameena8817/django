#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(24);
    vec.push_back(34);
    vec.push_back(45);
    vec.push_back(12);

    cout <<"sfetr push back = " << vec.size() <<endl;

    return 0;
}