#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/timeb.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//struct  timeb{
//	time_t   time;                      /* Ϊ1970-01-01���������*/
//	unsigned   short   millitm;   /* ǧ��֮һ�뼴���� */
//	short   timezonel;               /* ΪĿǰʱ����Greenwich����ʱ�䣬��λΪ���� */
//	short   dstflag;                   /* Ϊ�չ��Լʱ�������״̬�����Ϊ��0���������չ��Լʱ������ */
//};

int main(int argc, char *argv[]) {

	struct timeb t1,t2;
	long t;
	ftime(&t1);//��ʼ����ʱ��ʱ��
	sum2(1000);
	//int sum2=sum2(10);
	ftime(&t2);//��¼�������ʱ��
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
