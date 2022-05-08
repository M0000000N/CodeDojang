#include <stdio.h>
#pragma region 
//int main()
//{
//    int num1 = 10;
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
#pragma endregion 20.1 비교 연산자 사용하기

#pragma region 
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
#pragma endregion 20.2 삼항연산자 사용하기

#pragma region 
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
#pragma endregion 20.3 if조건문과 비교 연산자 사용하기

#pragma region 
//int main()
//{
//    int num1 = 5;
//
//    printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다."); // num1은 5이므로 10이 아닙니다.
//
//    return 0;
//}
#pragma endregion 20.4 함수 안에서 삼항연산자 사용하기

#pragma region 
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
#pragma endregion 20.6 비교연산자 사용하기

#pragma region 
//int main()
//{
//    float num1 = 1.2f;
//
//    printf("%f\n", num1 == 2.0f ? 3.0f : 4.0f);
//
//    return 0;
//}
#pragma endregion 20.7 삼항 연산자 사용하기

#pragma region 
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
#pragma endregion 21.1,2,3 AND, OR, NOT 연산자 사용하기

#pragma region 
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
#pragma endregion 21.4 조건식과 논리 연산자 사용하기

#pragma region
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
#pragma endregion  21.5 if 조건문과 논리 연산자 사용하기

#pragma region 
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
#pragma endregion 21.6 삼항 연산자에 논리 연산자 사용하기

#pragma region 
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
#pragma endregion 21.8 논리 연산자 사용하기 

#pragma region 
//int main()
//{
//    unsigned char num1 = 131;    //  131: 1000 0011
//    char num2 = -125;            // -125: 1000 0011 signed char는 MSB가 부호비트가 된다.
//                                 // 따라서 시프팅을 하면 부호비트가 연장됨.
//
//    unsigned char num3;
//    char num4;
//
//    num3 = num1 >> 5;    // num1의 비트 값을 오른쪽으로 5번 이동
//    num4 = num2 >> 5;    // num2의 비트 값을 오른쪽으로 5번 이동
//
//    printf("%u\n", num3);    //  4: 0000 0100: 맨 뒤의 11은 사라지고 0000 0100이 됨
//    printf("%d\n", num4);    // -4: 1111 1100: 모자라는 공간은 부호 비트의 값인 1로  
//                             // 채워지므로 1111 1100이 됨
//
//    return 0;
//}
#pragma endregion 24.3 부호있는 자료형의 비트 연산 알아보기

#pragma region 
//int main()
//{
//	/*unsigned char flag = 0;
//
//	flag |= 1;
//	flag |= 2;
//	flag |= 4;
//
//	printf("%u\n", flag);
//
//	if (flag & 1)
//		printf("0000 0001은 켜져있음\n");
//	else
//		printf("0000 0001은 꺼져있음\n");
//
//	if (flag & 2)
//		printf("0000 0010은 켜져있음\n");
//	else
//		printf("0000 0010은 꺼져있음\n");
//
//	if (flag & 4)
//		printf("0000 0100은 켜져있음\n");
//	else
//		printf("0000 0100은 꺼져있음\n");
//
//	return 0;*/
//
//	unsigned char flag = 7;
//
//	flag &= ~2;
//
//	printf("%u\n", flag);
//
//	if (flag & 1)
//		printf("0000 0001은 켜져있음\n");
//	else
//		printf("0000 0001은 꺼져있음\n");
//
//	if (flag & 2)
//		printf("0000 0010은 켜져있음\n");
//	else
//		printf("0000 0010은 꺼져있음\n");
//
//	if (flag & 4)
//		printf("0000 0100은 켜져있음\n");
//	else
//		printf("0000 0100은 꺼져있음\n");
//
//	return 0;
//}
#pragma endregion 24.4 부호있는 자료형의 비트 연산 알아보기

