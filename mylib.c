
#include<stdio.h>
//Check if Number is an Armstrong.
  int arms(int n){
    int sum=0; int temp =n;

    while(temp!=0){
        int d = temp%10;
        sum += d*d*d;
        temp = temp/10;
    }
    return sum ==n;
  }
  int main(){
    int n;
    printf("Enter 3 digit number : ");
    scanf("%d",&n);
      if (arms(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

//Check if its adams number or not.
 #include<stdio.h>
 int reverse(){
    int n;
   while(n!=0){
     n = n*10+n%10;
    n = n/10;
   }
    return n;
 }
 int main(){
  int no,sq,n,sqreversed;
  printf("Enter the Number : ");
  scanf("%d",&no);

  sq = no*no;
  n = reverse(no);
  sqreversed = n*n;

if(sq==reverse(sqreversed)){
    printf("It is an Adams Number\n",no);
}
else{
    printf("It is not Adams Number\n",no);
}

//Check if Number is Palindrome and Prime both.

 #include<stdio.h>
int palin(int n){
    int rev=0,number=n;
    while(n!=0){
        rev = rev*10+(n%10);
        n = n/10;
    }
    return(rev==number);
}
int prime(int n){
    for(int i =2;i<=n/2;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter the Number");
    scanf("%d",&num);

    if(palin(n) && prime(n)){
              printf("%d is both Palindrome and Prime.\n", num);
    }
     else{
        printf("%d is not both Palindrome and Prime.\n", num);
     }
    return 0;
}





  
}
 }
