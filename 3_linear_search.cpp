// Filename :  1_find_minimum_maximum_of_array.cpp
// Date :  22-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
bool linearsearch(int a[], int n, int num)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
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
    cout << "enter element to search" << endl;
    int num;
    cin >> num;
    if (linearsearch(a, n, num) == true)
        cout << "element is found in array" << endl;
    else
        cout << "element is not found in array" << endl;

    return 0;
}