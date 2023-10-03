#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int orders[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> orders[i];
    }
    int totalProducts[N] = {0};
    for (int i = 0; i < N; ++i)
    {
        int order = orders[i];
        int total = 0;
        while (order > 0)
        {
            total += order % 10;
            order /= 10;
        }
        totalProducts[i] = total;
    }
    for (int i = 0; i < N; ++i)
    {
        cout << totalProducts[i] << " ";
    }
    return 0;
}
