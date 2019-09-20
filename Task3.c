#include<stdio.h>
#include<math.h>
int main() {
  float a,b,c;
  float delta,root1,root2;

  printf("Enter a, b and c of quadratic equation: ");
  scanf("%f%f%f",&a,&b,&c);
  delta = (b*b)-(4*a*c);
  if(delta<0){
    printf("roots are complex number.\n");

  }
  if(delta==0){
    printf("Both are equal.\n");

    root1 = -b/(2*a);
    printf("Root of quadratic equation is : %f.3", root1);

    return 0;
  }
  if(delta>0){
    root1 = (-b+sqrt(delta))/(2*a);
    root2 = (-b-sqrt(delta))/(2*a);
    printf("roots od equation are : &f.3, &f.3",root1, root2);

  }
  return 0;
}
