#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << endl << ">>";
		getline(cin, s);
		if (s == "exit")break;

		for (int i = s.length();i >= 0;i--)
			cout << s[i];
	}
}