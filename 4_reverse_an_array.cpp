// Filename :  1_find_minimum_maximum_of_array.cpp
// Date :  22-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
void reverse(int a[], int i, int j)
{
    if (i <= j)
    {
        swap(a[i], a[j]);
        reverse(a, i + 1, j - 1);
    }
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
    cout << "array before reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    reverse(a, 0, n - 1);
    cout << "array after reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}