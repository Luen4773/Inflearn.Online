//#include <iostream>
//using namespace std;
//
////오늘의 주제 : 참조
//
//struct StatInfo
//{
//	int hp; // +0
//	int attack; // +4
//	int defence; // + 8
//};
//
//
//void CreatMonster(StatInfo* info)
//{
//	info->hp = 100;
//	info->defence = 10;
//	info->attack = 50;
//}
//
//
//void CreatMonster(StatInfo info)
//{
//	info.hp = 100;
//	info.defence = 10;
//	info.attack = 50;
//}
//
////값을 수정하지 않는다면, 양쪽 다 일단 문제 없음.
//
//// 1) 값 전달 방식
//
//void PrintInfo(StatInfo  info)
//{
//	cout << "-----------------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence	 << endl;
//	cout << "-----------------------------" << endl;
//}
//
//// 특정 조건을 만족하는 몬스터를 찾는 함수
//StatInfo* FindMoster() {
//	//TODO : Heap 영역에서 뭔가를 찾아봄
//	//찾았다!
//	//return monster~;
//
//	return nullptr;
//}
//
//
//StatInfo globalinfo;
//// 2) 주소 전달 방식
//void PrintInfo(StatInfo* info)
//{
//	if (info == nullptr)
//		return;
//
//
//	cout << "-----------------------------" << endl;
//	cout << "HP : " <<  info->hp << endl;
//	cout << "ATT : " << info->attack << endl;
//	cout << "DEF : " << info->defence << endl;
//	cout << "-----------------------------" << endl;
//
//	// 별 뒤에 붙인다면 ?
//	//Statinfo* const info
//	// info라는 바구니의 내용물(주소)을 바꿀 수 없음
//	// info는 주소값을 갖는 바구니 -> 이 주소값이 고정이다!
//	// info[주소값 = 변경불가]  주소값 [데이터]
//
//	// 별 이전에 붙인다면 ?
//	// const Statinfo* info
//	// info가 '가리키고 있는' 바구니의 내용물을 바꿀 수 없음
//	// '원격' 바구니의 내용물을 바꿀 수 없음
//	// info[주소값]  주소값 [데이터 = 변경불가]
//
//	info = &globalinfo;
//
//	info->hp = 10000;
//
//}
//
//// StatInfo 구조체가 1000바이트짜리 대형 구조체라면?
//// - (값 전달) StatInfo로 넘기면 1000바이트가 복사되는
//// - (주소 전달) StatInfo*는 8바이트
//// - (참조 전달) 
//
//// 3) 참조 전달 방식
//// 값 전달처럼 편리하게 사용하고!
//// 주소 전달처럼 주소값을 이용해 진퉁을 건드리는!
//// 일석이조의 방식!
//void PrintInfo(const StatInfo& info)
//{
//	cout << "-----------------------------" << endl;
//	cout << "HP : " <<  info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence << endl;
//	cout << "-----------------------------" << endl;
//}
//
//#define OUT 
//
//void ChangeInfo(OUT StatInfo& info)
//{
//	info.hp = 1000;
//}
//
//
//int main()
//{
//	// 4바이트 정수형 바구니를 사용할꺼야
//	// 앞으로 그 바구니 이름을 number라고 할께.
//	// 그러니까 number에서 뭘 꺼내거나, number에 뭘 넣는다고 하면
//	// 찰떡같이 알아듣고 해당 주소(data, stack, heap)에 1을 넣어주면 되.
//	int number = 1;
//
//	// * 주소를 담는 바구니
//	// int 그 바구니를 따라가면 int 데이터(바구니)가 있음
//	int* pointer = &number;
//	//pointer 바구니에 있는 주소를 타고 이동해서 그 멀리 있는 바구니에 2를 넣는다.
//	*pointer = 2;
//
//	// 로우레벨(어셈블리) 관점에서 실제 작동 방식은 int*와 똑같음
//	// 
//	int& reference = number;
//
//
//	// C++ 관점에서는 number라는 바구니에 또 다른 이름을 부여한 것.
//	// number라는 바구니에 reference라는 다른 이름을 지어줄게~~
//	// 앞으로 reference 바구니에다가 뭘 꺼내거나 넣으면,
//	// 실제 number바구니(진퉁에다가) 그 값을 꺼내거나 넣으면 됨!
//	reference = 3;
//
//	// 그런데 귀찮게 또 다른 이름을 짖는 이유는?
//	// 그냥 number = 3이라고 해도 똑같은데..
//	// 참조 전달 때문!
//
//
//	
//	// 포인터 vs 참조 세기의 대결
//	// 성능 : 똑같음
//	// 편의성 : 참조 승!
//
//	// 1) 편의성 관련
//	// 편의성이 좋다는게 꼭 장점만은 아니다.
//	// 포인터는 주소를 넘기니 확실하게 원본을 넘긴다는 힌트를 줄 수 있는데.
//	// 참조는 자연스럽게 모르고 지나칠수가 있음
//	// ex)마음대로 고친다면?
//	// const를 사용해서 이런 마음대로 고치는 부분 개선 가능
//
//	// 참고로 포인터도 const를 사용 가능.
//	// *기준으로 앞에 붙이느냐, 뒤에 붙이느냐에 따라 의미가 달라진다.
//
//	// 2) 초기화 여부
//	// 참조 타입은 바구니의 2번째 이름 (별칭?)
//	// -> 참조하는 대상이 없으면 안됨
//	// 반면 포인터는 그냥 어떤~ 주소라는 의미
//	// -> 대상이 실존하지 않을 수도 있음
//	// 포인터에서 '없다' 는 의미로 ? nullptr
//	// 참조 타입은 이런 nullptr 불가능
//
//
//	StatInfo info;
//
//	StatInfo* pointer = nullptr;
//
//	CreatMonster(&info);
//
//
//	StatInfo& reference = info;
//	reference++;
//	PrintInfo(&info);
//
//	// 그래서 결론은?
//	// 사실 Team By Team... 정해진 답은 없다.
//	// ex) 구글에서 만든 오픈소스를 보면 거의 무조건 포인터 사용
//	// ex) 언리언 엔진에선 reference도 애용
//
//	// Rookiss 선호 스타일)
//	// - 없는 경우도 고려해야한다면 pointer ( null 체크 필수)
//	// - 바뀌지 않고 읽는 용도(readonly)만 사용하면 const ref&
//	// - 그 외 일반적으로 ref (명시적으로 호출할 때 OUT을 붙인다)
//	// - 단, 다른 사람이 pointer를 만들어논 것을 이어서 만든다면, 계속 pointer (섞어 사용하지는 않는다)
//
//	// Bonus) 포인터로 사용하던걸 참조로 넘겨주려면?
//	// pointer[ 주소(&info) ] info [ 데이터 ]
//
//	
//
//	// Bonus) 참조로 사용하던걸 포인터로 넘겨주려면?
//	// pointer[ 주소 ]reference,  info [ 데이터 ]
//	ChangeInfo(OUT info);
//
//	return 0;
//}