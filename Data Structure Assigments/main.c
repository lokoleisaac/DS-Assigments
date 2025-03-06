#include <stdio.h>
#include <stdlib.h>

int main()
{
/*char D[50];
printf("enter the domestic animals D here\n");
scanf("%s",&D);
char W[50];
printf("enter the wild animal W here\n");
scanf("%s",&W);
char P[50]="W+D";
printf("a group of D and W is %s%s%s",D,W,P);
*/

float phy[4];
float chem[4];
float math[4];
float phy_total=0,chem_total=0,math_total=0;
float phy_avg,chem_avg,math_avg,overall_avg;
printf("Enter the phy marks(assig,midt,cw,eot):\n");
for(int i=0;i<4;i++){
    scanf("%f",&phy[i]);
    }
printf("Enter the chem marks (assig,midt,cw,eot):\n");
for(int i=0;i<4;i++){
    scanf("%f",&chem[i]);
}
printf("Enter the math marks (assig,midt,cw,eot):\n");
for(int i=0;i<4;i++){
    scanf("%f",&math[i]);
}
for (int i=0;i<4;i++){
    phy_avg +=phy[i];
}
phy_avg /=4.0;

for (int i=0;i<4;i++){
    chem_avg +=chem[i];
}
chem_avg /=4.0;

for (int i=0;i<4;i++){
    math_avg +=math[i];
}
math_avg /=4.0;
overall_avg = (phy_avg+chem_avg+math_avg)/3.0;

printf("Physics Average:%.2f\n",phy_avg);
printf("Chemistry Average:%.2f\n",chem_avg);
printf("Mathematics Average:%.2f\n",math_avg);
printf("Overall Average:%.2f\n",overall_avg);

    return 0;
}
