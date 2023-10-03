#include <iostream>
#include <ctime>
int main()
{
	std::cout << " Random = 0; Set value = 1" << '\n';
	int a = 0;
	std::cin >> a;
	int pr0 = 1;
	int size0 = 0;
	int sum0 = 0;
	int pr = 1;
	int size = 0;
	int sum = 0;
	switch (a)
	{
		case 0:
		std::cout << "Enter natural number:" << '\n';
		std::cin >> size0;
		size0++;
		if (size0 < 0)
		{
			std::cout << "Error";
		}
		else
		{
			srand(time(NULL));
			int* arr0 = new int[size0];
			int j = 0;
			for (j; j < size0 - 1; j++)
			{
				arr0[j] = rand();
				std::cout << arr0[j] << '\t';
			}
			arr0[j + 1] = 0;
			for (int i = 0; i < size0 - 1; i += 2)
			{
				pr0 *= arr0[i];
			}
			for (int i = 0; i < size0 - 1; i++)
			{
				if (arr0[i] != 0)
					sum0 += arr0[i];
			}
			int temp0 = 0;
			for (int i = 0; i < size0 - 1; i++) {
				for (int j = 0; j < size0 - i - 2; j++) {
					if (arr0[j] > 0)
					{
						if (arr0[j] > arr0[j + 1])
						{
							temp0 = arr0[j];
							arr0[j] = arr0[j + 1];
							arr0[j + 1] = temp0;
						}
					}
				}
			}
			std::cout << '\n' << "proszv is " << pr0;
			std::cout << '\n' << "sum is " << sum0;

		}
		break;
		

		case 1:
		std::cout << "Enter natural number:" << '\n';
		std::cin >> size;
		size++;
		if (size < 0)
		{
			std::cout << "Error";
		}
		else
		{
			int* arr = new int[size];
			int j = 0;
			for (j; j < size - 1; j++)
			{
				std::cout << "Enter " << j << " Element:";
				std::cin >> arr[j];
			}
			arr[j + 1] = 0;
			for (int i = 0; i < size - 1; i += 2)
			{
				pr *= arr[i];
			}
			for (int i = 0; i < size - 1; i++)
			{
				if (arr[i] != 0)
					sum += arr[i];
			}
			int temp = 0;
			for (int i = 0; i < size - 1; i++) {
				for (int j = 0; j < size - i - 2; j++) {
					if (arr[j] > 0)
					{
						if (arr[j] > arr[j + 1])
						{
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
			}
			for (int i = 0; i < size - 1; i++)
			{
				std::cout << arr[i] << '\t';
			}
			std::cout << '\n' << "proszv is " << pr;
			std::cout << '\n' << "sum is " << sum;

		}
		break;
		
	}

	return 0;
}
