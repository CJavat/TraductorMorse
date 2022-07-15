#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <String.h>
#include <ctype.h>
#include <windows.h>
using namespace std;
/*
	* PROGRAMA QUE TRADUCE UNA FRASE A MORSE. CADA PUNTO O GUIÓN DEBE PITAR E IR CAMBIANDO DE COLOR AL SONAR.
	* IMPRIMIR EL ABECEDARIO Y SU CLAVE MORSE COMO REFERENCIA.
	* ENTREGAR: 24/OCTUBRE/2018.
*/

//Beep(750,800); PARA " - "
//Beep(750,300); PARA " . "

void gotoxy(int,int);//Funcion Gotoxy.

main() 
{
	
	char letra,FraseMorse[100]; int longitud_cadena=0; string frase=" ";
	string a=".-",b="-...",c="-.-.",d="-..",e=".",f="..-.",g="--.",h="....",i="..",j=".---",k="-.-",l=".-..",m="--",n="-.",o="---",p=".--.";
	string q="--.-",r=".-.",s="...",t="-",u="..-",v="...-",w=".--",x="-..-",y="-.--",z="--..";
	string n1=".----",n2=".---",n3="...--",n4="....-",n5=".....",n6="-....",n7="--...",n8="---..",n9="----.",n0="-----", esp="......";
	*FraseMorse='\0';//Pongo el arreglo en nulo;
	
	gotoxy(0,11);cout<<"---------------------------------------------------------ABECEDARIO-----------------------------------------------------\n";
	gotoxy(1,13);cout<<"A: "<<a;gotoxy(12,13);cout<<"B: "<<b;gotoxy(23,13);cout<<"C: "<<c;gotoxy(34,13);cout<<"D: "<<d;gotoxy(45,13);cout<<"E: "<<e;
	gotoxy(56,13);cout<<"F: "<<f;gotoxy(67,13);cout<<"G: "<<g;gotoxy(78,13);cout<<"H: "<<h;gotoxy(89,13);cout<<"I: "<<i;gotoxy(100,13);cout<<"J: "<<j;
	
	gotoxy(1,14);cout<<"K: "<<k;gotoxy(12,14);cout<<"L: "<<l;gotoxy(23,14);cout<<"M: "<<m;gotoxy(34,14);cout<<"N: "<<n;gotoxy(45,14);cout<<"O: "<<o;
	gotoxy(56,14);cout<<"P: "<<p;gotoxy(67,14);cout<<"Q: "<<q;gotoxy(78,14);cout<<"R: "<<r;gotoxy(89,14);cout<<"S: "<<s;gotoxy(100,14);cout<<"T: "<<t;
	
	gotoxy(1,15);cout<<"U: "<<u;gotoxy(12,15);cout<<"V: "<<v;gotoxy(23,15);cout<<"W: "<<w;gotoxy(34,15);cout<<"X: "<<x;gotoxy(45,15);cout<<"Y: "<<y;
	gotoxy(56,15);cout<<"Z: "<<z;gotoxy(67,15);cout<<"1: "<<n1;gotoxy(78,15);cout<<"2: "<<n2;gotoxy(89,15);cout<<"3: "<<n3;gotoxy(100,15);cout<<"4: "<<n4;
	
	gotoxy(1,16);cout<<"5: "<<n5;gotoxy(12,16);cout<<"6: "<<n6;gotoxy(23,16);cout<<"7: "<<n7;gotoxy(34,16);cout<<"8: "<<n8;gotoxy(45,16);cout<<"9: "<<n9;
	gotoxy(56,16);cout<<"0: "<<n0;
	gotoxy(0,18);cout<<"---------------------------------------------------------ABECEDARIO-----------------------------------------------------\n";
	
	gotoxy(0,0);cout<<"Escribe la frase que desees se traduzca a Morse";
	gotoxy(0,1);getline(cin,frase);
	
	longitud_cadena = frase.length();
	for(int variable=0; variable<longitud_cadena;variable++)
	{
		letra = frase[variable];
		
		if(letra=='a' || letra=='A')
		{
			system("color 71");
			Beep(750,300);Beep(750,800);
			cout<<".-"<<"   ";
			strcat(FraseMorse,".-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='b' || letra=='B')
		{
			system("color 72");
			Beep(750,800);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"-..."<<"   ";
			strcat(FraseMorse,"-...");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='c' || letra=='C')
		{
			system("color 73");
			Beep(750,800);Beep(750,300);Beep(750,800);Beep(750,300);
			cout<<"-.-."<<"   ";
			strcat(FraseMorse,"-.-.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='d' || letra=='D')
		{
			system("color 74");
			Beep(750,800);Beep(750,300);Beep(750,300);
			cout<<"-.."<<"   ";
			strcat(FraseMorse,"-..");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='e' || letra=='E')
		{
			system("color 75");
			Beep(750,300);
			cout<<"."<<"   ";
			strcat(FraseMorse,".");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='f' || letra=='F')
		{
			system("color 76");
			Beep(750,300);Beep(750,300);Beep(750,800);Beep(750,300);
			cout<<"..-."<<"   ";
			strcat(FraseMorse,"..-.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='g' || letra=='G')
		{
			system("color 78");
			Beep(750,800);Beep(750,800);Beep(750,300);
			cout<<"--."<<"   ";
			strcat(FraseMorse,"--.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='h' || letra=='H')
		{
			system("color 79");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"...."<<"   ";
			strcat(FraseMorse,"....");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='i' || letra=='I')
		{
			system("color 7A");
			Beep(750,300);Beep(750,300);
			cout<<".."<<"   ";
			strcat(FraseMorse,"..");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='j' || letra=='J')
		{
			system("color 7B");
			Beep(750,300);Beep(750,800);Beep(750,800);Beep(750,800);
			cout<<".---"<<"   ";
			strcat(FraseMorse,".---");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='k' || letra=='K')
		{
			system("color 7C");
			Beep(750,800);Beep(750,300);Beep(750,800);
			cout<<"-.-"<<"   ";
			strcat(FraseMorse,"-.-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='l' || letra=='L')
		{
			system("color 7D");
			Beep(750,300);Beep(750,800);Beep(750,300);Beep(750,300);
			cout<<".-.."<<"   ";
			strcat(FraseMorse,".-..");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='m' || letra=='M')
		{
			system("color 7E");
			Beep(750,800);Beep(750,800);
			cout<<"--"<<"   ";
			strcat(FraseMorse,"--");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='n' || letra=='N')
		{
			system("color 7F");
			Beep(750,800);Beep(750,300);
			cout<<"-."<<"   ";
			strcat(FraseMorse,"-.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='o' || letra=='O')
		{
			system("color 71");
			Beep(750,800);Beep(750,800);Beep(750,800);
			cout<<"---"<<"   ";
			strcat(FraseMorse,"---");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='p' || letra=='P')
		{
			system("color 72");
			Beep(750,300);Beep(750,800);Beep(750,800);Beep(750,300);
			cout<<".--."<<"   ";
			strcat(FraseMorse,".--.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='q' || letra=='Q')
		{
			system("color 73");
			Beep(750,800);Beep(750,800);Beep(750,300);Beep(750,800);
			cout<<"--.-"<<"   ";
			strcat(FraseMorse,"--.-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='r' || letra=='R')
		{
			system("color 74");
			Beep(750,300);Beep(750,800);Beep(750,300);
			cout<<".-."<<"   ";
			strcat(FraseMorse,".-.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='s' || letra=='S')
		{
			system("color 75");
			Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"..."<<"   ";
			strcat(FraseMorse,"...");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='t' || letra=='T')
		{
			system("color 76");
			Beep(750,800);
			cout<<"-"<<"   ";
			strcat(FraseMorse,"-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='u' || letra=='U')
		{
			system("color 78");
			Beep(750,300);Beep(750,300);Beep(750,800);
			cout<<"..-"<<"   ";
			strcat(FraseMorse,"..-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='v' || letra=='V')
		{
			system("color 79");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,800);
			cout<<"...-"<<"   ";
			strcat(FraseMorse,"...-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='w' || letra=='W')
		{
			system("color 7A");
			Beep(750,300);Beep(750,800);Beep(750,800);
			cout<<".--"<<"   ";
			strcat(FraseMorse,".--");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='x' || letra=='X')
		{
			system("color 7B");
			Beep(750,800);Beep(750,300);Beep(750,300);Beep(750,800);
			cout<<"-..-"<<"   ";
			strcat(FraseMorse,"-..-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='y' || letra=='Y')
		{
			system("color 7C");
			Beep(750,800);Beep(750,300);Beep(750,800);Beep(750,800);
			cout<<"-.--"<<"   ";
			strcat(FraseMorse,"-.--");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='z' || letra=='Z')
		{
			system("color 7D");
			Beep(750,800);Beep(750,800);Beep(750,300);Beep(750,300);
			cout<<"--.."<<"   ";
			strcat(FraseMorse,"--..");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='1')
		{
			system("color 7E");
			Beep(750,300);Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,800);
			cout<<".----"<<"   ";
			strcat(FraseMorse,".----");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='2')
		{
			system("color 7F");
			Beep(750,300);Beep(750,800);Beep(750,800);Beep(750,800);
			cout<<".---"<<"   ";
			strcat(FraseMorse,".---");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='3')
		{
			system("color 71");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,800);Beep(750,800);
			cout<<"...--"<<"   ";
			strcat(FraseMorse,"...--");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='4')
		{
			system("color 72");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,800);
			cout<<"....-"<<"   ";
			strcat(FraseMorse,"....-");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='5')
		{
			system("color 73");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"....."<<"   ";
			strcat(FraseMorse,".....");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='6')
		{
			system("color 74");
			Beep(750,800);Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"-...."<<"   ";
			strcat(FraseMorse,"-....");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='7')
		{
			system("color 75");
			Beep(750,800);Beep(750,800);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"--..."<<"   ";
			strcat(FraseMorse,"--...");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='8')
		{
			system("color 76");
			Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,300);Beep(750,300);
			cout<<"---.."<<"   ";
			strcat(FraseMorse,"---..");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='9')
		{
			system("color 78");
			Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,300);
			cout<<"----."<<"   ";
			strcat(FraseMorse,"----.");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra=='0')
		{
			system("color 79");
			Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,800);Beep(750,800);
			cout<<"-----"<<"   ";
			strcat(FraseMorse,"-----");
			strcat(FraseMorse," ");
			getch();
		}
		else if(letra==' ')
		{
			system("color 7A");
			Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);Beep(750,300);
			cout<<"......"<<"   ";
			strcat(FraseMorse,"......");
			strcat(FraseMorse," ");
			getch();
		}
	}
	gotoxy(0,4);cout<<"ESTA ES TU FRASE ORIGINAL:";gotoxy(26,4);cout<<frase<<endl;
	gotoxy(0,5);cout<<"ESTA ES TU FRASE EN MORSE:";gotoxy(26,5);cout<<FraseMorse<<endl;
}

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
