#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;
const char nl = '\n';

void setIO(string name = "")
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (name.size())
    {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int maxF(vector<int> &v, int ind)
{
    if (ind == 0)
        return v[ind] - 1;
    else if (ind == (int)v.size())
        return v[ind - 1] - 1;
    return min(v[ind - 1], v[ind]) - 1;
}

int minF(vector<int> &v, int ind)
{
    int left = 1;
    if (ind > 0)
        left = v[ind - 1] - maxF(v, ind - 1);
    int right = 1;
    if (ind < (int)v.size())
        right = v[ind] - maxF(v, ind + 1);
    return max(left, right);
}

int main()
{
    setIO();

    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> v[i];
    int ans = INT_MAX;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int maxV = maxF(v, i);
        if (maxV <= 0)
            flag = false;
        int minV = minF(v, i);
        if (minV > maxV)
            flag = false;
        if (!flag)
            break;
        ans = min(ans, maxV - minV + 1);
    }
    cout << (flag ? ans : 0) << nl;

    return 0;
}

/***Author: Vishwajeet Prasad***/