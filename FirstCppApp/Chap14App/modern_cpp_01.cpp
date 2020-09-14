#include <list>
#include <iostream>
using namespace std;

struct MCommand
{
	int key;
	int value;
};

typedef list<MCommand*> LIST_COMMAND;

auto func() { return 3.141592; }

int main()
{
	// char*
	// const char* NPCName = "Farmer";
	auto NPCName = "Farmer";
	cout << NPCName << endl;

	//int
	auto Number = 3.141592;
	cout << Number << endl;

	int UserMode = 4;
	auto pUserMode = &UserMode; // int * == auto
	cout << "pUserMode =" << *pUserMode << " , Address =" << pUserMode << endl;
	
	auto& refUserMode = UserMode;

	LIST_COMMAND m_listcommand;
	// LIST_COMMAND::iterator iter = m_listcommand.begin();
	auto iter = m_listcommand.begin();

	auto result = func();
	cout << "result is " << result << endl;
	return 0;
}