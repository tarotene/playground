#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;

    vector<int> a(n, 0);
    for (size_t i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << a[0];
    for (size_t i = 1; i < a.size(); ++i)
    {
        cout << " " << a[i];
    }
    cout << endl;

    
    return 0;
}