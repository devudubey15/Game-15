#include <iostream>
using namespace std;
inline int draw_W(int a[3][3]);
inline int draw_C(int b[3][3]);
inline int badhao_aage(int q[][3], int p[][3]);
int main()
{
	int temp = 0;
	int a[3][3] = {{8, 7, 6}, {5, 4, 3}, {2, 1, 00}};
	int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 00}};
	int c, d;
	c = draw_W(b);
	d = draw_C(a);

	while (true)
	{
		temp = badhao_aage(a, b);
		if (temp == 0)
		{
			cout << "##$$**you win**$$##";
			return (0);
		}
	}
}
int draw_W(int b[3][3])
{
	int k, l;

	cout << "wining condition is this:-"
		 << "\n";

	for (l = 0; l < 3; l++)
	{
		for (k = 0; k < 3; k++)
		{
			cout << "\t" << b[l][k];
		}
		cout << "\n"
			 << "\n";
	}
}
int draw_C(int a[3][3])
{
	int i, j;

	cout << "current situation is :-"
		 << "\n";

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{

			cout << "\t" << a[i][j];
		}
		cout << "\n"
			 << "\n";
	}
}
int badhao_aage(int a[][3], int b[][3])
{
	int i, j, n, temp = 0, swap = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == 0) // find coordinates of zero in i and j.
			{
				cout << "please enter a valid move  :-  "
					 << "\t";
				cin >> n;
				cout << "\n"
					 << "\n";
				if (n == a[i + 1][j])
				{
					if ((0 <= (i + 1) && (i + 1) <= 2) && (0 <= (j) && (j) <= 2))
					{

						swap = 0;
						a[i][j] = a[i + 1][j];
						a[i + 1][j] = swap;
						draw_C(a);
					}

					else
					{
						cout << "invalid move"
							 << "\n";
					}
				}
				else if (n == a[i - 1][j])
				{
					if (0 <= (i - 1) && (i - 1) <= 2 && 0 <= (j) && (j) <= 2)
					{

						swap = 0;
						a[i][j] = a[i - 1][j];
						a[i - 1][j] = swap;
						draw_C(a);
					}

					else
					{
						cout << "invalid move"
							 << "\n";
					}
				}
				else if (n == a[i][j + 1])

				{
					if ((0 <= i && i <= 2) && (0 <= (j + 1) && (j + 1) <= 2))
					{
						swap = 0;
						a[i][j] = a[i][j + 1];
						a[i][j + 1] = swap;
						draw_C(a);
					}

					else
					{
						cout << "invalid move"
							 << "\n";
					}
				}
				else if (n == a[i][j - 1])
				{
					if (0 <= (i) && (i) <= 2 && 0 <= (j - 1) && (j - 1) <= 2)
					{

						swap = 0;
						a[i][j] = a[i][j - 1];
						a[i][j - 1] = swap;
						draw_C(a);
					}
					else
					{
						cout << "invalid move"
							 << "\n";
					}
				}
				else
				{
					cout << "invalid move"
						 << "\n";
					continue;
				}
				for (i = 0; i < 3; i++)
				{
					for (j = 0; j < 3; j++)
					{

						if (a[i][j] != b[i][j])
						{
							temp = 1;
						}
					}
				}
				return (temp);
			}
		}
	}
}
