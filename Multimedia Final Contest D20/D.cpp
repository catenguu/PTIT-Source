// https://codeforces.com/group/eFlt2UuXYv/contest/337144/problem/D
// D. [Multi D19] Kỳ thi cuối cùng của Tài John!

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long long a, long long b) { return a * b / gcd(a, b); }

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}