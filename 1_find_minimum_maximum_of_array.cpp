// Filename :  1_find_minimum_maximum_of_array.cpp
// Date :  22-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
int minimum(int a[], int n)
{
    return *min_element(a, a + n);
}
int maximum(int a[], int n)
{
    return *max_element(a, a + n);
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
    cout << "minimum = " << minimum(a, n) << endl;
    cout << "maximum = " << maximum(a, n);
    return 0;
}