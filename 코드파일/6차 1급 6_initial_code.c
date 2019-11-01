#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int max(int a, int b){
    return a < b ? b : a;
}

int solution(int grid[][4], int grid_len) {
    int answer = 0;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            for(int k = j + 1; k < 4; k += 2)
                answer = max(answer, max(grid[i][j] + grid[j][k], grid[j][k] + grid[k][i]));
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	int grid[][4] = {{1, 4, 16, 1}, {20, 5, 15, 8}, {6, 13, 36, 14}, {20, 7, 19, 15}};
	int grid_len = 4;
	int ret = solution(grid, grid_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}