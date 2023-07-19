#include <iostream>

int main()
{
	int nums[] = { 1, 2, 3, 4 };
	bool isFour = false;

	for (int num : nums)
	{
		if (num == 4)
			isFour = true;
	}

	if (isFour)
		std::cout << "4가 있습니다" << std::endl;
}