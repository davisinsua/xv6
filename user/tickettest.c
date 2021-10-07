#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(int argc, char *argv[]){
	int i;
	int rc;
	
	for(i = 1; i <=3; i++){
		rc = fork();
		if(rc==0){
			settickets(i*10);

			for(;;){}
		}
	}
	exit();
}
