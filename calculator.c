#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//first function which gave us menu to select
int k=0, result =0;
int menu()
{
    int s;
printf("\n 1.add");
printf("\n 2.sub");
printf("\n 3.div");
printf("\n 4.multi");
printf("\n 5.get Remainder");
printf("\n 6.clear");
printf("\n 7.exit");
printf("\n enter your choice");
scanf("%d",&s);
return(s);

}
// perform addition
void add(){
int a,b;

    if(k){
            printf("\n enter a number");
            scanf("%d",&a);
    result+=a;
    printf("\nresult=%d",result);
    }
    else{
            printf("\n enter two number:");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("\n result=%d",result);

    }

}

// perform substraction
void sub(){
int a,b;

    if(k){
            printf("\n enter a number");
            scanf("%d",&a);
    result-=a;
    printf("\nresult=%d",result);
    }
    else{
            printf("\n enter two number:");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("\n result=%d",result);

    }

}
//perform division 
void divi(){
int a,b;

    if(k){
            printf("\n enter a number");
            scanf("%d",&a);
            result/=a;
            printf("\nresult=%d",result);
         }
    else{
            printf("\n enter two number:");
            scanf("%d%d",&a,&b);
            result=a/b;
            printf("\n result=%d",result);

       }
}
//perform multiplication
void multi(){
int a,b;

    if(k){
            printf("\n enter a number");
            scanf("%d",&a);
    result*=a;
    printf("\nresult=%d",result);
    }
    else{
            printf("\n enter two number:");
    scanf("%d%d",&a,&b);
    result=a*b;
    printf("\n result=%d",result);

    }

}

//to find remainder
void rim(){
int a,b;

    if(k){
            printf("\n enter a number");
            scanf("%d",&a);
    result%=a;
    printf("\n result=%d",result);
    }
    else{
            printf("\n enter two number:");
    scanf("%d%d",&a,&b);
    result=a%b;
    printf("\n result=%d",result);

    }

}
// clear previous result 
void clear(){                                           
    printf("\n old data clear");     
    result=0;
    k=0;
}

void main(){
while(1)                            
{
system("cls");
printf("\n old result=%d",result);
    switch(menu())
    {
        case 1:
            add();
            k=1;
            break;

        case 2:
            sub();
            k=1;
            break;
        case 3:
            divi();
            k=1;
            break;

        case 4:
            multi();
            k=1;
            break;
        case 5:
            rim();

            break;
        case 6:
            clear();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\n invalid choice");

    }
    system("pause");
  }
}
