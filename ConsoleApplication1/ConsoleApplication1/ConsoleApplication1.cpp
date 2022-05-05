#include <stdio.h>
#pragma region 20.1_비교_연산자_사용하기
//int main()
//{
//    int num1 = 10;
//
//    printf("%d\n", num1 == 10); // 1: num1이 10과같은지
//    printf("%d\n", num1 != 5); // 1: num1이 10과같은지
//
//    printf("%d\n", num1 > 10); // 1: num1이 10과같은지
//    printf("%d\n", num1 < 10); // 1: num1이 10과같은지
//
//    printf("%d\n", num1 >= 10); // 1: num1이 10과같은지
//    printf("%d\n", num1 <= 10); // 1: num1이 10과같은지
//
//    return 0;
//}
#pragma endregion

#pragma region 20.2 삼항연산자 사용하기
//int main()
//{
//    int num1 = 10;
//    int num2;
//
//    num2 = (num1 == 10) ? 100 : 200;
//
//    printf("%d\n", num2);
//
//    return 0;
//}
#pragma endregion

#pragma region 20.3 if조건문과 비교 연산자 사용하기
//int main()
//{
//    /*int num1 = 10;
//    
//    if (num1 == 10)
//        printf("10입니다.\n");
//    if (num1 != 5)
//        printf("5가 아닙니다. \n");
//    if (num1 > 10)
//        printf("10보다 큽니다.\n");
//    if (num1 < 10)
//        printf("10보다 작습니다.\n");
//    if (num1 >= 10)
//        printf("10보다 크거나 같습니다.\n");
//    if (num1 <= 10)
//        printf("10보다 작거나 같습니다.\n");*/
//
//    float num1 = 0.1f;
//    char c1 = 'a'; // 문자 자료형은 정수이므로 숫자과 비교가 가능하다.
//
//    if (num1 >= 0.09f)
//        printf("0.09보다 크거나 같습니다.\n");
//
//    if (c1 == 'a')
//        printf("a입니다.\n");
//
//    if (c1 == 97)
//        printf("97입니다.\n");
//
//    if (c1 < 'b')
//        printf("b보다 작습니다.\n");
//
//    return 0;
//}
#pragma endregion

#pragma region 20.4 함수 안에서 삼항연산자 사용하기
//int main()
//{
//    int num1 = 5;
//
//    printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다."); // num1은 5이므로 10이 아닙니다.
//
//    return 0;
//}
#pragma endregion

#pragma region 20.6 비교연산자 사용하기
//int main()
//{
//    int num1 = 27;
//
//    printf("%d\n", num1 > 10);
//    printf("%d\n", num1 < 5);
//
//    printf("%d\n", num1 >= 27);
//    printf("%d\n", num1 == 27);
//
//    printf("%d\n", num1 < 30);
//    printf("%d\n", num1 <= 27);
//
//    return 0;
//}
#pragma endregion

#pragma region 20.7 삼항 연산자 사용하기
//int main()
//{
//    float num1 = 1.2f;
//
//    printf("%f\n", num1 == 2.0f ? 3.0f : 4.0f);
//
//    return 0;
//}
#pragma endregion

#pragma region 21.1,2,3 AND, OR, NOT 연산자 사용하기
//int main()
//{
//    printf("%d\n", 1 && 1);
//    printf("%d\n", 1 && 0);
//    printf("%d\n", 0 && 1);
//    printf("%d\n", 0 && 0);
//
//    printf("%d\n\n", 2 && 3);
//
//    printf("%d\n", 1 || 1);
//    printf("%d\n", 1 || 0);
//    printf("%d\n", 0 || 1);
//    printf("%d\n", 0 || 0);
//
//    printf("%d\n\n", 2 || 3);
//
//    printf("%d\n", !1);
//    printf("%d\n", !0);
//
//    printf("%d\n", !3);
//    return 0;
//}
#pragma endregion

#pragma region 21.4 조건식과 논리 연산자 사용하기
//int main()
//{
//    int num1 = 20;
//    int num2 = 10;
//    int num3 = 30;
//    int num4 = 15;
//
//    printf("%d\n", (num1 > num2) && (num3 > num4));
//    printf("%d\n", (num1 > num2) && (num3 < num4));
//                   
//    printf)("%d(\n", (num1 > num2) || (num3 < num4));
//    printf("%d\n", (num1 < num2) || (num3 < num4));
//
//    printf("%d\n", !(num1 > num2));
//
//    return 0;
//}
#pragma endregion

#pragma region 21.5 if 조건문과 논리 연산자 사용하기
//int main()
//{
//    /*int num1 = 1;
//    int num2 = 0;
//
//    if (num1 && num2)
//        printf("참\n");
//    else
//        printf("거짓\n");
//
//    if (num1 || num2)
//        printf("참\n");
//    else
//        printf("거짓\n");
//
//    if (!num1)
//        printf("참\n");
//    else
//        printf("거짓\n");*/
//
//    int num1 = 0;
//    int num2 = 10;
//
//    if ((num1 != 0) && (num2 / num1) < 20) // 0으로 나누면 에러발생하지만 첫번째 조건이 만족하지 않으면 두번째 조건은 검사하지 않는 특성을 이용했다.
//        printf("참\n");
//    else
//        printf("거짓\n");
//    return 0;
//}
#pragma endregion

#pragma region 21.6 삼항 연산자에 논리 연산자 사용하기
//int main()
//{
//    int num1 = 1;
//    int num2 = 0;
//
//    printf("%s\n", num1 && num2 ? "참" : "거짓");
//    printf("%s\n", num1 || num2 ? "참" : "거짓");
//
//    return 0;
//}
#pragma endregion

#pragma region 21.8 논리 연산자 사용하기
//int main()
//{
//    int num1 = 10;
//    int num2 = 0;
//
//    if (num1 == num1)
//        printf("참\n");
//    else
//        printf("거짓\n");
//
//    if (num1 >= num2)
//        printf("참\n");
//    else
//        printf("거짓\n");
//    
//    printf("%s\n", !num2 ? "참" : "거짓");
//
//    return 0;
//}
#pragma endregion

#pragma region 22.1 불 자료형 사용하기
int main()
{
    int num1 = 10;
    int num2 = 0;

    if (num1 == num1)
        printf("참\n");
    else
        printf("거짓\n");

    if (num1 >= num2)
        printf("참\n");
    else
        printf("거짓\n");
    
    printf("%s\n", !num2 ? "참" : "거짓");

    return 0;
}
#pragma endregion