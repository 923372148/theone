#include <IOSTREAM>
#include<conio.h> 
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;

void fuli();//求复利函数
double lixi(double double_inv,int year);//求复利利息
void danli();//求单利
void benjin();//求本金
void time();//求时间函数
void reward();//求报酬率
void sum();//求资产总值
void lend();//求本息还款
int main()
{int choice;
char choice2;
end1:system("CLS");
printf("\n\n\n\n                       欢迎使用投资与理财计算系统！\n\n");
printf("                         您想计算什么\n");
printf("                           1.单利\n");
printf(" 	                   2.复利\n");
printf(" 	         	   3.一定金额所需本金（复利）\n");
printf("                           4.根据本金、报酬和所需金额求投股时间（年）（股票）\n");
printf("                           5.求股票报酬率\n");
printf("                           6.定息定投计算资产总值\n");
printf("                           7.求每月等额本息还款\n");

printf(" 		          8.退出\n");


scanf("%d",&choice);

switch(choice)
{case 1:system("CLS");danli();break;
 case 2:system("CLS");fuli();break;
 case 3:system("CLS");benjin();break;
 case 4:system("CLS");time();break;
 case 5:system("CLS");reward();break;
 case 6:system("CLS");sum();break;
	 case 7:system("CLS");lend();break;
 case 8:exit(0);
}
printf("\n\n              你想继续计算么(  Y  |  N   )\n");
getchar();
scanf("%c",&choice2);
if(choice2==89||choice2==121){
	goto end1;}
else exit(0);

}
void danli()
{ 
double invest;     //投资金额
int year=3;

printf("请输入投资金额\n");
cin>>invest;
cout<<endl;
printf("请输入存入年期\n");
scanf("%d",&year);
 double inv;    //单利利息
cout<<"输入单利利息";
cin>>inv;

double sum1=0;   //单利
sum1=invest*inv*(double)year+invest;
printf("单利金额为\n");
printf("%lf",sum1);


}
void fuli(){
double lixi2; 
double invest;     //投资金额
int year=3;

printf("请输入投资金额\n");
cin>>invest;
cout<<endl;
printf("请输入存入年期\n");
scanf("%d",&year);
double double_inv;    //复利利息
cout<<"输入复利利息";
cin>>double_inv;

double sum2 =0;   //复利

lixi2=lixi(double_inv,year);

sum2=lixi2*invest;
      printf("%4lf\n",lixi2);
      printf("复利为%lf",sum2);


}

double lixi(double double_inv,int year)
{
	
	int i=0;
double x=1.0;

while(i<year)
{
 i++;
x=(1.0+double_inv)*x;     //计算复利投资的利息
	
}	printf("%4lf\n",x);
	return x;

}
void benjin()
{double lixi2; double double_inv;  
double money;     //投资金额
double sum;
int year=3;
	printf("请输入存入年期\n");
scanf("%d",&year);
cout<<"输入复利利息";
cin>>double_inv;
printf("\n请输入你想得到的金额\n");
scanf("%lf",&money);
lixi2=lixi(double_inv,year);
sum=money/lixi2;
printf("您需要存入\n%lf\n",sum);


}
void time()
{double reward; 
double invest;  //本金
double money;     //想得到的金额
double year=3;
double sum;
double x;
int j;
	printf("请输入本金\n");
scanf("%lf",&invest);
cout<<"输入股票报酬率";
cin>>reward;
printf("\n请输入你想得到的金额\n");
scanf("%lf",&money);
sum=(money-invest)/invest+1.0;
x=1.0;
for(int i=1;x<sum;i++)
{
x=(1+reward)*x;
j=i;
}




printf("需要时间为%d年\n",j);
}
void reward()
{
double reward; 
double invest;  //本金
double money;     //想得到的金额
double year=3;
double sum;
double x;
int j;
	printf("请输入本金\n");
scanf("%lf",&invest);
cout<<"输入存入年份 ";
cin>>year;
printf("\n请输入你想得到的金额\n");
scanf("%lf",&money);
sum=money/invest;
x=1.0;
for(double i=0.01;x<sum;i=i+0.01)
{
x=(1+i)*x;

j=i*100;
}
printf("需要报酬率为百分之%d\n",j);

}

void sum()
{
double reward; 
double invest;//每年定投
int year=3;
double  sum;
double reward2,reward3;

	printf("请输入每年定投\n");
scanf("%lf",&invest);
cout<<"输入存入年份 ";
cin>>year;
cout<<"输入回报";
cin>>reward;
reward3=1.0+reward;
reward2=pow(reward3,year);
sum=invest*reward3*(reward2-1.0)/reward;
printf("该资产总额为%lf",sum);
}
void lend()
{double lilv; //年利率
double invest;//贷款本金
int year=3;//期限
double  sum;//等额应还
double lilv2,lilv3,lilv4;

	printf("请输入贷款本金\n");
scanf("%lf",&invest);
cout<<"输入存入年份 ";
cin>>year;
cout<<"输入利率";
cin>>lilv;
year=12*year;
lilv2=lilv/12.0;
lilv3=lilv2+1.0;
lilv4=pow(lilv3,year);
sum=invest*lilv2*lilv4/(lilv4-1.0);
printf("每月应还金额为%lf",sum);


}
