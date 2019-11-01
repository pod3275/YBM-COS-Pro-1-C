#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int power(int base, int exponent) {
    int val = 1;
    for (int i = 0; i < exponent; i++)
        val *= base;
    return val;
}

int* solution(int k) {
    int range = power(10, k);
    int count = 0;
    int* narcissistic_number = malloc(sizeof(int) * range);
    for (int i = range / 10; i < range; i++) {
        int current = i;
        int calculated = 0;
        while (current != 0) {
            @@@;
            @@@;
        }
        if (calculated == i)
            narcissistic_number[count++] = i;
    }
    int* answer = malloc(sizeof(int) * count);
    for(int i = 0; i < count; i++)
        answer[i] = narcissistic_number[i];
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int k = 3;
    int* ret = solution(k);

    // [실행] 버튼을 누르면 출력값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 { ");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf(" } 입니다.\n");
}