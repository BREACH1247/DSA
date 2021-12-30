#include <stdio.h>

int main() {
	int try,quan1,quan2,vol1,vol2,total;
	scanf("%d%d%d%d%d",&try,&quan1,&quan2,&vol1,&vol2);
	for(int i=0;i<try;i++){
	    total = (vol1/quan1)+(vol2/quan2);
	    printf("%d\n",total);
	}
	return 0;
}


