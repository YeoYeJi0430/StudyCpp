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
			puts("[ERROR] �޸� ����");
			break;
		case 2:
			puts("[ERROR] ���� ���� �ʰ�");
			break;
		case 3:
			puts("[ERROR] �ϵ� ��ũ �� ��");
			break;
		}
	}
};
void report()
{
	if (true)throw Exception(3);
	// ������� ������ ���� ����
}

int main()
{
	try
	{
		report();
		puts("�۾��Ϸ�");
	}
	/*
	catch (E_error e)
	{
		switch (e)
		{
		case OUTOFMEMORY:
			puts("[ERROR] �޸� ����");
			break;
		case OVERANGE:
			puts("[ERROR] ���� ���� �ʰ�");
			break;
		case HARDFULL:
			puts("[ERROR] �ϵ� ��ũ �� ��");
			break;
		case STACKFULL:
			puts("[ERROR] ���� �� ��");
			break;
		}
	}
	*/
	catch (Exception & e)
	{
		printf("�����ڵ� = %d =>", e.GetErrorCode());
		e.ReportError();
	}
}