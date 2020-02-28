#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int* distinct(int ara[], int* ptr)
{
    int i, j = 0, n = *ptr;
    sort(ara, ara + n);
    for(i = 0; i < n - 1; i++)
    {
        if(ara[i] != ara[i + 1])
            ara[j] = ara[i], j++;
    }
    ara[j] = ara[n - 1];
    *ptr = j + 1;
    return ara;
}
int main()
{
    int ara[] = {7, 7, 2, 2, 0, 0, 1, -1, 6, -1}, n;
    n = sizeof(ara) / (sizeof(int));
    distinct(ara, &n);
    for(int i = 0; i < n; i++)
        cout<<ara[i]<<endl;
    return 0;
}
