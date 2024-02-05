#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(b % 2 != 0)
    {
        cout << b - 2;
    }
    else 
    {
        cout << b + 2;
    }
    return 0;
}