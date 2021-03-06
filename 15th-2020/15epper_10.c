#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//질문 맞추면 3, 틀리면 1, 질문 안받으면 2
int* solution(int(*point)[10]) {
    int m = 50; //기본 점수 50점
    int cache[20][20]; //캐시 배열 선언
    int(*result)[10]; // 리턴 배열 result 선언
    int i, j, o;
    int ret = 0, gap, gap2;

    // 배열 초기화
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cache[i][j] = m; //기본 점수 
            result[i][j] = 2; //기본 출력값
        }
    }

    // 질문 맞췄을때
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            ret = 0, gap; // 0으로 초기화
            for (o = 0; o < 10; o++) {
                // ret 값에 point 의 i 열과 i 행의 합 저장
                // 즉, point[i][i] 위치의 학생에게 질문했을 때 영향을 받는 요소들의 합임
                ret += point[i][o];
                ret += point[o][j];
            }
            // 
            gap = ret - point[i][j];
            if (gap % 2) {
                result[i][j] = 3; // point[i][j] 위치의 학생이 질문을 맞춤
                for (o = 0; o < 10; o++) {
                    // 캐시 배열에도 해당 결과 반영
                    cache[i][o]++;
                    cache[o][j]++;
                }
                cache[i][j]--; // 두번 더해진 값이므로 -1
            }
        }
    }
    // 질문 틀렸을때
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            ret = 0;
            for (o = 0; o < 10; o++) {
                ret += point[i][o];
                ret += point[o][j];
            }
            //위와 동일한 연산을 수행하여 gap 값 도출
            gap = ret - point[i][j];
            ret = 0;
            // 즉, 문제를 맞추거나 틀린 학생과 동일한 열 또는 행에 위치한 학생의 점수 변동을 알기 위함임
            // cache 값과 다시 비교하여 ret 값 
            for (o = 0; o < 10; o++) {
                ret += cache[i][o];
                ret += cache[o][j];
            }
            gap2 = ret - cache[i][j];
            gap -= gap2;
            gap = gap % 4 < 0 ? gap % 4 + 4 : gap % 4;
            // point[i][j] 위치의 학생이 질문을 틀림
            if (gap == 2)
                result[i][j] = 1;
        }
    }
    return (int*)result;
}

int main() {
 
    int input[10][10];
 
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++)
            scanf("%d", &input[i][j]);
    }
  
    int(*answer)[10] = solution(input);

    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++)
            printf("%d ", answer[i][j]); //
        printf("\n");
    }
}
