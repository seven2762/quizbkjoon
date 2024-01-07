#include <iostream>
//세 점이 주어졌을 때, 
//축에 평행한 직사각형을 만들기 위해서 필요한 
//네 번째 점을 찾는 프로그램을 작성하시오.


using namespace std;

int main(void)
{
    int arr[3][2] = {0}; // 입력받기위해 2차원 배열 선언
    int x,y = 0;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (arr[0][0] == arr[1][0]) 
    {
        x = arr[2][0];
    }
    else if (arr[0][0] == arr[2][0])
    {
        x = arr[1][0];
    }
    else
    x = arr[0][0];
    if (arr[0][1] == arr[1][1])
    {
        y = arr[2][1];
    }
    else if(arr[1][1] == arr[2][1])
    {
        y = arr[0][1];
    }
    else 
    y = arr[1][1];

    cout << x <<" "<< y;

return 0;
}


