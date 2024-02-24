#include <iostream>

using namespace std;

int ans[3000];
int main()
{
    int a,b,count = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            count ++;
            ans[count] = i;
        }
    }
    cout << count << endl;
    for(int j = 1; j <= count; j++)
    {
        cout << ans[j] << " ";
    }
    return 0;
}