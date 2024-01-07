#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    int ans;
    cin >> N;
    int x,y;
    vector<int> arrx;
    vector<int> arry;


    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        arrx.push_back(x);
        arry.push_back(y);

    }

    int xmin= *min_element(arrx.begin(), arrx.end());
    int xmax = *max_element(arrx.begin(), arrx.end());
    int ymin= *min_element(arry.begin(), arry.end());
    int ymax = *max_element(arry.begin(), arry.end());
    
    ans =  (xmax - xmin) * (ymax - ymin);

    cout << ans;
return 0;
}