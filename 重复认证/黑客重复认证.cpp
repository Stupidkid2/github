#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name;      //�˺�
	string password;  //����

	//ѭ�������˺Ÿ�����
	while (1) {
		system("cls");
		cout << "�������˺ţ�";
		cin >> name;
		cout << "���������룺";
		cin >> password;

		//�ж������Ƿ���ȷ  ��ȷ����ѭ��  �������
		if (name == "dandan" && password == "123456") {
			system("cls");
			break;
		} else {
			cout << "�˺Ż��������!" << endl;
			system("pause");
		}
	}

	//��ӡ�˵�
	cout << "1.��վ404����" << endl;
	cout << "2.��վ�۸Ĺ���" << endl;
	cout << "3.��վ������¼" << endl;
	cout << "4.DNS����" << endl;
	cout << "5.�����ָ�" << endl;
	system("pause");

	return 0;
}