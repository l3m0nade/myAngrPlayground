#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void foo(){
	printf("asd");
}
int foo1(unsigned int a){
	printf("foo1 %x",a);
	return 0;
}
int main(){
	//+-*/<<>>&|!^
	unsigned int a = 0x11223344;
	unsigned int b = 0x55667788;
	unsigned int r;
	r = a + b;
	printf("%x",r);
	r = b - a;
	printf("%x",r);
	r = a * b;
	printf("%x",r);
	r = b / a;
	printf("%x",r);
	r = a << 4;
	printf("%x",r);
	r = a >> 4;
	printf("%x",r);
	r = a & b;
	printf("%x",r);
	r = a | b;
	printf("%x",r);
	r = a ^ b;
	printf("%x",r);
	r = !a;
	printf("%x",r);

	int aa = 0x11223344;
        int bb = 0x55667788;
        int rr;
        rr = aa + bb;
        printf("%x",rr);
        rr = bb - aa;
        printf("%x",rr);
        rr = aa * bb;
        printf("%x",rr);
        rr = bb / aa;
        printf("%x",rr);
        rr = aa << 4;
        printf("%x",rr);
        rr = aa >> 4;
        printf("%x",rr);
        rr = aa & bb;
        printf("%x",rr);
        rr = aa | bb;
        printf("%x",rr);
        rr = aa ^ bb;
        printf("%x",rr);
        rr = !aa;
        printf("%x",rr);
	
	a = 0x11220000;
        b = 0x7788;
        r = a + b;
        printf("%x",r);
        r = b - a;
        printf("%x",r);
        r = a * b;
        printf("%x",r);
        r = b / a;
        printf("%x",r);
        r = a << 4;
        printf("%x",r);
        r = a >> 4;
        printf("%x",r);
        r = a & b;
        printf("%x",r);
        r = a | b;
        printf("%x",r);
        r = a ^ b;
        printf("%x",r);
        r = !a;
        printf("%x",r);

	foo();
	foo1(a);
	void (*fp)() = foo;
	fp();
	int (*fp1)(unsigned int a) = foo1;
	fp1(b);

        if (a != b)
	{printf("different");}
	else
	{printf("same");}

	if (a == b)
        {printf("samesame");}
        else
        {printf("diffdiff");}

	if (a < b)
        {foo();}
        else
        {foo1(a);}

	if (a <= b)
        {foo();}
        else
        {foo1(a);}

	if (a > b)
        {foo();}
        else
        {foo1(a);}

	if (a >= b)
        {foo();}
        else
        {foo1(a);}

	for(int i = 0;i < 0x10; i+=2)
	{
		foo();
	}

	char array[20] = "HelloWorld!";
	char *p = array;
	printf("\n%x %x %d %s %s %d\n",array,p,*p,array,p,*p);
	char *m = malloc(0x40);
        printf("0x%x 0x%x\n",m,p);
	strcpy(m,p);
        printf("\n%s %s",m,p);
	free(m);
	m = NULL;



	return 0;
}
