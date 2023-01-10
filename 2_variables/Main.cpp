#include <iostream>

int main() // int 를 반환하는 함수라는 뜻
{
	char a = 5 ; 	
	       	
	float variable = 8.f; // -2b -> 2b 까지 저장할 수 있는 자료형
	bool boolVariable = true;
	
	std::cout << variable << std::endl;
	variable=22;
	std::cout << a << std::endl; // 이렇게 하면 a가 그냥 출력
	std::cout << sizeof(boolVariable) << std::endl;	
	std::cin.get();
}
