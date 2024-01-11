#include <iostream>
#include <string>
using namespace std;

int T;
string s;

int main()
{
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> s;
        if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
        {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}