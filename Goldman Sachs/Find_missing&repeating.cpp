// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long sum = (1ll*n*(n+1))/2;
        long long sum2 = (1ll*n*(n+1)*(2*n+1))/6;
        long long s= 0, s2 = 0;
        for(int i=0;i<n;i++) {
            s += (long long)arr[i];
            s2 += (long long)arr[i] * (long long)arr[i];
        }
        long long val1 = s - sum; // x-y
        long long val2 = s2 - sum2;
        val2 = val2/val1;
        long long repeating = (val1 + val2)/2;
        long long missing = repeating - val1;
        return {(int)repeating, (int)missing};
    }
};