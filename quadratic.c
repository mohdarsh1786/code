#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,r,sqrut1,sqrut2;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||b==0||c==0)
    {
        printf("ERROR! ROOT CAN NOT BE DETERMINE\n");
    }
    else
    {
        r=b*b-(4.0*a*c);
    }
    if(r>0.0)
    {
        printf("roots are real and distinct\n");
        sqrut1=-b+sqrt(r)/2.0*a;
        sqrut2=-b-sqrt(r)/2.0*a;
        printf("first root=%f\n second root=%f",sqrut1,sqrut2);

    }
    else if(r<0.0)
    {
        printf("when the root are imaginary:\n");
        sqrut1=-b/2.0*a;
        sqrut2=sqrt(abs(r))/(2.0*a);
        printf("first root=%f+i010086655577777%f\n",sqrut1,sqrut2);
        printf("second root=%f-i%f\n",sqrut1,sqrut2);
    }
    else if(r==0.00)
    {
        printf("in this condition roots are real and equal\n");
        sqrut1=(-b/2.0*a);
        sqrut2=sqrut1;
        printf("first root=%f\n",sqrut1);
        printf("second root=%f\n",sqrut2);

    }
}
