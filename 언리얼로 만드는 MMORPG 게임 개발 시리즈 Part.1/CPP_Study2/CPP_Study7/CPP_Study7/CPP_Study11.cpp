//#include <iostream>
//using namespace std;
//
////상수인건 알겠는데? 너무 따로따로 노는 느낌이다.
//
//const int PAPER = 3;
//const int SCISSORS = 1;
//const int ROCK = 2;
//
//
//// 숫자를 지정하지 않을 경우에 첫 값은 0 이다.
//// 현재 값은 0부터 시작인거다 그 다음부터는 + 1이다
//
//enum ENUM_SRP
//{
//	ENUM_SCISSORS,
//	ENUM_ROCK,
//	ENUM_PAPER
//};
//
//// #이 붙은거 -> 전처리 지시문
//// #include <iostream>
//// 1) 전처리 2) 컴파일 3) 링크
//#define DEFINE_SCISSORS 1 + 2
//#define DEFINE_TEST cout <<"Hello World" << endl;
//
//
//int main() {
//
//	srand(time(0)); //시드 설정
//
//	//1 2 3 
//	rand(); // 0~ 32767 정도의 숫자가 나옴
//
//	
//
//	int a = 0;
//
//
//	cout << " 지금 부터 가위 바위 보 게임을 시작하겠습니다. " << endl;
//
//	while (true)
//	{
//		int value = 1 + (rand() % 3);
//
//		cout << " 1  가위 , 2  바위 , 3 보 입니다. 선택해주시길 바랍니다. " << endl;
//		cin >> a;
//		if (a > 3 || a == 0) {
//			cout << "다시 골라 주시기 바랍니다." << endl;
//			continue;
//		}
//		else if (a == value)
//		{
//			cout << "컴퓨터는 " << value << "였습니다" << endl;
//			cout << "비겼습니다." << endl;
//		}
//		else if (a > value)
//		{
//			cout << "컴퓨터는 " << value << "였습니다" << endl;
//			cout << "이겼습니다." << endl;
//		}
//		else {
//			cout << "컴퓨터는 " << value << "였습니다" << endl;
//			cout << "졌습니다 " << endl;
//		}
//			
//
//	}
//
//	
//
//}