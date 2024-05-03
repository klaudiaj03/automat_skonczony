#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void pink()
{
    printf("\033[1;35m");
}

void reset()
{
    printf("\033[0m");
}


void wykres()
{
    printf("\n");
    printf("            ----------1--------->\n");
    printf("-->( q0 )                             ( q1 )\n");
    printf("            <---------1---------\n"); 
    printf("     ^ |                               ^ |\n");
    printf("     | |                               | |\n");
    printf("     | |                               | |\n");
    printf("     0 0                               0 0\n");
    printf("     | |                               | |\n");
    printf("     | |                               | |\n");
    printf("     | v                               | v\n");
    printf("            -----------1-------->\n");
    printf("   ( q2 )                             ( q3 ) \n");
    printf("            <---------1---------- \n");

}

int q0(char cyfra[1500], int i)
{
    Sleep(3000);
    system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
    

    if (cyfra[i] == '0')
    {   printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^"); pink(); printf(" |"); reset(); printf("                               ^ | \n");
        printf("     |"); pink(); printf(" |"); reset(); printf("                               | |\n");
        printf("     |"); pink(); printf(" |"); reset(); printf("                               | |\n");
        printf("     0"); pink(); printf(" 0"); reset(); printf("                               0 0\n");
        printf("     |"); pink(); printf(" |"); reset(); printf("                               | |\n");
        printf("     |"); pink(); printf(" |"); reset(); printf("                               | |\n");
        printf("     |"); pink(); printf(" v"); reset(); printf("                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        pink();  printf("   ((q2))"); reset(); printf("                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        
        printf("\nAktualny stan automatu: q2\n");
        return 2;
    }
    else
    {
        printf("\n");
        pink(); printf("            ----------1--------->\n"); reset();
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             "); pink(); printf("((q1))\n"); reset();
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

       
        printf("\nAktualny stan automatu: q1\n");
        return 1;
    }

}

int q1(char cyfra[1500], int i)
{
    Sleep(3000);
    system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);

    if (cyfra[i] == '0')
    {
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^");  pink(); printf(" |\n"); reset(); 
        printf("     | |                               |");  pink(); printf(" |\n"); reset();
        printf("     | |                               |");  pink(); printf(" |\n"); reset();
        printf("     0 0                               0");  pink(); printf(" 0\n"); reset();
        printf("     | |                               |");  pink(); printf(" |\n"); reset();
        printf("     | |                               |");  pink(); printf(" |\n"); reset();
        printf("     | v                               |");  pink(); printf(" v\n"); reset();
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             "); pink(); printf("((q3)) \n"); reset();
        printf("            <---------1---------- \n");

       
        printf("\nAktualny stan automatu: q3\n");
        return 3;
    }
    else
    {
        printf("\n");
        printf("            ----------1--------->\n"); 
        printf("-->( q0 )                             ( q1 )\n");
        pink();  printf("            <---------1---------\n"); reset();
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        pink();  printf("-->((q0))"); reset(); printf("                             (q1)\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        
        printf("\nAktualny stan automatu: q0\n");
        return 0;
    }

}

int q2(char cyfra[1500], int i)
{
    Sleep(3000);
    system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);

    if (cyfra[i] == '0')
    {
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        pink(); printf("     ^"); reset(); printf(" |                               ^ |\n");
        pink(); printf("     |"); reset(); printf(" |                               | |\n");
        pink(); printf("     |"); reset(); printf(" |                               | |\n");
        pink(); printf("     0"); reset(); printf(" 0                               0 0\n");
        pink(); printf("     |"); reset(); printf(" |                               | |\n");
        pink(); printf("     |"); reset(); printf(" |                               | |\n");
        pink(); printf("     |"); reset(); printf(" v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        pink();  printf("-->((q0))"); reset(); printf("                             (q1)\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        
        printf("\nAktualny stan automatu: q0\n");
        return 0;
    }
    else
    {
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        pink(); printf("            -----------1-------->\n"); reset();
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             "); pink(); printf("((q3)) \n"); reset();
        printf("            <---------1---------- \n");

        
        printf("\nAktualny stan automatu: q3\n");
        return 3;
    }
}

int q3(char cyfra[1500], int i)
{
    Sleep(3000);
    system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);

    if (cyfra[i] == '0')
    {
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                              ");  pink(); printf(" ^"); reset(); printf(" | \n");
        printf("     | |                              ");  pink(); printf(" |"); reset(); printf(" |\n");
        printf("     | |                              ");  pink(); printf(" |"); reset(); printf(" |\n");
        printf("     0 0                              ");  pink(); printf(" 0"); reset(); printf(" 0\n");
        printf("     | |                              ");  pink(); printf(" |"); reset(); printf(" |\n");
        printf("     | |                              ");  pink(); printf(" |"); reset(); printf(" |\n");
        printf("     | v                              ");  pink(); printf(" |"); reset(); printf(" v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )"); pink();  printf("                             ((q1))\n"); reset();
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        printf("            <---------1---------- \n");

       
        printf("\nAktualny stan automatu: q1\n");
        return 1;
    }
    else
    {
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        printf("   ( q2 )                             ( q3 ) \n");
        pink();  printf("            <---------1---------- \n"); reset();

        Sleep(3000);
        system("cls"); printf("Automat skonczony.\nWprowadzone cyfry: %s\n\n", cyfra);
        printf("\n");
        printf("            ----------1--------->\n");
        printf("-->( q0 )                             ( q1 )\n");
        printf("            <---------1---------\n");
        printf("     ^ |                               ^ |\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     0 0                               0 0\n");
        printf("     | |                               | |\n");
        printf("     | |                               | |\n");
        printf("     | v                               | v\n");
        printf("            -----------1-------->\n");
        pink(); printf("   ((q2))"); reset(); printf("                             (q3) \n");
        printf("            <---------1---------- \n");
        
        printf("\nAktualny stan automatu: q2\n");
        return 2;
    }
}


