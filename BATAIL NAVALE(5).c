#include<stdio.h>
#include<conio.h>
#include<time.h>

int score;
int myscore;
void main()
{
    int grille[6][6];
    int i=90, x, y, bateau=0, m, posi,s=0,hits=10,joueur,x1,y1;
    char joueur1[15], joueur2[15];

            for(y=0;y<=5;y++){
                for(x=0;x<=5;x++){
                    grille[x][y]=0;
                }
            }

    gotoxy(20,1);printf("------------------------------------------------------------------");
    gotoxy(20,2);printf("|                                                                |");
    gotoxy(20,3);printf("|                                                                |");
    gotoxy(20,4);printf("|                                                                |");
    gotoxy(20,5);printf("------------------------------------------------------------------");
    gotoxy(30,2);printf("player1\n");
    gotoxy(60,2);printf("player2\n");

    fflush(stdin);
    gotoxy(30,3);gets(joueur1);
    fflush(stdin);
    gotoxy(60,3);gets(joueur2);

    printf("\n\nplayer1 donner les cases de votre bateau\n");
    textcolor(4);cprintf("choisir trois cases horizontal ou vartical ou diagonal");
        x=y=0;
    joueur=1;


     gotoxy(20,9);printf("⁄ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒø");
    gotoxy(20,10);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,11);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
    gotoxy(20,12);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,13);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
    gotoxy(20,14);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,15);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
    gotoxy(20,16);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,17);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
    gotoxy(20,18);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,19);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
    gotoxy(20,20);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
    gotoxy(20,21);printf("¿ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒŸ");

    do{
    if (joueur==1){
                gotoxy(x*4+22,y*2+10);
                posi=getch();
                switch (posi){
                    case 72 : if(y>0)y--;break;//up
                    case 80 : if(y<5)y++;break;//down
                    case 77 : if(x<5)x++;break;//right
                    case 75 : if(x>0)x--;break;//left
                    case 13 : if(grille[x][y]==0){ gotoxy(x*4+21,y*2+10);textcolor(1);cprintf("€€€");bateau++;grille[x][y]=1; }
                                else {break;}break;//entre
               }
        }
    }while (bateau!=6);


    gotoxy(1,23);printf("vous aver poser votre bateau");
    sleep(2);
    clrscr();


    gotoxy(20,1);printf("------------------------------------------------------------------");
    gotoxy(20,2);printf("|                                                                |");
    gotoxy(20,3);printf("|                                                                |");
    gotoxy(20,4);printf("|                                                                |");
    gotoxy(20,5);printf("------------------------------------------------------------------");

            gotoxy(30,3);puts(joueur1);
            gotoxy(60,3);puts(joueur2);
         gotoxy(20,9);printf("⁄ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒ¬ƒƒƒø");
        gotoxy(20,10);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,11);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
        gotoxy(20,12);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,13);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
        gotoxy(20,14);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,15);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
        gotoxy(20,16);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,17);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
        gotoxy(20,18);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,19);printf("√ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ≈ƒƒƒ¥");
        gotoxy(20,20);printf("≥   ≥   ≥   ≥   ≥   ≥   ≥");
        gotoxy(20,21);printf("¿ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒ¡ƒƒƒŸ");
        gotoxy(80,10);printf("         ");


        x=y=0;
        do{

                gotoxy(x*4+22,y*2+10);
                posi=getch();
                switch (posi){
                    case 72 : if(y>0)y--;break;//up
                    case 80 : if(y<5)y++;break;//down
                    case 77 : if(x<5)x++;break;//right
                    case 75 : if(x>0)x--;break;//left
                    case 13 : hits--;if(grille[x][y]==1){gotoxy(x*4+21,y*2+10);textcolor(2);cprintf("€€€");myscore++; grille[x][y]=0;bateau--;}
                               else if(grille[x][y]==0){gotoxy(x*4+21,y*2+10);textcolor(4);cprintf("€€€");gotoxy(i,10);textcolor(0);cprintf("€");i=i-2;};break;//entre

               }


    }while (hits!=0 && bateau!=0);

             for (x=0;x<=5;x++){
                for(y=0;y<=5;y++){
                    s = s + grille[x][y];
                }
            }
      clrscr();
            if(s==0){
                textcolor(3);cprintf("%s a gagner",joueur2);
            }
            else{
                textcolor(3);cprintf("%s a gagner",joueur1);
            }






}


