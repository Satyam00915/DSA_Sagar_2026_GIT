#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1, 8, 5, 3, 6, 7, 32, 5, 78};
    int target;
    cin >> target;

    map<int, int> mpp;
    bool flag = false;

    for (int i = 0; i < 9; i++)
    {
        int diff = target - arr[i];
        if (mpp.find(diff) != mpp.end())
        {
            flag = true;
            cout << "Target " << target << " is the sum of indexes (" << i << "," << mpp[diff] << ")" << endl;
        }
        else
        {
            mpp[arr[i]] = i;
        }
    }

    if (!flag)
    {
        cout << "Target is not present";
    }
}