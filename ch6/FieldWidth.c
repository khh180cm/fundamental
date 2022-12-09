#include <stdio.h>

int main(void) {
    printf("%-8s %-15s %5s\n", "이  름", "전공학과", "학년");
    printf("%-8s %-15s %5d\n", "김동수", "컴퓨터공학", 2);
    printf("%-8s %-15s %5d\n", "홍길동", "기계공학", 3);
    printf("%-8s %-15s %5d\n", "이방원", "경영정보학", 4);
    printf("%-8s %-15s %5d\n", "이다시", "디지털미디어학", 1);
    printf("%-8s %-15s %5d\n", "aaaaaaaa", "디지털미디어학", 1);
    printf("%-8s %-15s %5d\n", "aaaaaaaaa", "디지털미디어학", 1);
    printf("%-8s %-15s %5d\n", "ㅇㅇㅇㅇㅇㅇㅇㅇ", "디지털미디어학", 1);
    printf("%-8s %-15s %5d\n", "가가가가가가가가", "디지털미디어학", 1);
    printf("%-8s %20s %5s\n", "name", "faculty", "grade");
    printf("%-8s %20s %5d\n", "david", "civil-engineering", 1);
    printf("%-8s %20s %5d\n", "marwin", "computer-science", 2);
    printf("%-8s %20s %5d\n", "han", "applied-science", 3);
    printf("%-8s %20s %5d\n", "steve", "politics", 4);
    printf("%-8s %20s %5d\n", "william", "economics", 2);
    return 0;
}
