// Filename :  13_merge_2_sorted_arrays.cpp
// Date :  27-08-2022
// author - Bhupendra Jambhale
#include <bits/stdc++.h> //sk9
using namespace std;
void merge_sorted_arrays(int arr1[], int m, int arr2[], int n, int arr3[], int s)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < m) // jr dusra array lvkr sampla tr first array che kahi pudche elements he array3 mdhe yayche rahnar te anyala he vaprl
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) // jr pahila array lvkr sampla tr dusra array che kahi pudche elements he array3 mdhe yayche rahnar te anyala he vaprl
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge_sorted_arrays(arr1, 5, arr2, 3, arr3, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}