#include <iostream>
using namespace std;

int main()
{
	cout << "�̸��� �� �� �Է��ϼ���\n";
	string first;
	string second;
	cin >> first >> second;
	if (first == second) cout << "�� �̸��� ����\n";
	if (first < second) cout << first << "�� ���ĺ������� �� �տ� ��ġ��: " << second << '\n';
	if (first > second) cout << first << "�� ���ĺ������� �� �ڿ� ��ġ��: " << second << '\n';
}