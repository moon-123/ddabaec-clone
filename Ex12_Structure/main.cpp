/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

using namespace std;

struct MyStruct
{
    int first;
    int second;
    // ... 추가 가능

    int Sum()
    {
        return first + second;
    }
};

int main()
{
    // member(.) operator
    MyStruct a;
    a.first = 123;
    a.second = 456;

    cout << "sizeof: " << sizeof(a) << endl;

    cout << "Sum: " << a.Sum() << endl;

    // 포인터는 member(->) operator가 화살표
    MyStruct *ptr_a = &a;
    cout << ptr_a << endl; // 주소
    
    cout << "값 변경 전: " << endl;
    cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Sum() << endl;

    ptr_a -> first = -5;
    ptr_a -> second = 10;

    cout << "값 변경 후: " << endl;
    cout << a.first << " " << a.second << " " << a.Sum() << endl;

    // 배열도 가능
    MyStruct pairs[10];

    for (int i = 0; i < 10; i++)
    {
        // pairs->first = i; // 주의
        // pairs->second = i * 10;
        // 배열이기 때문에 인덱싱한 후 접근
        pairs[i].first = i;
        pairs[i].second = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << pairs[i].Sum() << endl;
    }

    return 0;
}
