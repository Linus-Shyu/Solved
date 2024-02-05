#include <iostream>
using namespace std;
int main()
{
    bigInteger a,b,c,d;
    unsigned long long count = 0;
    cin >> a >> b >> c >> d;
    for(int i = 1; i <= 1000; i++)
    {
        if(a + b <= d || a + b >= c)
        {
            count++;
        }
        a = a - b;
        if(c == d) 
        {
            cout << "0";
            return 0;
        }
    }
    cout << count;
    return 0;
}