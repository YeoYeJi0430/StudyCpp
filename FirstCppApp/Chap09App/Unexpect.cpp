#include <stdio.h>
#include <exception>
using namespace std;

void myunex()
{
	puts("핵심 에러 발생");
	exit(-2); // 0 이아니면 모두 오류
}

void calc() throw (int) // 에러시 정수형을 던지겠다함.
{
	// 계산처리 잘못 되면 문자열을 보냄 <-위에 선언한거랑 타입 다름
	// set_terminate(myunex);
	// throw "string";
	// 원래는 아래와 같이 정수를 써야함.
	throw 56;
}

int main()
{
	set_terminate(myunex);
	try
	{
		calc();
	}
	catch (int)
	{
		puts("정수형 예외 발생");
	}
	puts("프로그램 종료");
	return 0;
}