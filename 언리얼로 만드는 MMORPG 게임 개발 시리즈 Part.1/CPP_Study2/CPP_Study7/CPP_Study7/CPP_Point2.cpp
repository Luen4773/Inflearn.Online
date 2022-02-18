#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터 연산

// 1) 주소 연산자 (&)
// 2) 산술 연산자 (+ -)
// 3) 간접 연산자
// 4) 간접 멤버 연산자


int main() {


	int number = 1;

	// 1) 주소 연산자 (&)
	// - 해당 변수의 주소를 알려주세요~
	// - 더 정확히 말하면 해당 변수 타입(TYPE)에 따라서 TYPE* 변환
	int* pointer = &number;
	
	// 2) 산술 연산자 (+ -)

	number += 1; //1증가했다(!)

	pointer += 1; //4증가했다(?)






	return 0;
}