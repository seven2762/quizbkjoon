// 삼각형의 세 각을 입력받은 다음, 
// 세 각의 크기가 모두 60이면, Equilateral
// 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
// 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
// 세 각의 합이 180이 아닌 경우에는 Error를 출력하는 프로그램을 작성하시오.
#include <iostream>

using namespace std;
int main(void)
{
    int a,b,c;

    cin >> a >> b >> c;
    if (a && b && c == 60)
    {
        cout << "Equilateral";
    }
    else if(a + b + c == 180 && a == b || a == c || c == b)
    cout << "Isosceles";
    else if(a + b + c == 180 && a != b != c)
    cout << "Scalene";
    else if(a + b + c != 180)
    cout << "Error";
return 0;
}