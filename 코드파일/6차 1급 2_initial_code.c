// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int K, char* words[], int words_len) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int K = 10;
    char* words[] = {"nice", "happy", "hello", "world", "hi"};
    int words_len = 5;
    int ret = solution(K, words, words_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}