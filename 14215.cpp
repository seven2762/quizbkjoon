#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    int abc[3];
    int ans;
    for (int i = 0; i < 3; i++)
    {
        cin >> abc[i];
    }
    sort(abc, abc + 3);
    if (abc[2] > abc[0] + abc[1])
    {
        int temp = abc[2] - (abc[0] + abc[1]);
        ans = abc[2] - (temp + 1);
        ans = ans + abc[0] + abc[1];
    }
    else
    ans = abc[0] + abc[1] + abc[2];

    cout << ans << '\n';

return 0;

}
