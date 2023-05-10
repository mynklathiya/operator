#include<stdio.h>
#include<conio.h>

main()

{
  int x=2,y=3,z=4,xyz;

  xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));

  printf("%d",xyz);
  getch();

}