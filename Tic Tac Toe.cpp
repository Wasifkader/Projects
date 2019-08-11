#include<bits/stdc++.h>
using namespace std;

#define LL           long long
#define ULL          long long unsigned
#define LD           long double
#define ff              first
#define ss              second
#define FOR(i,n)     for(int i=0;i<n;i++)
#define FLR(i,n)     for(LL i=0;i<n;i++)
#define RFOR(i,n)    for(int i=n-1;i>=0;i--)
#define RFLR(i,n)    for(LL i=n-1;i>=0;i--)
#define rep(i,a,b)   for(int i=a;i<=b;i++)
#define repl(i,a,b)  for(LL i=a;i<=b;i++)
#define fast         ios_base::sync_with_stdio(0);cin.tie(0);
#define all(a)       a.begin(),a.end()
#define ABS(x)       ((x)<0?-(x):(x))
#define NL           "\n"
#define pb           push_back
#define mk              make_pair
#define pi           acos(-1.0)
#define prec(n)      fixed << setprecision(n)
int main()
{
    fast;
    int i,j,k,x,y,z,bal;
    char ara[10],c;
    FOR(i,10)
    {
        ara[i]=' ';
    }
    ara[7]='X';
    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
    //cout<<"";
    //cout<<"\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n";
    cin>>x;
    y=x;
    system("cls");
    ara[x]='O';
    if(x!=5)
    {

        if(x==2||x==4||x==6||x==8)
        {
            ara[5]='X';
            printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
            cin>>x;
            z=x;
            system("cls");
            ara[x]='O';
            if(x!=3)
            {
                ara[3]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                //cout<<"\nI WON!!!\n";
                scanf("%d",&j);
            }
            else if(y==4||y==6)
            {
                ara[9]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                system("cls");
                ara[x]='O';
                if(x==1)
                {
                    ara[8]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                }
                else
                {
                    ara[1]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON !!!\n";
                    scanf("%d",&j);
                }
            }
            else if(y==2||y==8)
            {
                ara[1]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                system("cls");
                ara[x]='O';
                if(x==9)
                {
                    ara[4]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                }
                else
                {
                    ara[9]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON !!!\n";
                    scanf("%d",&j);
                }

            }
        }
        else
        {
            if(x==1||x==3)
            {
                ara[9]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                z=x;
                system("cls");
                ara[x]='O';
                if(x!=8)
                {
                    ara[8]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                }
                else
                {
                    if(y==1)
                    {
                        ara[3]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        cin>>x;
                        z=x;
                        system("cls");
                        ara[x]='O';
                        if(x==6)
                        {
                            ara[5]='X';
                            printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //    cout<<"\nI WON!!!\n";
                            scanf("%d",&j);
                        }
                        else
                        {
                            ara[6]='X';
                            printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                          //  cout<<"\nI WON!!!\n";
                            scanf("%d",&j);
                        }
                    }
                }
            }
            else
            {
                ara[1]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                z=x;
                system("cls");
                ara[x]='O';
                if(x!=4)
                {
                    ara[4]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                }
                else
                {
                    ara[3]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    cin>>x;
                    z=x;
                    system("cls");
                    ara[x]='O';
                    if(x!=5)
                    {
                        ara[5]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                      //  cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                    }
                    else if(x==2)
                    {
                        ara[5]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                    }
                    else
                    {
                        ara[2]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                    }
                }
            }
        }
    }
    else
    {
        ara[3]='X';
        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
        cin>>x;
        z=x;
        system("cls");
        ara[x]='O';
        if(x==2||x==4||x==6||x==8)
        {
            //extend from here
            if(x==2)
            {
                ara[8]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                bal=x;
                system("cls");
                ara[x]='O';
                if(x!=9)
                {
                    ara[9]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                    return 0;
                }
                else
                {
                    ara[1]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    cin>>x;
                    bal=x;
                    system("cls");
                    ara[x]='O';
                    if(x!=4)
                    {
                        ara[4]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                      //  cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                    else
                    {
                        ara[6]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nDRAW :/!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nDRAW :/!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                }
            }
            else if(x==6)
            {
                ara[4]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                bal=x;
                system("cls");
                ara[x]='O';
                if(x!=1)
                {
                    ara[1]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                    return 0;
                }
                else
                {
                    ara[9]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    cin>>x;
                    bal=x;
                    system("cls");
                    ara[x]='O';
                    if(x!=8)
                    {
                        ara[8]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                      //  cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                    else
                    {
                        ara[2]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nDRAW :/!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nDRAW :/!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                }
            }
            else if(x==8)
            {
                ara[2]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                bal=x;
                system("cls");
                ara[x]='O';
                if(x!=1)
                {
                    ara[1]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                    return 0;
                }
                else
                {
                    ara[9]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    cin>>x;
                    bal=x;
                    system("cls");
                    ara[x]='O';
                    if(x!=6)
                    {
                        ara[6]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                      //  cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                    else
                    {
                        ara[4]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nDRAW :/!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nDRAW :/!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                }
            }
            else if(x==4)
            {
                ara[6]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                cin>>x;
                bal=x;
                system("cls");
                ara[x]='O';
                if(x!=9)
                {
                    ara[9]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    //cout<<"\nI WON!!!\n";
                    scanf("%d",&j);
                    return 0;
                }
                else
                {
                    ara[1]='X';
                    printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                    cin>>x;
                    bal=x;
                    system("cls");
                    ara[x]='O';
                    if(x!=2)
                    {
                        ara[2]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nI WON!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                    else
                    {
                        ara[8]='X';
                        printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nDRAW :/!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                        //cout<<"\nDRAW :/!!!\n";
                        scanf("%d",&j);
                        return 0;
                    }
                }
                //extend to here
            }
        }
        if(x==1)
        {
            ara[9]='X';
            printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
            cin>>x;
            z=x;
            system("cls");
            ara[x]='O';
            if(x==6)
            {
                ara[8]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                //cout<<"\nI WON!!!\n";
                scanf("%d",&j);
            }
            else
            {
                ara[6]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                //cout<<"\nI WON!!!\n";
                scanf("%d",&j);
                return 0;
            }
        }
        if(x==9)
        {
            ara[1]='X';
            printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \nChoose any option\n\n 1 | 2 | 3 \n __  __ __ \n 4 | 5 | 6 \n __  __ __ \n 7 | 8 | 9 \n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
            cin>>x;
            z=x;
            system("cls");
            ara[x]='O';
            if(x==2)
            {
                ara[4]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
                //cout<<"\nI WON!!!\n";
                scanf("%d",&j);
            }
            else
            {
                ara[2]='X';
                printf("\n %c | %c | %c \n __  __ __ \n %c | %c | %c \n __  __ __ \n %c | %c | %c \n\nI WON!!!\n",ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
               // cout<<"\nI WON!!!\n";
                scanf("%d",&j);
            }
        }
    }

}

