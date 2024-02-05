#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        cout << i << endl;
    }
    if(a > b)   cout << "Error!";
    return 0;
}