void main()
{
    int x,y,a,c,d,b;
    printf("Enter a Numbers:");
    scanf("%d",&x);
    a=x%10;
    y=x/10;
    b=y%10;
    c=y/10;
    d=(a*a*a)+(b*b*b)+(c*c*c);
    if (d==x)
    {
        printf("It is Armstrong");
    }
    else
    {
        printf("It is not Armstrong");
    }
getch();
}
