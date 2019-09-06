#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name;      //ÕËºÅ
	string password;  //ÃÜÂë

	//Ñ­»·ÊäÈëÕËºÅ¸úÃÜÂë
	while (1) {
		system("cls");
		cout << "ÇëÊäÈëÕËºÅ£º";
		cin >> name;
		cout << "ÇëÊäÈëÃÜÂë£º";
		cin >> password;

		//ÅĞ¶ÏÃÜÂëÊÇ·ñÕıÈ·  ÕıÈ·Ìø³öÑ­»·  ´íÎó¼ÌĞø
		if (name == "dandan" && password == "123456") {
			system("cls");
			break;
		} else {
			cout << "ÕËºÅ»òÃÜÂë´íÎó!" << endl;
			system("pause");
		}
	}

	//´òÓ¡²Ëµ¥
	cout << "1.ÍøÕ¾404¹¥»÷" << endl;
	cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
	cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
	cout << "4.DNS¹¥»÷" << endl;
	cout << "5.¹¥»÷»Ö¸´" << endl;
	system("pause");

	return 0;
}