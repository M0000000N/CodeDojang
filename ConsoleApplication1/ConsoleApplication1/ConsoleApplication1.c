#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // memset
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
//    return 0; 30.6 연습문제 : 3으로 끝나는 숫자만 출력
//}
#pragma endregion 

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
//    return 0; 33.7 연습문제 : 2와 7의 배수, 공배수 처리하기
//}
#pragma endregion

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
//int main()
//{
//    int num1 = 20;
//    int* numPtr1;
//
//    numPtr1 = &num1;
//
//    int* numPtr2;
//
//    numPtr2 = malloc(sizeof(int));  // int의 크기 4바이트만큼 동적 메모리 할당
//
//    printf("%p\n", numPtr1);
//
//    printf("%p\n", numPtr2);
//
//    free(numPtr2);              // malloc 사용해서 힙에서 할당한 메모리는 free함수로 메모리를 해제해야함.
//
//    return 0;
//}
#pragma endregion 35.1 메모리 할당하기

#pragma region
//int main()
//{
//    long long* numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당
//
//    memset(numPtr, 0x27, 8);    // (포인터, 설정할 값, 크기)
//
//    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}
#pragma endregion 35.3 메모리 내용을 한꺼번에 설정하기

#pragma region
//int main()
//{
//    float scores[10] = { 67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f };
//    float sum = 0.0f;
//    float average;
//
//    for (int i = 0; i < sizeof(scores) / sizeof(float); i++)
//    {
//        sum += scores[i];
//    }
//
//    average = sum / 10;
//
//        printf("%f\n", average);
//
//    return 0;
//}
#pragma endregion 36.11 연습문제 : 점수평균 구하기

#pragma region
//int main()
//{
//    int decimal = 0;
//    int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨
//
//    int num = 0;
//    for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; --i)
//    {
//        if (binary[i] == 1)
//        {
//            decimal += 1 << num;
//        }
//        num++;
//    }
//
//        printf("%d\n", decimal);
//
//    return 0;
//}
#pragma endregion 36.12 연습문제 : 이진수-> 십진수

#pragma region
//int main()
//{
//    int numArr[3][4] = {    // 세로 3, 가로 4 크기의 int형 2차원 배열 선언
//        { 11, 22, 33, 44 },
//        { 55, 66, 77, 88 },
//        { 99, 110, 121, 132 }
//    };
//
//    int(*numPtr)[4] = numArr;
//
//    printf("%p\n", *numPtr); // 002BFE5C: 2차원 배열 포인터를 역참조하면 세로 첫 번째의 주소가 나옴
//                             // 컴퓨터마다, 실행할 때마다 달라짐
//
//    printf("%p\n", *numArr); // 002BFE5C: 2차원 배열을 역참조하면 세로 첫 번째의 주소가 나옴
//                             // 컴퓨터마다, 실행할 때마다 달라짐
//
//    printf("%d\n", numPtr[2][1]);    // 110: 2차원 배열 포인터는 인덱스로 접근할 수 있음
//
//    printf("%d\n", sizeof(numArr));  // 48: sizeof로 2차원 배열의 크기를 구하면 배열이 메모리에 
//                                     // 차지하는 공간이 출력됨
//
//    printf("%d\n", sizeof(numPtr));  // 4 : sizeof로 2차원 배열 포인터의 크기를 
//                                     // 구하면 포인터의 크기가 출력됨(64비트라면 8)
//
//    return 0;
//}
#pragma endregion 37.6 이차워 배열을 포인터에 넣기

#pragma region
//int main()
//{
//    int matrix[8][8] = {
//        {  1,  2,  3,  4,  5,  6,  7,  8 },
//        {  9, 10, 11, 12, 13, 14, 15, 16 },
//        { 17, 18, 19, 20, 21, 22, 23, 24 },
//        { 25, 26, 27, 28, 29, 30, 31, 32 },
//        { 33, 34, 35, 36, 37, 38, 39, 40 },
//        { 41, 42, 43, 44, 45, 46, 47, 48 },
//        { 49, 50, 51, 52, 53, 54, 55, 56 },
//        { 57, 58, 59, 60, 61, 62, 63, 64 }
//    };
//
//    for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); ++i)
//    {
//        printf("%d ", matrix[i][i]);
//    }
//        return 0;
//}
#pragma endregion 37.8 연습문제 : 행렬의 주대각선 성분 구하기

#pragma region
//int main()
//{
//    int* numPtr = malloc(sizeof(int) * 10);    // int 10개 크기만큼 동적 메모리 할당
//
//    numPtr[0] = 10;    // 배열처럼 인덱스로 접근하여 값 할당
//    numPtr[9] = 20;    // 배열처럼 인덱스로 접근하여 값 할당
//
//    printf("%d\n", numPtr[0]);    // 배열처럼 인덱스로 접근하여 값 출력
//    printf("%d\n", numPtr[9]);    // 배열처럼 인덱스로 접근하여 값 출력
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}
#pragma endregion 38.1 포인터에 할당된 메모리를 배열처럼 사용하기

#pragma region
//int main()
//{
//	int** m = malloc(sizeof(int*) * 3); //세로공간 메모리 할당
//
//	for (int i = 0; i < 3; ++i) //가로공간 메모리 할당
//	{
//		m[i] = malloc(sizeof(int) * 4);
//	}
//
//	m[0][0] = 1;
//	m[2][0] = 5;
//	m[2][3] = 2;
//
//	printf("%d\n", m[0][0]);
//	printf("%d\n", m[2][0]);
//	printf("%d\n", m[2][3]);
//
//	for (int i = 0; i < 3; ++i) // 세로공간 먼저 해제하면 가로공간 메모리 해제 못함
//	{
//		free(m[i]);
//	}
//
//	free(m); // 세로공간 메모리 해제
//
//}
#pragma endregion 38.2 포인터에 할당된 메모리를 이차원 배열처럼 사용하기

#pragma region
//int main()
//{
//	int row, col;
//
//	scanf("%d %d", &row, &col);
//
//	int** m = malloc(sizeof(int*) * row);
//
//	for (int i = 0; i < row; ++i)
//	{
//		m[i] = malloc(sizeof(int) * col);
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			m[i][j] = i + j;
//		}
//	}
//	
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			printf("%d", m[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < row; ++i)
//	{
//		free(m[i]);
//	}
//
//	free(m);
//
//	return 0;
//}
#pragma endregion 38.2 포인터에 할당된 메모리를 이차원 배열처럼 사용하기

#pragma region
int main()
{
    long long*** m = malloc(sizeof(long long**) * 2); // 높이 메모리공간 할당
    
    for (int row = 0; row < 2; row++) // 세로 메모리 공간 할당
    {
        m[row] = malloc(sizeof(long long*) * 3);

        for (int col = 0; col < 3; col++)
        {
            m[row][col] = malloc(sizeof(long long) * 5);
        }
    }

        m[1][2][4] = 100;

    printf("%lld\n", m[1][2][4]);

    for (int col = 0; col < 3; )

        free(m);

    return 0;
}
#pragma endregion 38.6 연습문제 : 포인터에 할당된 메모리를 삼차원 배열처럼 사용하기