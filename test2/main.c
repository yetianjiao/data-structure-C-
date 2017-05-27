#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/timeb.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//struct  timeb{
//	time_t   time;                      /* 为1970-01-01至今的秒数*/
//	unsigned   short   millitm;   /* 千分之一秒即毫秒 */
//	short   timezonel;               /* 为目前时区和Greenwich相差的时间，单位为分钟 */
//	short   dstflag;                   /* 为日光节约时间的修正状态，如果为非0代表启用日光节约时间修正 */
//};

int main(int argc, char *argv[]) {

	struct timeb t1,t2;
	long t;
	ftime(&t1);//开始运算时的时间
	sum2(1000);
	//int sum2=sum2(10);
	ftime(&t2);//记录运算完的时间
	t=(t2.time-t1.time)*1000+(t2.millitm-t1.millitm);
	printf("%d",t);
	return 0;

}

int sum1(int n) {
	float sum=0;
	int i,j;
	for (i=0; i<n; i++) {
		for(j=0;j<n; j++) {
			sum+=i*j;
		}
	}
	printf("%f",sum);
	return 0;
}
int sum2(int n) {
	int i=0;
	float sum=0;
	while(i<n) {
		sum+=i;
		i+=2;
	}
	printf("%f",sum); 
	return 0;
}
