#include <iostream>

using namespace std;

// 1. 평균 점수 출력하기
#if 0
int main(){
    int scores[] = {20, 40, 80, 60, 99};
    int sum = 0;
    for(int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++){
        sum += scores[i];
    }

    cout << "총합은: " << sum << " 평균은: " << (double) sum / (sizeof(scores) / sizeof(scores[0]));
}
#endif

// 2. 제곱의 합
#if 0
int main(){
    int sum = 0;
    for (int i = 1; i <= 100; i++){
        sum += (i * i);
    }
    cout << "제곱의 합: " << sum;
}
#endif

// 3. 계절 판별하기
#if 0
int main(){
    int month;
    cin >> month;
    switch (month)
    {
    case 3:
    case 4:
    case 5:
        cout << month << "월은 " << "봄입니다.";
        break;
    case 6:
    case 7:
    case 8:
        cout << month << "월은 " << "여름입니다.";
        break;
    case 9:
    case 10:
    case 11:
        cout << month << "월은 " << "가을입니다.";
        break;
    default:
        cout << month << "월은 " << "겨울입니다.";
        break;
    }
}
#endif

// 4. 구구단 출력
#if 0
int main(){
    int num = -1;
    cin >> num;

    for(int i = 1; i <= 9; i++){
        cout << num << " X " << i << " = " << num * i << endl;
    }
}

#endif

// 5. 회문(Palindrome) 검사
#if 0
int main(){
    char text[100];
    int text_size = 0;
    bool result = true;
    cin >> text;
    for (int i = 0; text[i] != '\0'; i++){
        text_size += 1;
    }
    for (int i = 0; i < text_size / 2; i++){
        if (text[i] != text[text_size-i-1]){
            result = false;
            break;
        }
    }

    cout << boolalpha << result;
}

#endif

// 6. 플로이드의 삼각형
#if 1
int main(){
    int t = 1;
    for (int j = 1; j <= 15;){
        for (int i = 0; i < t; i++, j++){
            cout << j << ' ';
        }
        t += 1;
        cout << endl;
    }
}
#endif