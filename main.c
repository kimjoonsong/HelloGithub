#include<stdio.h>
#include"StarWars.h"

int main(void){
	int T,N; //T(테스트케이스 변수),N(전체 페이지 수)
	scanf("%d",&T); //우선 테스트 케이스 개수를 입력받는다.
	for(int i=0;i<T;i++){ //T만큼 반복하여 각 케이스의 결과를 구한다.
		int numcnt[10]={0,}; //0~9의 개수를저장하는 배열이며, 케이스가 바뀔때마다 초기화한다. 
		scanf("%d",&N);
		pagecnt(N,numcnt); //각 수를 세는 함수이다(pagecount).
		resprnt(numcnt); //결과를 출력하는 함수이다(result print).
	}
	return 0;
}

