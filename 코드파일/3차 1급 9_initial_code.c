#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int revenue[], int revenue_len, int k) {
    int answer = 0;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += revenue[i];
    }
    answer = sum;
    for (int i = 0; i < revenue_len; i++) {
        sum = sum - revenue[i - k] + revenue[i];
        if (answer < sum)
            answer = sum;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int revenue1[8] = {1, 1, 9, 3, 7, 6, 5, 10};
    int revenue_len1 = 8;
    int k1 = 4;
    int ret1 = solution(revenue1, revenue_len1, k1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int revenue2[5] = {1, 1, 5, 1, 1};
    int revenue_len2 = 5;
    int k2 = 1;
    int ret2 = solution(revenue2, revenue_len2, k2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}