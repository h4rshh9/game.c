#include<stdio.h>

// int sum (int a, int b);
void h();
// void t();

int main(){
int sum=0;
printf("welcome to my game\n"); 
printf("Rule: 1.you raise minimum 1 token and maximum 3 a time\n");
printf("\n");

int token;
h();
char l2;
scanf("%d", &token);

switch (token)
{
case 1:
    sum = 10 - token;
    printf("left token is: %d\n", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
    
    printf("your turn :");
    scanf("%d", &token);

    switch (token)
    {
    case 1:
    sum = 8 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 2\n");
    printf("token left is: %d\n", sum-2);
        break;

    case 2:
    sum = 8 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
        break;

    case 3:
    sum = 8 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
        break;

    default:
        break;
    }


    printf("your turn :");
    scanf("%d", &token);

    if (token==1){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    // printf("\n");
    // printf("you turn: "); 
    // scanf("%d", &token);

    printf("YOU LOSE\n");
    }

    else if (token==2)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token==3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    printf("congratulations\n");
    printf("YOU WIN\n");
    }
    
    printf("You play second level.\n \tpress Y to yes and N to exit game : ");
    scanf(" %c", &l2);

    if(l2=='Y' ||  l2=='y'){
        int sum=0;
printf("\n");
printf("\t\twelcome to my game Level 2\n"); 
printf("\n");
printf("There are total 13 tokens and whoever collects the last token will lose.\n");
printf("Rule: You raise minimum 1 token and maximum 3 a time\n");
printf("\n");

int token;
h();
scanf("%d", &token);

switch (token)
{
case 1:
    sum = 13 - token;
    printf("left token is: %d\n", sum);
    printf(" i  pic token: 3\n");
    printf("token left is: %d\n", sum-3);
    
    printf("your turn :");
    scanf("%d", &token);

    switch (token)
    {
    case 1:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 3\n");
    printf("token left is: %d\n", sum-3);
        break;

    case 2:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 2\n");
    printf("token left is: %d\n", sum-2);
        break;

    case 3:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
        break;

    default:
        break;
    }


    printf("your turn :");
    scanf("%d", &token);

    if (token==1){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    // printf("\n");
    // printf("you turn: "); 
    // scanf("%d", &token);

    printf("YOU LOSE\n");
    }

    else if (token==2)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token==3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    printf("\n");
    printf("YOU LOSE\n");
    }
    break;


case 2:
    sum = 13 - token;
    printf("left token is: %d\n", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    
    printf("your turn :");
    scanf("%d", &token);

    
    switch (token)
    {
    case 1:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 3\n");
    printf("token left is: %d\n", sum-3);
        break;

    case 2:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 2\n");
    printf("token left is: %d\n", sum-2);
        break;

    case 3:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
        break;

    default:
        break;
    }


    printf("your turn :");
    scanf("%d", &token);

    if (token==1){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    // printf("\n");
    // printf("you turn: "); 
    // scanf("%d", &token);

    printf("YOU LOSE\n");
    }

    else if (token==2)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token==3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    printf("\n");
    printf("YOU LOSE\n");
    }
    break;



case 3:
    sum = 13 - token;
    printf("left token is: %d\n", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    
    printf("your turn :");
    scanf("%d", &token);

    
    switch (token)
    {
    case 1:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 3\n");
    printf("token left is: %d\n", sum-3);
        break;

    case 2:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 2\n");
    printf("token left is: %d\n", sum-2);
        break;

    case 3:
    sum = 9 - token;
    printf("left token is: %d\n ", sum);
    printf(" i  pic token: 1\n");
    printf("token left is: %d\n", sum-1);
        break;

    default:
        break;
    }


    printf("your turn :");
    scanf("%d", &token);

    if (token==1){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    // printf("\n");
    // printf("you turn: "); 
    // scanf("%d", &token);

    printf("YOU LOSE\n");
    }

    else if (token==2)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token==3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    printf("\n");
    printf("YOU LOSE\n");
    }
    break;

default:   
printf("error you choice 1-3");
    break;
}

    }
    else{
        printf("\t\texit");
    }
        break;



case 2:
    sum = 10 - token;
    printf("left token is: %d\n", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    
    printf("your turn :");
    scanf("%d", &token);

    switch (token)
    {
    case 1:
    sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
        break;

    default:
        break;
    }

    // printf("your turn :");
    // scanf("%d", &token);

    if (token<2){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token is left: %d\n", sum-3);
    // printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token<3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    printf("token is left: %d\n", sum-2);
    // printf("\n");
    printf("YOU LOSE\n");
    }

    else if (token<4) 
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    printf("token left is: %d\n", sum-1);
    printf("\n");
    printf("YOU LOSE\n");
    }
    break;


case 3:
    sum = 10 - token;
    printf("left token is: %d\n", sum);
    printf(" i pic  token: 2\n");
    printf("token left is: %d\n", sum-2);
    
    printf("your turn :");
    scanf("%d", &token);

    // switch (token)
    // {
    // case 1:
    // sum = 5 - token;
    // printf("left token is: %d\n ", sum);
    // printf(" i pic  token: 3\n");
    // printf("token left is: %d\n", sum-3);
    //     break;

    // default:
    //     break;
    // }

    // printf("your turn :");
    // scanf("%d", &token);

    if (token<2){
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 3\n");
    printf("token left is: %d\n", sum-3);
    printf("YOU LOSE\n");
    }

    else if (token<3)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 2\n");
    
    printf("token left is: %d\n", sum-2);
    printf("YOU LOSE\n");
    }

    else if (token<4)
    {
        sum = 5 - token;
    printf("left token is: %d\n ", sum);
    printf(" i pic  token: 1\n");
    // printf("\n");
     printf("token left is: %d\n", sum-1);
    printf("YOU LOSE\n");
    }
    break;

default:   
printf("error you choice 1-3");
    break;
}




return 0;
}

void h(){
    printf("pic your token : ");
}

