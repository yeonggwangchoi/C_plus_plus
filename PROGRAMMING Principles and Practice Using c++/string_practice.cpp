#include <iostream>
using namespace std;

int main()
{
	cout << "성과 이름을 입력하세요\n";
	string first;
	string second;
	cin >> first >> second;
	string name = first + second;
	cout << name;
}