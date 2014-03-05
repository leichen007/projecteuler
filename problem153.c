#include <stdlib.h>
#include <stdio.h>

int gcd(int a, int b) { 
		return b==0 ? a : gcd(b, a%b);
}

long long s(int n)
{
    long long sum=0;
    int i=0,a=0,b=0,j=0;
    
    for(i=1;i<=n;i++){
        sum+=(n/i)*i;
        //printf("%lld\n" ,sum);
        //getchar();
    }

	  for(a=1;a*a<n;a++){
		    for(b=1; b<=a; b++) {
				    if(gcd(a,b)==1){
				        int i=(a*a+b*b),val=(a==b)?(a+b):2*(a+b);
				        for(j=1;i*j<=n;j++) {
				            sum+=(j*val*(n/(i*j)));
                    //printf("--%lld\n" ,sum);
                    //getchar();				            
				        }
				    }
		    }
	  }
    return sum;
}

int main()
{
    printf("%lld\n" ,s(100000000));
    
    return 0;
}