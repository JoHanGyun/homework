#include <stdio.h>
 main( )
 {
    int *p, i;
    int a[5] = {16, 26, 36, 46, 56};

    p = a;//�迭�� �����ּҸ� �����ͺ����� ��  
	//printf("%p\n", a);
	//printf("%p\n", p);
	
    printf("1. �迭��[÷��] �̿� ��� \n");
    for(i = 0; i < 5; i++)
		printf("%6d", a[i]);
	    printf("\n");
	    
	printf("2. �����͸� �迭��ó�� �̿��ؼ� ��� \n");
    for(i = 0; i < 5; i++)
		printf("%6d", p[i]);
	    printf("\n");
    
    p[0] = 17;
    p[1] = 27;
    p[2] = 37;
    p[3] = 47;
    p[4] = 57;    

    printf("\n3. �����ͺ��� �̿� ���\n");
    for(i = 0; i < 5; i++)
	printf("%6d", p[i]);
    printf("\n"); 

    printf("\n4. �����ͺ����� �����Ϳ����� �̿� ���\n");
    for(i = 0; i < 5; i++)
	printf("%6d", *(p + i));
    printf("\n"); 
}
