#include "stdafx.h"
#include "iostream"

using namespace std;
struct yigin
{
	int yi;
	int deger[8];
};
typedef struct yigin Yigin;

int koy(int veri,Yigin *y)
{
	if (y->yi>=8)
	{
		puts("\n\nYığın Dolu!");
		return 1;
	}
	else
	{
		y->deger[y->yi] = veri;
		y->yi++;
	}
}

void yazdir(Yigin *y)
{
	if(y->yi<=0)
	{
		puts("\n\nYığın Boş!");
	}
	else
	{
		for (int i = y->yi-1; i >=0 ; i--)
		{
			printf("%d",y->deger[i]);
		}
		cout<<"\n"<<endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"tr");

	int sayi,kalan,elemansay;
	Yigin s;
	s.yi=0;
	printf("İki haneli bir sayı giriniz : \n");
	scanf_s("%d",&sayi);

	printf("Girilen sayı : %d ",sayi);

	do
	{
		kalan = sayi % 2 ;
		sayi = sayi / 2 ;
		koy(kalan,&s);

	} while (sayi!=0);

	printf("\nGirilen sayının 2lik tabandaki karşılığı : ");
	yazdir(&s);

	system("pause");
	return 0;
}

