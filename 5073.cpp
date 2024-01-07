#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int abc[3] = {0};
    int a,b,c;
    while(true)
    {   
        cin >> abc[0] >> abc[1] >> abc[2];
        sort(abc, abc + 3);
        a = abc[0];
        b = abc[1];
        c = abc[2];

       if(a == 0 && b == 0 && c == 0) 
        break;
       if(c >= a + b)
        cout << "Invalid" << endl;
        else if(a == b && b == c)
        cout <<"Equilateral" << endl;
        else if((a != b && b == c) || (a != c && a == b))
        cout << "Isosceles" << endl;
        else if((c < a + b) && (a != b && b != c && a != c))
        cout << "Scalene" << endl;
    }
return 0;
}