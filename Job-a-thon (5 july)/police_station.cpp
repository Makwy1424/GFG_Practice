// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int solve(int N, int a, vector<int> x)
    {
        // I have to find out any two max;
        sort(x.begin(), x.end());
        vector<int> aa(4);
        aa[0] = abs(x[0] - a);
        aa[1] = abs(x[1] - a);
        if (N > 2)
            aa[2] = abs(x[N - 1] - a);
        if (N > 3)
            aa[3] = abs(x[N - 2] - a);

        sort(aa.begin(), aa.end());
        return aa[2] + aa[3];
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int N, a;
        cin >> N >> a;

        vector<int> x(N);
        for (int i = 0; i < N; i++)
            cin >> x[i];

        Solution ob;
        cout << ob.solve(N, a, x) << "\n";
    }
    return 0;
}
// } Driver Code Ends