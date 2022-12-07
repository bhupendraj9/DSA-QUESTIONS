// Filename :  1_find_minimum_maximum_of_array.cpp
// Date :  22-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}
int main()
{
    int n;
    cout << "enter array size" << endl;
    cin >> n;
    int a[n];
    cout << "enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "sum = " << sum(a, n) << endl;
    return 0;
}