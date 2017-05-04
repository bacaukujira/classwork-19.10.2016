#include <stdio.h>
int main()
{
  int fn=1, fnp1=1, rf;
  for(int j=1; j<=100; j++)
  {
    rf=fn+fnp1;
    fn=fnp1;
    fnp1=rf;  
  }
  printf("\n 100-е число Фибаначи = %d \n", rf);
return 0;
}
