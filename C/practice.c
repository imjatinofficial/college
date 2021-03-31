#include<stdio.h>
#include<math.h>
int main()
{
  long int a,b,d,f,i;
  double c;
  scanf("%ld",&a);
 for(i=0;i<a;i++){
  scanf("%ld",&b);
  c=b/26;
  d=c;
  d++;
  f=pow(2,d-1);
  if(b>26*(d-1) && b<=26*(d-1)+2)
		printf("%ld %d %d\n",f,0,0);
  if(b>26*(d-1)+2 && b<=26*(d-1)+10)
        	printf("%d %ld %d\n",0,f,0);
  if(b>26*(d-1)+10 && b<=26*d)
        	printf("%d %d %ld\n",0,0,f);

  if(b==26*(d-1)){
     f=pow(2,d-2);
     printf("%d %d %ld\n",0,0,f);
    }
}
return(0);
}
