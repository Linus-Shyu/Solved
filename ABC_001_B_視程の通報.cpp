#include <iostream>

using namespace std;
int n;
int main()

{
    cin >> n;
    if(n < 100)
    {
        cout << "0" << "0";
    }
    else if(n < 1000)
    {
        cout << "0" << n / 100;
    }
    else if(n <= 5000)
    {
        cout << n / 100;
    }
    else if(n <= 30000)
    {
        cout << (n / 1000) + 50;
    }
    else if(n <= 70000)
    {
        cout << ((n / 1000) - 30)  / 5 + 80; 
    }                   
    else
    {
        cout << "89";
    }
    cout << endl;
    return 0;
}