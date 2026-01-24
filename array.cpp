#include <bits/stdc++.h>
using namespace std;

int main() {
    // arr is stored in stack but new int[5] is stored in heap
    // int *arr = new int[5];
    // delete arr;

    int max = INT_MIN;
    int res = -1;

    int arr[14] = {1,5,6,4,7,2,5,5,8,4,7,7,7,7};
    map<int, int> mpp;

    for (int i = 0; i < 14; i++) {
        if(mpp.find(arr[i]) != mpp.end()){
            mpp[arr[i]]++;
            if(mpp[arr[i]] > max) {
                max = mpp[arr[i]];
                res = arr[i];
            }
        }else{
            mpp[arr[i]] = 1;
        }
    }

    cout <<  res <<endl;
}