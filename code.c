#include <stdio.h>
/* Include other headers as needed */
float sqrt(float,float,float);
int main()
{
	int i;
  scanf("%d",&i);
  while(i-->0)
  {
    float num;
    scanf("%f",&num);
    float res = sqrt(num, 1.0, num);
    printf("%.2f\n",res);
  }
    return 0;
}
float sqrt(float n,float a,float b)
{
  if(b*b-n<=0.01)
    return b;
  return sqrt(n,(n/((a+b)/2)),(a+b)/2);
}