int main()
{
    printf("Automat skonczony.\nStan poczatkowy automatu: q0\n");
    int i;
    int stan;
    char cyfra[1500];
    printf("Wprowadz cyfry {0,1} bez spacji: ");
    fgets(cyfra, 1500, stdin);
    printf("Wprowadzone cyfry: %s\n", cyfra);
    int n = sizeof(cyfra) / sizeof(cyfra[0]);
     

    for (i = 0; i < n; i++)
    {
        if (cyfra[i] != '0' && cyfra[i] != '1')
        {
            if (cyfra[i] == '\n' || cyfra[i] == '\0' || cyfra[i] == ' ') {
                n = i;
            }
            else {
                fprintf(stderr, "Cyfry inne niz 0 lub 1\n");
                system("pause");
                return EXIT_FAILURE;
            }
        }
    }
   
    stan = 0;


    printf("            ----------1--------->\n");
    pink(); printf("-->((q0))"); reset(); printf("                            ( q1 )\n");
    printf("            <---------1---------\n");
    printf("     ^ |                              ^ |\n");
    printf("     | |                              | |\n");
    printf("     | |                              | |\n");
    printf("     0 0                              0 0\n");
    printf("     | |                              | |\n");
    printf("     | |                              | |\n");
    printf("     | v                              | v\n");
    printf("            -----------1-------->\n");
    printf("   ( q2 )                            ( q3 ) \n");
    printf("            <---------1---------- \n");

    printf("\nAktualny stan automatu: q0\n");
    


    for (i = 0; i < n; i++)
    {
        if (stan == 0)
        {
            stan = q0(cyfra, i);
        }
        else if (stan == 1)
        {
            stan = q1(cyfra, i);
        }
        else if (stan == 2)
        {
            stan = q2(cyfra, i);
        }
        else if (stan == 3)
        {
            stan = q3(cyfra, i);
        }
    }


    

   

    if (stan == 0)
    {
        printf("\nCiag zostal zaakceptowany\n");
    }
    else
    {
        printf("\nCiag nie zostal zaakceptowany\n");
    }

    return EXIT_SUCCESS;

}
