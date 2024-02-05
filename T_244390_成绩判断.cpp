#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a < 60 && b >= 60 && c >= 60)
    {
        cout << "1";
        return 0;
    }
    if(b < 60 && a >= 60 && c >= 60)
    {
        cout << "1";
        return 0;
    }
    if(c < 60 && a >= 60 && b >= 60)
    {
        cout << "1";
        return 0;
    }
    else cout << "0";
    return 0;
}