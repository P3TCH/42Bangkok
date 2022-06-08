#include <unistd.h>
#include <stdio.h>

int ft_check(int *input)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (input[i] == 4)
        {
            return (1);    
        }
        i++;
    }
    return (0);
}

void ft_split(char *str, int *output, int start)
{
    int i = 0;
    int j = 0;

    while (i < 4)
    {
        if(str[start] != ' ')
        {
            output[i] = str[start] - '0';
            i++;
        }
        start++;
    }
}

void ft_top(int *input, int output[4][4])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (input[i] == 4){
            output[0][i] = 1;
            output[1][i] = 2;
            output[2][i] = 3;
            output[3][i] = 4;
        }
        else if(input[i] == 3){
            output[0][i] = 1;
            output[1][i] = 3;
            output[2][i] = 4;
            output[3][i] = 1;
        }
    i++;
    }
}

void ft_top2(int *input, int output[4][4])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if(input[i] == 2){
            output[0][i] = 3;
            output[1][i] = 4;
            output[2][i] = 1;
            output[3][i] = 2;
        }
        else if(input[i] == 1){
            output[0][i] = 4;
            output[1][i] = 1;
            output[2][i] = 2;
            output[3][i] = 3;
        }
        i++;
    }
}

void ft_bottom(int *input, int output[4][4])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (input[i] == 4){
            output[0][i] = 4;
            output[1][i] = 3;
            output[2][i] = 2;
            output[3][i] = 1;
        }
        else if(input[i] == 3){
            output[0][i] = 1;
            output[1][i] = 4;
            output[2][i] = 3;
            output[3][i] = 2;
        }
    i++;
    }
}

void ft_bottom2(int *input, int output[4][4])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if(input[i] == 2){
            output[0][i] = 2;
            output[1][i] = 1;
            output[2][i] = 4;
            output[3][i] = 3;
        }
        else if(input[i] == 1){
            output[0][i] = 3;
            output[1][i] = 2;
            output[2][i] = 1;
            output[3][i] = 4;
        }
    i++;
    }
}

void ft_printint(int ans[4][4])
{
    int i;
    int j;
    char x;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            x = ans[i][j] + 48;
            write(1, &x, 1);
            write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}
int main(int argc, char **argv)
{
    int top[4];
    int bottom[4];
    int ans[4][4];

    ft_split(argv[1],top,0);
    ft_split(argv[1],bottom,7);
    if (ft_check(top) == 1)
    {
        ft_top(top,ans);
        ft_top2(top,ans);
    }
    else
    {   
        ft_bottom(bottom,ans);
        ft_bottom2(bottom,ans);
    }

    ft_printint(ans);
    // char x = ans[0][0] + 48;
    // write(1 , &x , 1);
    // write(1 , &ans[0][0] + 48, 1);
    
    // printf("\n\n");
    // for(int i = 0 ; i < 4 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         printf("%d ",ans[i][j]);
    //     }
    //     printf("\n");
    // }
}