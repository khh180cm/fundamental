# include <stdio.h>

int main(void) {
    unsigned char user_input = 0;
    printf("아스키 코드값을 입력하세요(0 ~ 127): ");
    scanf("%d", &user_input);

    printf("아스키 코드 문자 : %c\n", user_input);
    return 0;
}
