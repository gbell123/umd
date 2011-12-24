#include <stdio.h>
#include <malloc.h>

int main(){
        int i = 97;
        int *ip = &i;
        printf("%d (same as %d) at %p (same as %p)\n",i,*ip,
                                             (void *)ip, (void *)&i);
        printf("The pointer is at %p\n",(void *)&ip);

        ip = (int *)malloc(sizeof (int));
        *ip = 104;
        printf("%d at %p which is at %p\n",*ip,
                                        (void *)ip, (void *)&ip);
        free(ip);

	// bad! 
        printf("BAD: %d at %p which is at %p\n",*ip, (void *)ip, (void *)&ip);

        ip = (int *)malloc(sizeof (int) * 10);
        for (i = 0; i < 10; i++){
		ip[i] = i*10;
	}
        for (i = 0; i < 10; i++){
		printf("%d\n",ip[i]);
	}
       
	return 0;
}
