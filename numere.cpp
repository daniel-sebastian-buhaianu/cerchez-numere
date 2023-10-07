#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = "; cin >> n;

	if (n < 3 || n > 15)
	{
		cout << "eroare valoare n\n";
		return 1;
	}

	int ab[] = {11, 13, 22, 24, 31, 33, 42, 44}, lgab = 8;
	int c[] = {1, 2, 3, 4}, lgc = 4;
	int s[n/2], lgs = n/2;

	int i, j, gata, uc, nr;

	// initializare configuratie

	for (i = 0; i < lgs; i++)
	{
		s[i] = 0;
	}

	uc = gata = 0;

	while (!gata)
	{
		// afisez configuratia curenta
		
		nr = n % 2 ? 2 : 1;

		uc = ab[s[lgs-1]] % 2 ? 0 : 1;	
	
		for (j = 1; j <= nr; j++, uc += 2)
		{
			for (i = 0; i < lgs; i++)
			{
				cout << ab[s[i]];
			}

			if (n % 2)
			{
				cout << c[uc];
			}

			cout << ' ';
		}

		// generez urmatoarea configuratie

		for (i = lgs-1; i >= 0 && s[i]+1 == lgab; i--);

		if (i < 0)
		{
			gata = 1; // ultima configuratie
		}
		else
		{
			s[i]++;

			for (i++; i < lgs; i++)
			{
				s[i] = 0;
			}
		}
	}

	return 0;
}
