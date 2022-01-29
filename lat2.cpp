#include <iostream>
#include <ncurses.h>
using namespace std;
int main()
{
	
	int i,jml;

	for(i=1;i<=10;i++)
	{
		jml = i + i;
		cout<<i<<"+"<<i<<"="<<jml<<"\n";
	}

	getch();

}
