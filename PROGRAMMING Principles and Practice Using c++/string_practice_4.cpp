#include <iostream>
using namespace std;

int main()
{
	int number_of_words = 0;
	string previous = " ";
	string current;
	while (cin >> current){
		++number_of_words;
		if (previous == current)
			cout << "�ܾ� ��ȣ" << number_of_words << "�ݺ� �ܾ�: " << current << '\n';
		previous = current;
	}
}