//각 숫자가 몇 번 나왔는지 저장하기 위해 일차원 배열을 만드는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;    // a, b, c : 입력받을 세 자연수
    int mul;        // mul : a x b x c
    int num = 8;      // num : mul의 최대 자리수 (999x999x999 = 997,002,999 : 9자리)
                    // 0~8 로 계산하기 때문에 9자리 이지만 num=8 로 저장

    // 배열 선언 시 (배열이름 = {0, }) 과 같이 해주면 배열의 모든 값 0으로 초기화
    int Result[10] = { 0, };    // 0~9 각각 몇 번씩 나왔는지 세기 위한 변수
                               // Result[0] : 0이 나온 횟수, ..., Result[9] : 9가 나온 횟수

    scanf_s("%d\n%d\n%d", &a, &b, &c);    // 세 자연수 입력

    mul = a * b * c;        // 입력받은 세 자연수의 곱 계산

    for (int i = num; i >= 0; i--)    // mul의 8번째 자리(억 자리)부터 0번째 자리(일의 자리)까지 확인
        if ((int)pow(10, i) < mul)    // mul의 최대 자리 이하일 경우
            Result[(mul / ((int)pow(10, i))) % 10]++;    // 그 자리의 수가 나온 횟수 증가

    for (int i = 0; i < 10; i++)    // 각 숫자가 나온 횟수 출력
        printf("%d\n", Result[i]);

    return 0;
}