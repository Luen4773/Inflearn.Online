//#include <iostream>
//
//using namespace std;
//
//// 오늘의 주제 : 로또 번호 생성기
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
//		// i 번째 값이 제일 좋은 후보를 가짐;
//		int best = i;
//		
//		// 다른 후보와 비교를 통해 제일 좋은 후보를 찾아 나선다.
//		for (int j = i + 1; j < count; j++)
//		{
//			if (numbers[j] < numbers[best])
//				best = j;
//		}
//
//		//제일 좋은 후보와 교체하는 과정
//
//		if(i != best)
//		Swap(numbers[i], numbers[best]);
//	}
//
//	
//}
//
//// 3) 로또 번호 생성
//void ChooseLotto(int numbers[])
//{
//	srand((unsigned)time(0));//랜덤 시드 설정
//	// TODO 랜덤으로 1~45 사이의 숫자 6개를 골라주세요! (단, 중복이 없어야 함!)
//	
//	int count = 0;
//	
//	while (count != 6)
//	{
//		int randValue = 1+ (rand() % 45); // 0 ~ 44
//
//		// 이미 찾은 값인지?
//
//		bool found = false;
//		for (int i = 0; i < count; i++)
//		{
//			if (numbers[i] == randValue)
//			{
//				// 이미 찾은 값
//				found = true;
//				break;
//			}
//		}
//		
//
//		// 못 찾았으면 추가!
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
//	// 1) Swap 함수 만들기
//
//	int a = 1; 
//	int b = 2;
//	Swap(a, b);
//
//	//a = 2, b = 1;
//
//	// 2) 정렬 함수 만들기 ( 작은 숫자가 먼저 오도록 정렬)
//	int numbers[6] = { 1,42,3,15,5,6 };
//
//
//
//
//	// 3) 로또 번호 생성기
//	ChooseLotto(numbers);
//
//
//	return 0;
//}