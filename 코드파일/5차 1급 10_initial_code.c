#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Calculator {
    int (*plus)(int, int);
    int (*minus)(int, int);
}Calculator;

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int* solution(int a, int b) {
    int *answer = (int *) malloc(sizeof(int) * 2);
    struct Calculator c;

    c.plus = @@@;
    c.minus = @@@;

    answer[0] = c.plus(a, b);
    answer[1] = c.minus(a, b);
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int a = 3;
    int b = 5;
    int *ret = solution(3, 5);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {%d, %d} 입니다.\n", ret[0], ret[1]);
}