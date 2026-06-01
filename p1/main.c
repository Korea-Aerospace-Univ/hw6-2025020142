#include <stdio.h>

int main(void) {
    char x[10], *p, *q;  // x: 문자 10개 저장 배열, p·q: 배열 접근용 포인터 2개

    for (p = x; p < x + 10; p++) // p를 배열 처음부터 끝까지 이동시키며
        scanf("%c", p);         // 포인터 p가 가리키는 칸에 문자 입력

    char maxchar= *x;    // 최빈 문자 후보 (일단 첫 글자로 초기화)
    int maxcount = 0;    // 그 문자의 빈도 (0으로 초기화)

    for (p = x; p < x + 10; p++) {   // 외부for문 기준 문자 *p를 하나씩 선택
        int count = 0;                 // *p의 등장 횟수 카운터
        for (q = x; q < x + 10; q++) // 내부 for문 배열 전체를 다시 훑으며
            if (*q == *p) count++;     // *p와 같은 문자를 만나면 +1

        if (count > maxcount) { // '초과(>)' 일 때만 갱신 → 동률이면 먼저 나온 문자 유지
            maxcount = count;  // 최대 빈도 갱신
            maxchar = *p;      // 최빈 문자 갱신
        }
    }

    printf("%c %d\n", maxchar, maxcount); // 최빈 문자와 빈도 출력
    return 0;
}
