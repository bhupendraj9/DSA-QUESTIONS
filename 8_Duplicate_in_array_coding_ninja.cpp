// Filename :  8_Duplicate_in_array_coding_ninja.cpp
// Date :  23-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
int findDuplicate(vector<int> arr, int n)
{
    // Write your code here.
    int x = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        x = (x ^ arr[i]);
    }
    for (int i = 1; i < arr.size(); i++)
    {
        x = (x ^ i);
    }
    return x;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findDuplicate(*arr n);
    }
    return 0;
}