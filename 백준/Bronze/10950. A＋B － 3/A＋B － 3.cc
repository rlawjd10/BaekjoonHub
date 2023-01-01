#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int a,b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int sum = a + b;
        cout << sum << endl;
    }
    return 0;
}