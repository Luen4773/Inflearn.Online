//#include <iostream>
//
//using namespace std;
//
//
//// ������ ���� : ������ ����
//// �����͸� �����ϴ� ����� ���ؼ� �˾ƺ��ô�.
//
//// a[1]
//// a��� �̸��� �ٱ��ϸ� �Ҵ��ϰ� �ȿ� 1�� �ִ´�.
//int a = 1;
//
//// b[2]
//// b��� �̸��� �ٱ��ϸ� �Ҵ��ϰ� �ȿ� 2�� �ִ´�.
//int b = 2;
//
//bool isSame;
//bool isDifferent;
//bool isGreater;
//bool isSmaller;
//bool islnvincible;
//bool test;
//int hp;
//
//int main() {
//
//#pragma region �� ����

	//���� �ʿ��Ѱ�?
	//ex) ü���� 0�� �Ǹ� ���
	//ex) ü���� 30% �����̸� �ñر⸦ �ߵ�
	//ex) ����ġ�� 100 �̻��̸� ������

	//a == b : a �� b�� ���� ������?
	// ������ 1 , Ʋ���� 0
	isSame = (a == b);

	// a!= b : a�� b�� �ٸ���?
	// �ٸ��� 1, ������ 0
	isDifferent = (a != b);

	// a > b : a�� b���� ũ��?
	// a >= b : a�� b���� ũ�ų� ����?
	// 1 �ƴϸ� 0
	isGreater = (a > b);

	// a < b : a�� b���� �۳�?
	// a <= b : a�� b���� �۰ų� ����?
	isSmaller = (a < b);
	
	


#pragma endregion
//
//
//#pragma region �� ����
//	//���� �ʿ��Ѱ�? ���ǿ� ���ѳ��� ��� �ʿ��Ҷ�
//	//ex) �α����Ҷ� ���̵� ���� and ��й�ȣ�� ���ƾ� �Ѵ�/
//	//ex) ��� �������̰ų� or ��� �����̸� ��� �ػ갡��
//	
//	//!not 
//	//0�̸� 1, �׿� 0
//	test = !isSame;
//
//
//	//&&and
//	//a &&b -> �Ѵ� 1�̸� 1, �׿� 0 
//	test = (hp <= 0 && islnvincible == false); // ����
//
//	// || or 
//	// a || b -> �� �� �ϳ��� 1�̸� 1 (�Ѵ� 0�̸� 0)
//	test = (hp > 0 || islnvincible == true);
//
//
//#pragma endregion
//}