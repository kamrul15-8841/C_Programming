#include <iostream>

using namespace std;
int main()
{
    int i=-3,j=1,k=0,m;
    m = ++i && ++j && ++k;
    cout << i << " ";
    cout << j << " ";
    cout << k << " ";
    cout << m << " ";
    return 0;

}
