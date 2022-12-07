// Filename :  1_find_minimum_maximum_of_array.cpp
// Date :  22-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
int findUnique(int *arr, int size)
{
    // Write your code here
    int xorn = 0;
    for (int i = 0; i < size; i++)
    {
        xorn = xorn ^ arr[i];
    }
    return xorn;
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
    cout << findUnique(a, n);
    return 0;
}