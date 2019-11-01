#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int solution(int board[][4], int board_len) {
    int answer = 0;

    int coins[4][4] = { 0, };
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == 0 && j == 0)
                coins[i][j] = board[i][j];
            else if(i == 0 && j != 0)
                coins[i][j] = board[i][j] + coins[i][j-1];
            else if(i != 0 && j == 0)
                coins[i][j] = board[i][j] + coins[i-1][j];
            else
                coins[i][j] = board[i][j] + MAX(coins[i][j], coins[i-1][j-1]);
        }
    }

    answer = coins[3][3];
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
    int board[4][4] = {{6, 7, 1, 2}, {3, 5, 3, 9}, {6, 4, 5, 2}, {7, 3, 2, 6}};
    int board_len = 4;
    int ret = solution(board, board_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}