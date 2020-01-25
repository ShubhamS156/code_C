#include<stdio.h>
#include<string.h>
struct player
{
	char pname[20];
}pl;
char* play(struct player *temp_pl)
{
	strcpy(temp_pl->pname, "kohlii");
	return temp_pl->pname;
}
int main()
{
	strcpy(pl.pname, "dhonii");
  printf("%s\n",pl.pname );
	printf("%s %s", pl.pname, play(&pl));
	return 0;
}
