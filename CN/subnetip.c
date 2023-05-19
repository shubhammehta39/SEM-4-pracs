//subnet ip
#include<stdio.h>
void main(){
    int i;
    int ip[4];
    int subadd[4];
    printf("Enter the ip address :");
    for(i=0;i<4;i++)
    {
        scanf("%d",&ip[i]);
        subadd[i]=ip[i];
    }
    printf("The ip address is :");
    for(i=0;i<3;i++)
    {
       printf("%d.",ip[i]);
    }
    printf("%d",ip[3]);
    //0 128 192 224 240
    if(ip[0]>=0 && ip[0]<=127)
    {
        printf("\nIts in class A");
        printf("\nSubnet mask : 255.0.0.0");
        subadd[1]=0;
        subadd[2]=0;
        subadd[3]=0;
        printf("\nThe subnet address is :");
    for(i=0;i<3;i++)
    {
       printf("%d.",subadd[i]);
    }
    printf("%d",subadd[3]);
        
    }
    else if(ip[0]>=128 && ip[0]<=191)
    {
       printf("\nIts in class B");
        printf("\nSubnet mask : 255.255.0.0");
        //subadd[1]=0;
        subadd[2]=0;
        subadd[3]=0;
          printf("\nThe subnet address is :");
    for(i=0;i<3;i++)
    {
       printf("%d.",subadd[i]);
    }
    printf("%d",subadd[3]);
    }
    else if(ip[0]>=192 && ip[0]<=223)
    {
        printf("\nIts in class C");
        printf("\nSubnet mask : 255.255.255.0");
      //  subadd[1]=0;
       // subadd[2]=0;
        subadd[3]=0;
          printf("\nThe subnet address is :");
    for(i=0;i<3;i++)
    {
       printf("%d.",subadd[i]);
    }
    printf("%d",subadd[3]);
    }
    else if(ip[0]>=224 && ip[0]<=239)
    {
        printf("\nIts in class D used for multicast\n Subnet mask is not defined");
        
    }
    else if(ip[0]>=240 && ip[0]<=255)
    {
        printf("Its in class E, it is reserved\n Subnet mask is not defined");
    }
    else
    {
        printf("invalid");
    }
    
}   