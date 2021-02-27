# include<stdio.h>
# include<math.h>
int main(){

    int a = 6;
    int b = 2;
    int z=a*b; //legal
   // a*b=z;//ileegal
    printf("the value of z is %d\n", z);
    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value of a/b is %d\n", a / b);

    printf("remainder when 5 is divided by 2 is %d\n",5%2);
     printf("remainder when -5 is divided by 2 is %d\n",-5%2);
      printf("remainder when 5 is divided by -2 is %d\n",5%-2);

    //there is no operator to perform exponentiation in c
    printf("the value of 2^5 is %f\n",pow(2,5));
    //int ope int -->int
    //int ope float -->float
    printf("the value of 5/2 is %d\n",5/2);
    printf("the value of 5.0/2 is %f\n",5.0/2);
    return 0;
}