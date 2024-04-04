/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

const int kMaxStr = 100; // 전역 상수 소개

// 문자열을 매개변수로 넣기
// 여기서는 모든 문자열 배열의 길이가 동일하다고 가정
bool IsEqual(const char str1[], const char str2[])
{
    bool result = true;
    // 크기 출력 확인 (배열 크기가 아님 주의!) - 문자열의 길이를 별도로 저장해야 합니다!
    // cout << sizeof(str1) << " " << sizeof(str2) << " " << endl;   
    // exit(-1);

    int i = 0;
    int size = 0;
    while (*(str1 + i) != '\0')
    {
        size += 1;
        i += 1;
    }

    
    for (int i = 0; i < size; i++)
    {
        if (*(str1 + i) != *(str2 + i)) 
        {
            result = false;
        }
    }
    
    if (result) return true;
    else return false;
}

int main()
{
    // 영어 사용이 디버깅에 유리합니다.
    const char str1[kMaxStr] = "stop";
    bool result = false;
    while (1)
    {
        char str2[kMaxStr];

        cin >> str2;
        result = IsEqual(str1, str2);
        if (result) break;
        
    }

    return 0;
}
