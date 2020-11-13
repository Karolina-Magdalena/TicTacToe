//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char kto;

void sprawdz()
{
if ((p1==p2 && p2==p3 && p1!='n') ||
   (p4==p5 && p5==p6 && p4!='n') ||
   (p7==p8 && p8==p9 && p7!='n') ||
   (p1==p4 && p4==p7 && p1!='n') ||
   (p2==p5 && p5==p8 && p2!='n') ||
   (p3==p6 && p6==p9 && p3!='n') ||
   (p1==p5 && p5==p9 && p1!='n') ||
   (p3==p5 && p5==p7 && p3!='n'))
   {
   char * w;
   if (kto=='x') w="Wygrywa kó³ko!";
   else w="Wygrywa krzy¿yk!";

   Application->MessageBox(w,"Koniec gry",MB_OK);
   Form1->FormCreate(Form1);
   }
else if (p1 != 'n' && p2 != 'n' &&
        p3 != 'n' && p4 != 'n' &&
        p5 != 'n' && p6 != 'n' &&
        p7 != 'n' && p8 != 'n' && p9 != 'n')
        {
                Application->MessageBox("Remis!", "Koniec gry", MB_OK);
                Form1->FormCreate(Form1);
        }

}




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
p1='n';
p2='n';
p3='n';
p4='n';
p5='n';
p6='n';
p7='n';
p8='n';
p9='n';

kto='o';

Pole1->Enabled=true;
Pole2->Enabled=true;
Pole3->Enabled=true;
Pole4->Enabled=true;
Pole5->Enabled=true;
Pole6->Enabled=true;
Pole7->Enabled=true;
Pole8->Enabled=true;
Pole9->Enabled=true;

Pole1a->Visible=false;
Pole2a->Visible=false;
Pole3a->Visible=false;
Pole4a->Visible=false;
Pole5a->Visible=false;
Pole6a->Visible=false;
Pole7a->Visible=false;
Pole8a->Visible=false;
Pole9a->Visible=false;
Pole1b->Visible=false;
Pole2b->Visible=false;
Pole3b->Visible=false;
Pole4b->Visible=false;
Pole5b->Visible=false;
Pole6b->Visible=false;
Pole7b->Visible=false;
Pole8b->Visible=false;
Pole9b->Visible=false;

turab->Visible=false;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole1Click(TObject *Sender)
{
if (p1=='n')
{
if (kto=='o')
{
Pole1a->Visible=true;
p1='o';
kto='x';
turab->Visible=true;
Pole1a->Enabled=true;
}
else
{
Pole1b->Visible=true;
p1='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole2Click(TObject *Sender)
{
if (p2=='n')
{
if (kto=='o')
{
Pole2a->Visible=true;
p2='o';
kto='x';
turab->Visible=true;
Pole2a->Enabled=true;
}
else
{
Pole2b->Visible=true;
p2='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole3Click(TObject *Sender)
{
if (p3=='n')
{
if (kto=='o')
{
Pole3a->Visible=true;
p3='o';
kto='x';
turab->Visible=true;
Pole3a->Enabled=true;
}
else
{
Pole3b->Visible=true;
p3='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole4Click(TObject *Sender)
{
if (p4=='n')
{
if (kto=='o')
{
Pole4a->Visible=true;
p4='o';
kto='x';
turab->Visible=true;
Pole4a->Enabled=true;
}
else
{
Pole4b->Visible=true;
p4='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole5Click(TObject *Sender)
{
if (p5=='n')
{
if (kto=='o')
{
Pole5a->Visible=true;
p5='o';
kto='x';
turab->Visible=true;
Pole5a->Enabled=true;
}
else
{
Pole5b->Visible=true;
p5='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole6Click(TObject *Sender)
{
if (p6=='n')
{
if (kto=='o')
{
Pole6a->Visible=true;
p6='o';
kto='x';
turab->Visible=true;
Pole6a->Enabled=true;
}
else
{
Pole6b->Visible=true;
p6='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole7Click(TObject *Sender)
{
if (p7=='n')
{
if (kto=='o')
{
Pole7a->Visible=true;
p7='o';
kto='x';
turab->Visible=true;
Pole7a->Enabled=true;
}
else
{
Pole7b->Visible=true;
p7='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole8Click(TObject *Sender)
{
if (p8=='n')
{
if (kto=='o')
{
Pole8a->Visible=true;
p8='o';
kto='x';
turab->Visible=true;
Pole8a->Enabled=true;
}
else
{
Pole8b->Visible=true;
p8='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole9Click(TObject *Sender)
{
if (p9=='n')
{
if (kto=='o')
{
Pole9a->Visible=true;
p9='o';
kto='x';
turab->Visible=true;
Pole9a->Enabled=true;
}
else
{
Pole9b->Visible=true;
p9='x';
kto='o';
turab->Visible=false;
}
sprawdz();
}
}
//---------------------------------------------------------------------------



