#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long proizvA = 1, proizvB = 1, proizvAB = 1;
    for(long long i = a; i < 20; ++i)
    {
        proizvA *= i;
    }
    cout << proizvA << endl;
    for(long long i = b; i < 20; ++i)
    {
        proizvB *= i;
    }
    cout << proizvB << endl;
    for(long long i = a; i < b + 1; ++i)
    {
        proizvAB *= i;
    }
    cout << proizvAB << endl;
    return 0;
}
