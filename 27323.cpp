// 정수 A, B 가 주어진다. 세로 길이가 A cm, 
//가로 길이가 B cm 인 아래와 같은 직사각형의 넓이를 cm2 단위로 구하시오.
#include <iostream>

int main(void)
{
    int a,b;

    std::cin >> a >> b;
    
    std::cout << a * b << '\n'; //넓이 출력

    return 0;
}

