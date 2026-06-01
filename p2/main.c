#include <stdio.h>

int main(void) {
    int N; // N 입력을 받는다.
    scanf("%d", &N); 
    int a[20], b[20], *p, *q; // 배열 2개, 포인터 2개

    for (p = a; p < a + N; p++) 
        scanf("%d", p);
    for (q = b; q < b + N; q++) 
        scanf("%d", q);   // 포인터 이용해서 값 입력 받음.
        
        for (p = a, q = b + N - 1; p < a + N; p++, q--) // 각각 매칭되는 포인터의 주소를 대응 시켜서 더해
        printf(" %d", *p + *q);

    return 0;
}
    
    