#pragma region 
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    int num1;
//
//    scanf("%d", &num1);    // 값을 입력받음
//
//    switch (num1)    // num1의 값에 따라 분기
//    {
//    case 1:
//    {
//        int num2 = num1;    // 컴파일 에러 발생
//        printf("%d입니다.\n", num2);
//        break;
//    }
//    case 2:
//        printf("2입니다.\n");
//        break;
//    default:
//        printf("default\n");
//        break;
//    }
//
//    return 0;
//}
#pragma endregion 26.1 사용자가 입력한 값에 따라 문자열 출력하기

#pragma region 
//int main()
//{
//    unsigned char i = 1;
//    while (i != 0)
//    {
//        printf("%u\n", i);
//        i <<= 1;
//    }
//    return 0;
//}
#pragma endregion 28.1 연습문제 while 반복문 사용하기

#pragma region 
//int main()
//{
//    int i = 1;
//
//    for (;;)
//    {
//        if (i % 10 != 3)
//        {
//            i++;
//            continue;
//        }
//
//        if (i > 103)
//            break;
//
//        printf("%d ", i);
//        i++;
//    }
//
//    return 0;
//}
#pragma endregion 30.6 연습문제 3으로 끝나는 숫자만 출력하기

#pragma region 
//int main()
//{
//    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
//    {
//        for (int j = 0; j < 5; j++)    // 5번 반복. 안쪽 루프는 가로 방향
//        {
//            printf("j:%d ", j);        // j값 출력
//        }
//
//        printf("i:%d\\n", i);      // i값 출력, 개행 문자 모양도 출력
//        printf("\n");              // 가로 방향으로 숫자를 모두 출력한 뒤 다음 줄로 넘어감
//    }
//
//    return 0;
//}
#pragma endregion 31.1 중첩 루프 사용하기

#pragma region 
//int main()
//{
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            if (j < i)
//                printf(" ");
//            else
//                printf("*");
//
//        }
//        printf("\n");
//    }
//    return 0;
//}
#pragma endregion 31.6 연습문제 : 역삼각형 모양으로 별 출력하기

#pragma region 
//int main()
//{
//    for (int i = 0; ++i <= 100;)    // 조건식 안에서 변화식을 함께 작성
//        printf((i % 3) ? (i % 5) ? ("%d\n") : ("Buzz\n") : (i % 5) ? ("Fizz\n") : ("FizzBuzz\n"), i);
//    // 삼항 연산자를 세 번 사용하여 printf 안에서 처리
//
//    return 0;
//}
#pragma endregion 33.5 코드 단축하기

#pragma region 
//int main()
//{
//    for (int i = 1; i <= 100; i++)
//    {
//        if (i % 14 == 0)
//            printf("FizzBuzz\n");
//        else if (i % 2 == 0)
//            printf("Fizz\n");
//        else if (i % 7 == 0)
//            printf("Buzz\n");
//        else
//            printf("%d\n", i);
//    }
//    return 0;
//}
#pragma endregion 33.7 연습문제 : 2와 7의 배수, 공배수 처리하기

#pragma region 
//int main()
//{
//    int* numPtr;      // 포인터 변수 선언
//    int num1 = 10;    // 정수형 변수를 선언하고 10 저장
//
//    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
//
//    *numPtr = 20;     // 역참조 연산자로 메모리 주소에 접근하여 20을 저장
//
//    printf("%d\n", *numPtr);    // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
//    printf("%d\n", num1);       // 20: 실제 num1의 값도 바뀜
//
//    return 0;
//}
#pragma endregion 34.3 디버거에서 포인터 확인하기

#pragma region 
int main()
{
    long long* numPtr1;    // long long형 포인터 선언
    float* numPtr2;        // float형 포인터 선언
    char* cPtr1;           // char형 포인터 선언

    long long num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';

    numPtr1 = &num1;    // num1의 메모리 주소 저장
    numPtr2 = &num2;    // num2의 메모리 주소 저장
    cPtr1 = &c1;        // c1의 메모리 주소 저장

    printf("%d\n", *numPtr1);    // 10
    printf("%f\n", *numPtr2);      // 3.500000
    printf("%c\n", *cPtr1);        // a

    return 0;
}
#pragma endregion 34.3 디버거에서 포인터 확인하기




