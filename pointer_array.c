#include <stdio.h>
 main( )
 {
    int *p, i;
    int a[5] = {16, 26, 36, 46, 56};

    p = a;//배열의 시작주소를 포인터변수에 줌  
	//printf("%p\n", a);
	//printf("%p\n", p);
	
    printf("1. 배열명[첨자] 이용 출력 \n");
    for(i = 0; i < 5; i++)
		printf("%6d", a[i]);
	    printf("\n");
	    
	printf("2. 포인터를 배열명처럼 이용해서 출력 \n");
    for(i = 0; i < 5; i++)
		printf("%6d", p[i]);
	    printf("\n");
    
    p[0] = 17;
    p[1] = 27;
    p[2] = 37;
    p[3] = 47;
    p[4] = 57;    

    printf("\n3. 포인터변수 이용 출력\n");
    for(i = 0; i < 5; i++)
	printf("%6d", p[i]);
    printf("\n"); 

    printf("\n4. 포인터변수와 포인터연산자 이용 출력\n");
    for(i = 0; i < 5; i++)
	printf("%6d", *(p + i));
    printf("\n"); 
}
