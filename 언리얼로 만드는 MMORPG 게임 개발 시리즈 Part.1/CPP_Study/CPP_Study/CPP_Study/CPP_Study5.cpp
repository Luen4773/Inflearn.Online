//#include <iostream>
//
//using namespace std;
//
//
//// 오늘의 주제 : 데이터 연산
//// 데이터를 가공하는 방법에 대해서 알아봅시다.
//
//// a[1]
//// a라는 이름의 바구니를 할당하고 안에 1을 넣는다.
//int a = 1;
//
//// b[2]
//// b라는 이름의 바구니를 할당하고 안에 2을 넣는다.
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
//#pragma region 비교 연산

	//언제 필요한가?
	//ex) 체력이 0이 되면 사망
	//ex) 체력이 30% 이하이면 궁극기를 발동
	//ex) 경험치가 100 이상이면 레벨업

	//a == b : a 와 b의 값이 같은가?
	// 같으면 1 , 틀리면 0
	//isSame = (a == b);

	// a!= b : a와 b는 다른가?
	// 다르면 1, 같으면 0
	//isDifferent = (a != b);

	// a > b : a가 b보다 크냐?
	// a >= b : a가 b보다 크거나 같냐?
	// 1 아니면 0
	//isGreater = (a > b);

	// a < b : a가 b보다 작냐?
	// a <= b : a가 b보다 작거나 같냐?
	//isSmaller = (a < b);
	
	


//#pragma endregion
//
//
//#pragma region 논리 연산
//	//언제 필요한가? 조건에 대한논리적 사고가 필요할때
//	//ex) 로그인할때 아이디도 같고 and 비밀번호도 같아야 한다/
//	//ex) 길드 마스터이거나 or 운영자 계정이면 길드 해산가능
//	
//	//!not 
//	//0이면 1, 그외 0
//	test = !isSame;
//
//
//	//&&and
//	//a &&b -> 둘다 1이면 1, 그외 0 
//	test = (hp <= 0 && islnvincible == false); // 죽음
//
//	// || or 
//	// a || b -> 둘 중 하나라도 1이면 1 (둘다 0이면 0)
//	test = (hp > 0 || islnvincible == true);
//
//
//#pragma endregion
//}