#include <stdio.h>
#include <conio.h>

void main() 
{
    int n, r, rev=0,m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    m=n;
    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
       if(m==rev)
       {
        printf("palindrome");
       }
       else 
       {
        printf("not palindrome");
       }
}

