#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"


int main(int argc, char *argv[])
{
	int i;
	struct pstat LaTable;
	getpinfo(&LaTable);
	for(i = 0; i < 25; i++)
	{
		printf(1, "Use: %d   Tickets: %d   Ticks: %d\n", LaTable.inuse[i], LaTable.tickets[i], LaTable.ticks[i]);
	}
	exit();
}
