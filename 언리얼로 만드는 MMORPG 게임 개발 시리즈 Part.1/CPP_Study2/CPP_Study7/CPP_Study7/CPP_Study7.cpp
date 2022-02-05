//#include <iostream>
//
//using namespace std;
//
//// 같은 이름 두번 사용할 때 문제
//
//// 2) 연산 우선 순위
//
//// 3) 타입 변환
//
//
//int main() {
//	
//	int hp = 20;
//	cout << hp << endl;
//
//	//// 짝수 여부
//	//
//	//bool isEven = ((hp % 2) == 0);
//	//
//	//
//	//// 짝수거나 3으로 나뉘는 값인지
//	//
//	//bool isEvenOrDivBy3 = (hp % 2 == 0 || hp % 3 == 0);
//
//	// 바구니 교체 (캐스팅)
//	short hp2 = hp; // 윗쪽 비트 데이터가 짤린 상태로 저장
//	float hp3 = hp; // 실수로 변활할때 정밀도 차이가 있기 때문에 데이터 손실
//	unsigned int hp4 = hp; // 비트 단위로 보면 똑같은데, 분석하는 방법이 달라진다.
//
//}