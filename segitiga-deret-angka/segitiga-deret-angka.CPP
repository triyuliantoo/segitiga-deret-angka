#include <iostream.h>
#include <conio.h>
main ()
{
	int a,b=3,i;
	   //a tinggi segitiga
	   //b nilai deret
      //i nilai loop
	cout << " ========================================== " <<endl;
	cout << "  " <<endl;
	cout << "Input jumlah baris deret angka segitiga : ";
	cin >> a;
	cout << endl;
	cout << endl;

	for (int h=1;h<=a;h++)
   {
	   for (i=1;i<=h;i++)
		{
			cout <<"\t"<<b;
         b++;
		}
		cout <<endl;
      b=b-i+3;
	}

	cout << endl;
	cout << " ============================================ " <<endl;
	getch ();
}
