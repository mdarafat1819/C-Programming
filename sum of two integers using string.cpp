#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string sum(string str1, string str2)
{
    string summation;
    if(str2.length() > str1.length()) swap(str1, str2);
    int len1 = str1.length() - 1, len2 = str2.length() - 1;
    int sum, carry = 0;
    for(int i = len2; i>=0; i--, len1--)
    {
        sum = (str1[len1] - '0') + (str2[i] - '0') + carry;
        summation.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    for(int j = len1; j >= 0; j--)
    {
        sum = (str1[j] - '0') + carry;
        summation.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    if(carry) summation.push_back(carry + '0');
    reverse(summation.begin(), summation.end());
    return summation;
}

int main()
{
    cout<<sum("34", "4343")<<endl;

    return 0;
}
