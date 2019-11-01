// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(char* s1, char* s2, int p, int q) {
    // 여기에 코드를 작성해주세요.
    // 반환하는 문자열은 malloc을 이용해 주세요.
    char* answer = "";
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* s1 = "112001";
    char* s2 = "12010";
    int p = 3;
    int q = 8;
    char* ret = solution(s1, s2, p, q);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}