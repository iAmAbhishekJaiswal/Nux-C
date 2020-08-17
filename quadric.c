void quadric()
{
double a,b,c,root1,root2,discriminant,realpart,imagpart;
printf("Enter co-eficient of x² : ");
scanf("%lf",&a);
printf("Enter co-efficient of x : ");
scanf("%lf",&b);
printf("Enter last co-efficient : ");
scanf("%lf", &c);                                                                printf("\n\n      %.0fx²+%.0fx+%.0f\n\n",a,b,c);
discriminant=b*b-4*a*c;                                                          if(discriminant>0)
{
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("\n\nFirst root : %.2lf ",root1);
printf("\nSecond root : %.2lf\n\n",root2);
}
else if(discriminant==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("\n\nFirst root : %.2lf ",root1);
printf("\nSecond root : %.2lf\n\n",root2);
}
else
{
realpart= -b / (2 * a);
        imagpart= sqrt(-discriminant) / (2 * a);

printf("\n\nFirst root : %.2f+%.2fi",realpart,imagpart);
printf("\nSecond root : %.2f-%.2fi\n\n",realpart,imagpart);
}
getchar();

}
