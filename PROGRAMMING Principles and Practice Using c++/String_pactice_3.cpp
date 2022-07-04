#include <iostream>
using namespace std;

int main()
{
	string previous = " ";
	string current;
	while (cin>>current)
	{
		if (previous == current)
			cout << "반복된 단어 : " << current << '\n';
		previous = current;
	}
}