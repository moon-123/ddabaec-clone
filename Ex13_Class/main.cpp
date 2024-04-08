/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

using namespace std;

// public, private 접근 권한 확인

class MyClass
{
public:
    MyClass()
    {
        // 호출 시점 확인
        cout << "MyClass()" << endl;
        cout << "this" << this << endl;
    }

    MyClass(int number)
    {
        cout << "MyClass(int number)" << endl;

        // this pointer 소개
        this->number_ = number;
        cout << "this" << this << endl;

    }

    // 소멸자
    ~MyClass()
    {
        // 호출 시점 확인
        cout << "~MyClass()" << endl;
    }

    void Increment(int a)
    {
        number_ += a;
    }

    void Print()
    {
        cout << number_ << endl;
    }

// 접근 제한자, 멤버 변수는 숨겨놓기, 클래스 내부 함수로만 접근 가능
private:
    int number_ = 0; // 초기값
};

int main()
{
    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    // 배열 사용 가능
    // 포인터 사용 가능 등 안내
    // 기본 자료형과 비교

    // 필요한 자료형을 만들어서 쓸 수 있다, 확장된 새로운 자료형.
    return 0;
}
