//202510303129
//19150945470@163.com
//陶磊
#include<stdio.h>
 int main()
 {  int a;

    printf("请输入学生成绩： ");
    scanf("%d",&a);

    if (a>=90&&a<=100)
    {
      printf("对应等级为：A");
     

    }
    else if(a>=80)
    {
      printf("对应的等级为：B");

    }
    else if(a>=70)
    {
      printf("对应的等级为 C");
    }

    else if(a>=60)
    {
      printf("对应的等级为：D");

    }
    else if (a<60)
    {
      printf("对应等级为：E");

      
    }
    
   return 0;

 }
