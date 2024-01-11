#include <iostream>

using namespace std;

int T;
int a,b,c;
int main()
{
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        if(a + b == c)
        {
            cout << "+" << '\n';
        }
        if(a - b == c)
        {
            cout << "-" << '\n';
        }
    }
    return 0;

}