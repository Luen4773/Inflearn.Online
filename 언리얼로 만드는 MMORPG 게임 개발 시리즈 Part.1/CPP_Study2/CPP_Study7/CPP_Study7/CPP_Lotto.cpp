//#include <iostream>
//
//using namespace std;
//
//// ������ ���� : �ζ� ��ȣ ������
//
//void Swap(int& a, int& b)
//{
//	int value = a;
//	a = b;
//	b = value;
//
//}
//
//
//void Sort(int numbers[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{	
//		// i ��° ���� ���� ���� �ĺ��� ����;
//		int best = i;
//		
//		// �ٸ� �ĺ��� �񱳸� ���� ���� ���� �ĺ��� ã�� ������.
//		for (int j = i + 1; j < count; j++)
//		{
//			if (numbers[j] < numbers[best])
//				best = j;
//		}
//
//		//���� ���� �ĺ��� ��ü�ϴ� ����
//
//		if(i != best)
//		Swap(numbers[i], numbers[best]);
//	}
//
//	
//}
//
//// 3) �ζ� ��ȣ ����
//void ChooseLotto(int numbers[])
//{
//	srand((unsigned)time(0));//���� �õ� ����
//	// TODO �������� 1~45 ������ ���� 6���� ����ּ���! (��, �ߺ��� ����� ��!)
//	
//	int count = 0;
//	
//	while (count != 6)
//	{
//		int randValue = 1+ (rand() % 45); // 0 ~ 44
//
//		// �̹� ã�� ������?
//
//		bool found = false;
//		for (int i = 0; i < count; i++)
//		{
//			if (numbers[i] == randValue)
//			{
//				// �̹� ã�� ��
//				found = true;
//				break;
//			}
//		}
//		
//
//		// �� ã������ �߰�!
//		if (found == false)
//		{
//			numbers[count] = randValue;
//			count++;
//		}
//
//	}
//
//
//	Sort(numbers, 6); // sizeof(numbers) / sizeof(int)
//
//}
//
//int main()
//{
//	// 1) Swap �Լ� �����
//
//	int a = 1; 
//	int b = 2;
//	Swap(a, b);
//
//	//a = 2, b = 1;
//
//	// 2) ���� �Լ� ����� ( ���� ���ڰ� ���� ������ ����)
//	int numbers[6] = { 1,42,3,15,5,6 };
//
//
//
//
//	// 3) �ζ� ��ȣ ������
//	ChooseLotto(numbers);
//
//
//	return 0;
//}