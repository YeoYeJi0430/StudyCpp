#include <stdio.h>
// #define MYSQLUSER "root" // ���� �̸�
// #define MYSQLPASSWORD "mysql_p" // ��й�ȣ
// #define MYSQLIP "210.119.12.52"// ������ ip �ڱ��ڽ��� localhost�ƴϸ� ipconfig��
// 150p
class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* Pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
	// ....
};

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	// ���⼭ DB ������ �����Ѵ�.
	// MSQL * hCon = mysql_init(NULL);
	// mysql_real_connect(&hCon, Sever, ID, Pass, NULL, 0, NULL, 0);
	hCon = 1234; // ���ǰ�
	puts("����Ǿ����ϴ�.");
}

void DBQuery::DBDisConnect()
{
	// ������ �����Ѵ�.
	// mysql_close(hCon);
	hCon = NULL;
	puts("������ ���������ϴ�.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	// mysql_query(hCon,SQL);
	// Query(hCon,SQL);
	puts(SQL);
	return true;
}

int main()
{
	// DBQuery* dbcon = new DBQuery();
	// DBQuery dbcon2();

	// dbcon->DBConnect("ip", "root", "pw");

	// DBQuery::DBConnect("ip", "root", "pw")
	
	// DBQuery::DBConnect("ip","root","pw")
	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk");
	DBQuery Q1, Q2, Q3;

	// �ʿ��� DB ���Ǹ� �Ѵ�.
	Q1.RunQuery("select * from tblBuja where ���� ģ�� ���");
	// ...
	DBQuery::DBDisConnect();
}
