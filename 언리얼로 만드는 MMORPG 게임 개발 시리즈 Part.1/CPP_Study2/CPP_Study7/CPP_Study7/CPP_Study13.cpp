//#include <iostream>
//
//using namespace std;
//
//// ������ ���� : ���� ������ �� ����
//
//// ���� ���� 
//// ����) �ʱ�ȭ ���� : const �� .rotato .data. bss
//
//int globalValue = 0;
//
//
//void Test() {
//
//	globalValue++;
//
//}
//
//
//void increaseHp(int hp)
//{
//	int finalHp = hp + 1;
//	//hp = hp + 1;
//}
//
//// ����
//// [[�Ű�����][RET][��������(hp 1)][�Ű�����(hp=1)][RET][�������� finalHp]             ]
//// ������ ������ �ٽ� ���ƿ��鼭 �����ϸ鼭 ���ƿ´�.
//int main() {
//
//
//	//���� ����
//
//
//	int hp = 1;
//
//	cout << "increase ȣ�� ��" << hp << endl;
//	increaseHp(hp);
//	cout << "increase ȣ�� �� " << hp << endl;
//
//	int LocalValue = 0;
//
//
//	return 0;
//}