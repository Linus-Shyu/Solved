#include <iostream>

using namespace std;
int main()
{
    int a;
    cin >> a;
    int ans = a / 2;
    int ans_one = a / 6;

    for(int i = 1; i <= ans; i++)
    {
        cout << ans_one << " " << ans_one - 2 << endl;
    }
    return 0;
}