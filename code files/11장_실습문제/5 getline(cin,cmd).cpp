#include <iostream>
using namespace std;

int main(){
	string cmd;
	while(true){
		cout<<"종료하려면 exit을 입력하세요 >> ";
		getline(cin, cmd);
		if(cmd=="exit") break;
	}
	cout<<"프로그램을 종료합니다...."<<endl;
}
