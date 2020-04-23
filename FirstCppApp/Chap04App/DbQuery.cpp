#include <stdio.h>
// #define MYSQLUSER "root" // 유저 이름
// #define MYSQLPASSWORD "mysql_p" // 비밀번호
// #define MYSQLIP "210.119.12.52"// 연결할 ip 자기자신은 localhost아니면 ipconfig로
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
	// 여기서 DB 서버에 접속한다.
	// MSQL * hCon = mysql_init(NULL);
	// mysql_real_connect(&hCon, Sever, ID, Pass, NULL, 0, NULL, 0);
	hCon = 1234; // 임의값
	puts("연결되었습니다.");
}

void DBQuery::DBDisConnect()
{
	// 접속을 해제한다.
	// mysql_close(hCon);
	hCon = NULL;
	puts("연결이 끊어졌습니다.");
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

	// 필요한 DB 질의를 한다.
	Q1.RunQuery("select * from tblBuja where 나랑 친한 사람");
	// ...
	DBQuery::DBDisConnect();
}
