#include <iostream>
using namespace std;
int main()
{
	cout << "성과 나이를 입력하고 엔터를 누르세요\n";
	string first_name = "???";
	int age = -1;
	cin >> first_name >> age;
	cout << "안녕하세요, " << first_name << "(나이" << age << ")\n";
}