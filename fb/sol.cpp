#include <bits/stdc++.h>
using namespace std;


#define int long long int
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

void solve(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++) {
 
        unordered_set<int> s;
         int curr_sum = sum - arr[i];
        for (int j = i + 1; j < n; j++) {

            int required_value = curr_sum - arr[j];
            if (s.find(required_value) != s.end()) {
                YES;
                return;
            }
            s.insert(arr[j]);
        }
    }
 
    NO;
}
 
int32_t main()
{   

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    solve(arr, n, 0);
 
    return 0;
}