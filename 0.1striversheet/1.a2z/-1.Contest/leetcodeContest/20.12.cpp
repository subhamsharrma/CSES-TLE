#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {4, 43, 22, 4, 3, 2, 1};
    int n = nums.size(); 

    for (int i = 0; i + 2 < n ; i++)
    {
        cout << nums[i] << nums[i + 1] << nums[i + 2] << endl;
    }
    return 0;
}

