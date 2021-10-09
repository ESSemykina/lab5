/*
#include <iostream>
#include <fstream>

int main()
{
	/*int M[10000];
	
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
		std::cin >> M[i];

	// Обработка
	// 1. Определить, есть ли простое число в последовательности
	bool isPrimeInSequence = false;
	for (int i = 0; i < n; i++)
	{
		int x = M[i];
		bool isPrime = true;
		for (int d = 2; d < x - 1; d++)
			if (x % d == 0)
			{
				isPrime = false;
				break;
			}

		if (isPrime)
		{
			std::cout << "Prime" << std::endl;
			isPrimeInSequence = true;
			break;
		}
		else
			std::cout << "Not prime" << std::endl;
	}

	// 2. Отсортировать последовательность по невозрастанию
	std::cout << isPrimeInSequence << std::endl;

	if (isPrimeInSequence == false)
	{
		// Сортировка
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if (M[i] <= M[j])
				{
					int tmp = M[i];
					M[i] = M[j];
					M[j] = tmp;
				}
	}


	for (int i = 0; i < n; i++)
		std::cout << M[i] << " ";*/















































	/*int M[10000];
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
		std::cin >> M[i];

	bool isSort = true;
	for (int i = 0; i < n; i++)
	{
		bool katya = true;
		int x = M[i];
		
		int sum = 0;
		while(x>0)
		{
			sum += x % 10;
			x = x / 10;

			if (sum == 19)
			{
				katya = false;
				break;
			}
		
		}

		if (katya == false)
		{
			isSort = false;
		}
	}

	if (isSort)
	{
		std::cout << "111" << std::endl;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (M[i] <= M[j])
				{
					int tmp = M[i];
					M[i] = M[j];
					M[j] = tmp;

				}
	}

	for (int i = 0; i < n; i++)
		std::cout << M[i] << " ";

	}
	*/






/*
#include <iostream>
int main()

{
	int M[1000];
	int first[1000];
	int min[1000];
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> M[i];

		int x = M[i];
		while (x > 9)
			x /= 10;

		first[i] = x;
		
		x = M[i];
		min[i] = 9;
		while (x > 0)
		{
			int d = x % 10;
			if (min[i] > d)
				min[i] = d;
			x = x / 10;
		}

	}

	for (int i = 0; i>n;i++)
		for (int j = i + 1; j > n; j++)
			if (first[i] <= first[j])
			{
				std::swap(first[i], first[j]);
			}
			else if (first[i] == first[j] && min[i] <= min[j])
			{
				std::swap(min[i], min[j]);
			}
			else if (first[i] == first[j] && min[i] == min[j])
			{
				std::swap(min[i], min[j]);
			}

	for (int i = 0; i < n; i++)
	{
		std::cout << M[i] << " " << first[i] << " " << min[i] << std::endl;
	}





	// Ввод последовательности
	// Заполнить массив с первыми цифрами чисел
	// Заполнить массив с наименьшими цифрами чисел
*/

//3
/*#include <iostream>
#include <fstream>
#define N  100
#define M  100
int main()
{
	std::ifstream in("input.txt");

	int matrix[N][M];
	int	min;
	int min2;
	int sum = 0;
	min = INT_MAX;
	int n, m;
	in >> n >> m;
	
	// Ввод
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			in >> matrix[i][j];
	

	// Обработка
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = sum + matrix[i][j];
		}
		if (sum < min)
		{
			min = sum;
			min2 = i;
			sum = 0;
		}
		sum = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (i == min2)
		{
			for (int j = 0; j < m; j++)
			{
				matrix[i][j] = min;
			}
		}
	}
	
	
	// Вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

		std::cout << matrix[i][j] << " ";	
		}
	
	std::cout << std::endl;
	}
		



}
*/


//5.1(4)
#include <iostream>
#include <string>


using namespace std;
int main()
{

	int a, b;
	cin >> a;
	char s[100];
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < a; i++)
	{
		if ((s[i] == 'e') || (s[i] == 'y') || (s[i] == 'u') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'a') || (s[i] == 'E') || (s[i] == 'Y') || (s[i] == 'U') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'A'))
		{ }
		else
		{
			cout << s[i];
		}
	}
	
	

	


	
}














































