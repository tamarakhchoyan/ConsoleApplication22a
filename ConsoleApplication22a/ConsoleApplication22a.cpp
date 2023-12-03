#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int a = n % 10;
	int b = (n / 10) % 10;
	int c = n / 100;
	if(c+3==a)
	{
		std::cout << 1;
	}
	else { std::cout << n * n; }
	return 0;
}
