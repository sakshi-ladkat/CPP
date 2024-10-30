// Write a C program to accept n numbers and store all prime numbers in an array called prime.Display this Array 


int main() {
   int n,i,a[100],prime[100],flag=0,j;
printf("Enter Number of Elements");
scanf("%d",&n)

for(i=0;i<n;i++)
{
    printf("Enter Number");
    scanf("\t%d\t",&a[i])
}
for(i=0;i<n;i++)
{
if (a[i] == 0 || a[i] == 1)
    {flag = 1;}
else {
  for (j = 2; j < n; i++) 
  {

    if (n % j == 0) 
    {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    scanf("%d",&prime[i]);
}
}
for(i=0;i<n;i++)
{

    printf("%d",prime[i])
  
  
}

}





