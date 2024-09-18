#include<conio.h>
#include<string.h>
#include<stdio.h>

void main()
{
	char ch = 240;
	char menu[11][11] = {{ch},"File","Edit","Search","Run","Compile","Debug","Project","Options","Window","Help"};
	char fmenu[9][12] = {"New","Update","Save","Save As","Save all","Change dir","Print","Dos shell","Quit"};

	int i,c,r;
	window(1,1,80,1); /* TOP WINDOW */
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();

	/* PRINTING ELEMENTS IN THE TOP WINDOW */
	c=2;
	for(i=0;i<11;i++)
	{
		gotoxy(c,1);
		textcolor(BLACK);
		cprintf("%s",menu[i]);
		c = c + strlen(menu[i]) + 2;
	}
	c=2;
	for(i=0;i<11;i++)
	{
		gotoxy(c,1);
		textcolor(RED);
		cprintf("%c",menu[i][0]);
		textcolor(BLACK);
		c = c + strlen(menu[i]) + 2;
	}

	/*slideshow */

	i=0;
	c=2;
	do
	{

		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(c,1);
		cprintf("%s",menu[i]);
		gotoxy(c,1);
		textcolor(RED);
		cprintf("%c",menu[i][0]);
		textcolor(BLACK);



		ch=getch();
		if(ch==0)
		{
			ch=getch();
		}
		if(ch==77||ch==75)
		{
			if(ch==77)
			{
				textbackground(WHITE);
				textcolor(BLACK);
				gotoxy(c,1);
				cprintf("%s",menu[i]);
				gotoxy(c,1);
				textcolor(RED);
				cprintf("%c",menu[i][0]);
				textcolor(BLACK);

				c = c + strlen(menu[i]) + 2;
				i++;
				if(i>10)
				{
					i=0;
					c=2;
				}
			}

			if(ch==75)
			{
				textbackground(WHITE);
				textcolor(BLACK);
				gotoxy(c,1);
				cprintf("%s",menu[i]);
				gotoxy(c,1);
				textcolor(RED);
				cprintf("%c",menu[i][0]);
				textcolor(BLACK);

				i--;
				if(i<0)
				{
					i=10;
					c=78;
				}
				c = c - strlen(menu[i]) - 2;
			}
		}

		if(ch==33)   /* for file window */
		{
			window(4,2,23,14);
			textbackground(WHITE);
			textcolor(BLACK);
			clrscr();

			for(i=2;i<19;i++)
			{
				gotoxy(i,1);
				putch(196);       /* for horizontal line */
				gotoxy(i,13);
				putch(196);
			}

			for(i=2;i<19;i++)
			{
				gotoxy(i,7);
				putch(196);       /* horizontal line
							in between */
				gotoxy(i,11);
				putch(196);
			}


			for(i=2;i<13;i++)
			{
				gotoxy(2,i);
				putch(179);       /* for vertical line */
				gotoxy(19,i);
				putch(179);
			}

			gotoxy(2,1);
			putch(218);    /* for top corners */
			gotoxy(19,1);
			putch(191);

			gotoxy(2,13);
			putch(192);     /* for bottom corners */
			gotoxy(19,13);
			putch(217);

			gotoxy(2,7);
			putch(195);   /* middle corner 1 */
			gotoxy(19,7);
			putch(180);

			gotoxy(2,11);
			putch(195);    /* middle corner 2 */
			gotoxy(19,11);
			putch(180);



			/* for menu print */
			r=2;
			for(i=0;i<9;i++)
			{
				if(i==5 || i==8)
				{
				      r=r+1;
				}

					textbackground(WHITE);
					textcolor(BLACK);
					gotoxy(4,r);
					cprintf("%s",fmenu[i]);
					gotoxy(4,r);
					textcolor(RED);
					cprintf("%c",fmenu[i][0]);
					textcolor(BLACK);
					r++;
			}


			i=0;
			r=2;
			do
			{
				textbackground(GREEN);
				textcolor(BLACK);
				gotoxy(4,r);
				cprintf("%s",fmenu[i]);
				gotoxy(4,r);
				textcolor(RED);
				cprintf("%c",fmenu[i][0]);
				textcolor(BLACK);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
				}
				if(ch==80 || ch==72)
				{
					if(ch==80)   /* for down arraow  */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",fmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",fmenu[i][0]);
						textcolor(BLACK);
						r++;
						i++;

						if(i>8)
						{
							i=0;
							r=2;
						}
						if(i==5)
						{
							r++;
							r--;						      r=r+1;
						}
						if(i==8)
						{
							r=r+1;
						}

					}

					if(ch==72)   /* for up arraow */
					{
						textbackground(WHITE);
						textcolor(BLACK);
						gotoxy(4,r);
						cprintf("%s",fmenu[i]);
						gotoxy(4,r);
						textcolor(RED);
						cprintf("%c",fmenu[i][0]);
						textcolor(BLACK);
						i--;
						if(i<0)
						{
							i=8;
							r=13;
						}
						r--;
						if(r==11||r==7)
						{
							r=r-1;
						}

					}

				}

			}while(ch!=27);
		}

	}while(ch!=27);




	window(1,2,80,24);  /* MIDDLE WINDOW */
	textbackground(BLUE);
	textcolor(WHITE);
	clrscr();

	for(i=3;i<=78;i++)
	{
	    gotoxy(i,1);
	    putch(205);
	    gotoxy(i,23);
	    putch(205);
	}

	for(i=2;i<23;i++)
	{
	    gotoxy(2,i);
	    putch(186);
	    gotoxy(79,i);
	    putch(186);
	}



	gotoxy(2,1);
	putch(201);
	gotoxy(79,1);
	putch(187);

	gotoxy(2,23);
	putch(200);
	gotoxy(79,23);
	putch(188);






	window(1,25,80,25); /* BOTTOM WINDOW */
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();

	gotoxy(2,1); /* 1 */
	textcolor(RED);
	cprintf("F1");

	gotoxy(5,1);
	textcolor(BLACK);
	cprintf("Help");


	gotoxy(11,1); /* 2 */
	textcolor(RED);
	cprintf("ALT-F8");

	gotoxy(18,1);
	textcolor(BLACK);
	cprintf("Next Msg");

	gotoxy(28,1); /* 3 */
	textcolor(RED);
	cprintf("Alt-F7");

	gotoxy(35,1);
	textcolor(BLACK);
	cprintf("Prev Msg");

	gotoxy(45,1); /* 4 */
	textcolor(RED);
	cprintf("Alt-F9");

	gotoxy(52,1);
	textcolor(BLACK);
	cprintf("Compile");

	gotoxy(61,1); /* 5 */
	textcolor(RED);
	cprintf("F9");

	gotoxy(64,1);
	textcolor(BLACK);
	cprintf("Make");

	gotoxy(70,1); /* 6 */
	textcolor(RED);
	cprintf("F10");

	gotoxy(74,1);
	textcolor(BLACK);
	cprintf("Menu");

}