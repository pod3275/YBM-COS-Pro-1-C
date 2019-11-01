// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int card[], int card_len, int n) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int card1[] = {1, 2, 1, 3};
    int card_len1 = 4;
    int n1 = 1312;
    int ret1 = solution(card1, card_len1, n1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int card2[] = {1, 1, 1, 2};
    int card_len2 = 4;
    int n2 = 1122;
    int ret2 = solution(card2, card_len2, n2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}