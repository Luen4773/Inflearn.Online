//#include <iostream>
//using namespace std;
//
////����ΰ� �˰ڴµ�? �ʹ� ���ε��� ��� �����̴�.
//
//const int PAPER = 3;
//const int SCISSORS = 1;
//const int ROCK = 2;
//
//
//// ���ڸ� �������� ���� ��쿡 ù ���� 0 �̴�.
//// ���� ���� 0���� �����ΰŴ� �� �������ʹ� + 1�̴�
//
//enum ENUM_SRP
//{
//	ENUM_SCISSORS,
//	ENUM_ROCK,
//	ENUM_PAPER
//};
//
//// #�� ������ -> ��ó�� ���ù�
//// #include <iostream>
//// 1) ��ó�� 2) ������ 3) ��ũ
//#define DEFINE_SCISSORS 1 + 2
//#define DEFINE_TEST cout <<"Hello World" << endl;
//
//
//int main() {
//
//	srand(time(0)); //�õ� ����
//
//	//1 2 3 
//	rand(); // 0~ 32767 ������ ���ڰ� ����
//
//	
//
//	int a = 0;
//
//
//	cout << " ���� ���� ���� ���� �� ������ �����ϰڽ��ϴ�. " << endl;
//
//	while (true)
//	{
//		int value = 1 + (rand() % 3);
//
//		cout << " 1  ���� , 2  ���� , 3 �� �Դϴ�. �������ֽñ� �ٶ��ϴ�. " << endl;
//		cin >> a;
//		if (a > 3 || a == 0) {
//			cout << "�ٽ� ��� �ֽñ� �ٶ��ϴ�." << endl;
//			continue;
//		}
//		else if (a == value)
//		{
//			cout << "��ǻ�ʹ� " << value << "�����ϴ�" << endl;
//			cout << "�����ϴ�." << endl;
//		}
//		else if (a > value)
//		{
//			cout << "��ǻ�ʹ� " << value << "�����ϴ�" << endl;
//			cout << "�̰���ϴ�." << endl;
//		}
//		else {
//			cout << "��ǻ�ʹ� " << value << "�����ϴ�" << endl;
//			cout << "�����ϴ� " << endl;
//		}
//			
//
//	}
//
//	
//
//}