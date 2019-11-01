#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int find(int parent[], int u) {
	if(u == parent[u])
		return u;

	parent[u] = @@@;
	return parent[u];
}

int merge(int parent[], int u, int v) {
	u = find(parent, u);
	v = find(parent, v);

	if(u == v)
		return 1;

	@@@;
	return 0;
}

int solution(int n, int connections[][2], int connections_len) {
    int answer = 0;

    int *parent = (int *) malloc(sizeof(int) * (n+1));
    for(int i = 1; i <= n; i++)
    	@@@;

    for(int i = 0; i < connections_len; i++)
    	if(merge(parent, connections[i][0], connections[i][1])) {
    		answer = i + 1;
    		break;
    	}

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int n = 3;
	int connections[][2] = {{1, 2}, {1, 3}, {2, 3}};
	int connections_len = 3;
	int ret = solution(n, connections, connections_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}