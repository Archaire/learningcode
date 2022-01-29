#include <iostream>
#include <ncurses.h>
using namespace std;
int main()
{
	int jml, i;
	i=1;
	while (i<=10)
	{
		jml=i+i;
		cout<<i<<"+"<<i<<"="<<jml<<"\n";
		i++;
	}
	getch();

}
