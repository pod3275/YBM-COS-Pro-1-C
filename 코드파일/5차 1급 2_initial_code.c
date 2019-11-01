#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int walls[][2], int walls_len) {
    int answer = 0;

    for(int i = 0; i < walls_len; i++) {
    	for(int j = i+1; j < walls_len; j++) {
    		int area = 0;
    		if(walls[i][1] > walls[j][1])
    			area = walls[i][1] * (walls[j][0] - walls[i][0]);
    		else
    			area = walls[j][1] * (walls[j][0] - walls[i][0]);

    		if(answer < area)
    			answer = area;
    	}
    }

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
	int walls[][2] = {{1, 4}, {2, 6}, {3, 5}, {5, 3}, {6, 2}};
	int walls_len = 5;
	int ret = solution(walls, walls_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}