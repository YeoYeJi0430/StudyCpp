#include <stdio.h>

enum E_error{ OUTOFMEMORY,OVERANGE,HARDFULL,STACKFULL };

class Exception
{
private:
	int ErrorCode;
public:
	Exception(int ae) :ErrorCode(ae) { ; }
	int GetErrorCode() { return ErrorCode; }
	void ReportError()
	{
		switch (ErrorCode)
		{
		case 1:
			puts("[ERROR] 메모리 부족");
			break;
		case 2:
			puts("[ERROR] 연산 범위 초과");
			break;
		case 3:
			puts("[ERROR] 하드 디스크 꽉 참");
			break;
		}
	}
};
void report()
{
	if (true)throw Exception(3);
	// 여기까지 왔으면 정상 종료
}

int main()
{
	try
	{
		report();
		puts("작업완료");
	}
	/*
	catch (E_error e)
	{
		switch (e)
		{
		case OUTOFMEMORY:
			puts("[ERROR] 메모리 부족");
			break;
		case OVERANGE:
			puts("[ERROR] 연산 범위 초과");
			break;
		case HARDFULL:
			puts("[ERROR] 하드 디스크 꽉 참");
			break;
		case STACKFULL:
			puts("[ERROR] 스택 꽉 참");
			break;
		}
	}
	*/
	catch (Exception & e)
	{
		printf("에러코드 = %d =>", e.GetErrorCode());
		e.ReportError();
	}
}