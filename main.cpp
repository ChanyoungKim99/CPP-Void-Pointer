#include <iostream>

int main()
{
	int n{ 10 };
	char c{ 'a' };

	void* p;  // void pointer 
			  // 어떤 타입의 변수든 가리킬 수 있음

	p = &n; // 100번지라면 p = 100번지
	p = &c; // 104번지라면 p = 104번지로 변경



	// 타입이 없으므로 역참조가 불가능하다
	// std::cout << *p << std::endl; (x)

	// 포인터연산 역시 타입이 필요하기에, 불가능하다
	// p++;   p = p + 1;   (x)

	// 명시적으로 지정 시, 역참조, 포인터 연산 모두 가능해진다
	std::cout << *(char*)p << std::endl;

	// p의 void포인터를 char포인터로 형변환 후, 역참조

	// p = (void*)((char*)p + 1); 가능하다
	// void로의 변환은 묵시적이므로 생략가능

	p = (char*)p + 1;
}