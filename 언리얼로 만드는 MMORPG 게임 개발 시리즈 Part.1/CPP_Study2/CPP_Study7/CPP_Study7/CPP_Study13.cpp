//#include <iostream>
//
//using namespace std;
//
//// 오늘의 주제 : 지역 변수와 값 전달
//
//// 전역 변수 
//// 참고) 초기화 여부 : const 등 .rotato .data. bss
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
//// 스택
//// [[매개변수][RET][지역변수(hp 1)][매개변수(hp=1)][RET][지역변수 finalHp]             ]
//// 스택은 끝나면 다시 돌아오면서 제거하면서 돌아온다.
//int main() {
//
//
//	//지역 변수
//
//
//	int hp = 1;
//
//	cout << "increase 호출 전" << hp << endl;
//	increaseHp(hp);
//	cout << "increase 호출 후 " << hp << endl;
//
//	int LocalValue = 0;
//
//
//	return 0;
//}