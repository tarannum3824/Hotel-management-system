#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
class Menu
{
 public :

 void menu()
 {
  cout<<"                                  Menu de Filiya Restaurant "<<endl;
  cout<<"\n Pizza : Italian ($49)     Mexican ($60)     Thin crust ($45)     Seven Heavens(Seven layers cheese) ($100) "<<endl;
  cout<<" Burgers : Chicken burger ($70)     chillie burger ($55)     Mexican burger ($50)      Mazilo burger ($60) "<<endl;
  cout<<" Manchurian : Veg manchurian ($35)     Dry manchurian ($30)"<<endl;
  cout<<" Pasta : Sweet almond ($40)     Spicy soya ($30)     Regular Pasta ($20)"<<endl;
 }
};

class Selection
{
 public :
 int s1;
 int s2;
 int t1;
 int t2;
 int t3;
 int t4;
int t5,t6,t7,t8,t9,t10;
int t11,t12,t13,t14,t15,t16;
int pb,pp,bm,pm;
 void switchcase()
 {
  cout<<"Do you want combos ? Selecting combos gives you extra discount";
  cout<<"\nPress 1 for combos"<<endl;
  cout<<"Press 2 for regular";
  cin>>s1;
  switch(s1)
  {
   case 1:
   {

    cout<<" \nYou have choosen for combos"<<endl;
    cout<<" Available combos : Pizza + Burger (10%), Manchurian + Pasta (5%), Pizza + Pasta (4%), Burger + Manchurian(7%)"<<endl;
    cout<<" Press 1 for pizza and burger "<<endl;
    cout<<" Press 2 for Manchurian and pasta , Press 3 for Pizza and pasta"<<endl;
    cout<<" Press 4 for Burger and manchurian"<<endl;
    cout<<"\nEnter your choice :";
    cin>>s2;
    switch(s2)
    {
     case 1:
     {

      cout<<"\n You have selected Pizza and burger"<<endl;
      cout<<" Select your choice for pizza :"<<endl;
      cout<<" Press 1 for Italian pizza , Press 2 for Mexican Pizza"<<endl;
      cout<<" Press 3 for Thin crust Pizza , Press 4 for Seven Heavens";
      cin>>pb;
      switch(pb)
      {
       case 1:
       {
        int d1,t1,h1;
        cout<<"You choose the combo of Italian Pizza and Mexican Burger :)"<<endl;
        cout<<"Your order is worth $99"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h1;
        d1=(99*10)*h1/100;
        t1=(99-d1);
        cout<<"You have to pay $"<<t1;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pizza and Burger) \n You selected :Italian Pizza and Mexican Burger"<<endl;
        cout<<"Pay Total : $"<<t1;
        break;
       }
       case 2:
       {
         int d2,t2,h2;
        cout<<"You choose the combo of Mexican Pizza and Mexican Burger :)"<<endl;
        cout<<"Your order is worth $110"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h2;
        d2=(110*10)*h2/100;
        t2=(110-d2);
        cout<<"You have to pay $"<<t2;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pizza and Burger) \n You selected :Mexican Pizza and Mexican Burger"<<endl;
        cout<<"Pay Total : $"<<t2;
        break;
       }
       case 3:
       {
        int d3,t3,h3;
        cout<<"You choose the combo of Thin Crust Pizza and Mexican Burger :)"<<endl;
        cout<<"Your order is worth $95"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h3;
        d3=(95*10)*h3/100;
        t3=(95-d3);
        cout<<"You have to pay $"<<t3;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pizza and Burger) \n You selected :Thin Crust Pizza and Mexican Burger"<<endl;
        cout<<"Pay Total : $"<<t3;
        break;
       }
       case 4:
       {
        int d4,t4,h4;
        cout<<"You choose the combo of Seven Heavens Pizza and Mexican Burger :)"<<endl;
        cout<<"Your order is worth $150"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h4;
        d4=(150*10)*h4/100;
        t4=(150-d4);
        cout<<"You have to pay $"<<t4;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pizza and Burger) \n You selected :Seven Heavens Pizza and Mexican Burger"<<endl;
        cout<<"Pay Total : $"<<t4;
        break;
       }
       default:
       {cout<<"Enter a valid number";}
      }
      break;
     }
     case 2:
     {
      int pm;
      cout<<"\nYou have selected Manchurian and Pasta"<<endl;
      cout<<" Select your choice for pasta :"<<endl;
      cout<<" Press 1 for Sweet Almond Pasta and Veg Manchurian , Press 2 for Sweet Almond Pasta and Dry Manchurian "<<endl;
      cout<<" Press 3 for Spicy Soya Pasta and Veg Manchurian , Press 4 for Spicy Soya Pasta and Dry Manchurian "<<endl;
      cin>>pm;
      switch(pm)
      {
       case 1:
       {
        int d5,t5,h5;
        cout<<"\nYou choose the combo of Sweet Almond Pasta and Veg Manchurian :)"<<endl;
        cout<<"Your order is worth $75"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h5;
        d5=(75*5)*h5/100;
        t5=75-d5;
        cout<<"You have to pay $"<<t5;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Manchurian) \n You selected :Sweet Almond Pasta and Veg Manchurian"<<endl;
        cout<<"Pay Total : $"<<t5;
        break;
       }
       case 2:
       {
        int d6,t6,h6;
        cout<<"You choose the combo of Sweet Almond Pasta and Dry Manchurian :)"<<endl;
        cout<<"Your order is worth $70"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h6;
        d6=(70*5)*h6/100;
        t6=70-d6;
        cout<<"You have to pay $"<<t6;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Manchurian) \n You selected :Sweet Almond Pasta and Dry Manchurian"<<endl;
        cout<<"Pay Total : $"<<t6;
        break;
       }
       case 3:
       {
        int d7,t7,h7;
        cout<<"You choose the combo of Spicy Soya Pasta and Veg Manchurian :)"<<endl;
        cout<<"Your order is worth $65"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h7;
        d7=(65*5)*h7/100;
        t7=65-d7;
        cout<<"You have to pay $"<<t7;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Manchurian) \n You selected :Spicy Soya Pasta and Veg Manchurian"<<endl;
        cout<<"Pay Total : $"<<t7;
        break;
       }
       case 4:
       {
        int d8,t8,h8;
        cout<<"You choose the combo of Spicy Soya Pasta and Dry Manchurian :)"<<endl;
        cout<<"Your order is worth $60"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h8;
        d8=(60*5)*h8/100;
        t8=60-d8;
        cout<<"You have to pay $"<<t8;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Manchurian) \n You selected :Spicy Soya Pasta and Dry Manchurian"<<endl;
        cout<<"Pay Total : $"<<t8;
        break;
       }
       default :
       { cout<<"Please enter valid number :(";}
      }
      break;
      }
      case 3:
      {
      int pp;
      cout<<"\n You have selected Pasta and Pizza"<<endl;
      cout<<" Select your choice for pasta :"<<endl;
      cout<<" Press 1 for Sweet Almond Pasta and Mexican Pizza , Press 2 for Sweet Almond Pasta and Italian Pizza "<<endl;
      cout<<" Press 3 for Spicy Soya Pasta and Thin crust Pizza , Press 4 for Spicy Soya Pasta and Seven Heavens "<<endl;
      cin>>pp;
      switch(pp)
      {
       case 1:
       {
        int d9,t9,h9;
        cout<<"\nYou choose the combo of Sweet Almond Pasta and Mexican Pizza :)"<<endl;
        cout<<"Your order is worth $100"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h9;
        d9=(100*4)*h9/100;
        t9=100-d9;
        cout<<"You have to pay $"<<t9;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Pizza) \n You selected :Sweet Almond Pasta and Mexican Pizza"<<endl;
        cout<<"Pay Total : $"<<t9;
        break;
       }
       case 2:
       {
        int d10,t10,h10;
        cout<<"You choose the combo of Sweet Almond Pasta and Italian Pizza :)"<<endl;
        cout<<"Your order is worth $89"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h10;
        d10=(89*4)*h10/100;
        t10=89-d10;
        cout<<"You have to pay $"<<t10;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Pizza) \n You selected :Sweet Almond Pasta and Italian Pizza"<<endl;
        cout<<"Pay Total : $"<<t10;
        break;
       }
       case 3:
       {
        int d11,t11,h11;
        cout<<"You choose the combo of Spicy Soya Pasta and Thin Crust Pizza :)"<<endl;
        cout<<"Your order is worth $75"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h11;
        d11=(75*4)*h11/100;
        t11=75-d11;
        cout<<"You have to pay $"<<t11;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Pizza) \n You selected :Spicy Soya Pasta and Thin Crust Pizza"<<endl;
        cout<<"Pay Total : $"<<t11;
        break;
       }
       case 4:
       {
        int d12,t12,h12;
        cout<<"You choose the combo of Spicy Soya Pasta and Seven Heavens :)"<<endl;
        cout<<"Your order is worth $130"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h12;
        d12=(130*4)*h12/100;
        t12=130-d12;
        cout<<"You have to pay $"<<t12;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Pasta and Pizza) \n You selected :Spicy Soya Pasta and Seven Heavens Pizza"<<endl;
        cout<<"Pay Total : $"<<t12;
        break;
       }
      default :
       {cout<<"Please press a valid number :("<<endl;}
      }
      break;
      }
      case 4:
      {
      int bm;
      cout<<"\n You have selected Burger and Manchurian"<<endl;
      cout<<" Select your choice for pasta :"<<endl;
      cout<<" Press 1 for Chicken Burger and Veg Manchurian , Press 2 for Chillie Burger and Dry Manchurian "<<endl;
      cout<<" Press 3 for Mexican Burger and Veg Manchurian , Press 4 for Mazilo Burger and Dry manchurian  "<<endl;
      cin>>bm;
      switch(bm)
       {
       case 1:
       {
         int d13,t13,h13;
        cout<<"You choose the combo of Chinken Burger and Veg Manchurian :)"<<endl;
        cout<<"Your order is worth $65"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h13;
        d13=(65*7)*h13/100;
        t13=65-d13;
        cout<<"You have to pay $"<<t13;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Burger and Manchurian) \n You selected :Chiken Burger and Veg Manchurian"<<endl;
        cout<<"Pay Total : $"<<t13;
        break;
        }
        case 2:
        {
         int d14,t14,h14;
         cout<<"You choose the combo of Chillie Burger and Dry Manchurian :)"<<endl;
         cout<<"Your order is worth $85"<<endl;
          cout<<"Enter number of quantity :";
        cin>>h14;
         d14=(85*7)*h14/100;
         t14=85-d14;
         cout<<"You have to pay $"<<t14;
         cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Burger and Manchurian) \n You selected :Chillie Burger and Dry Manchurian"<<endl;
        cout<<"Pay Total : $"<<t14;
         break;
        }
        case 3:
        {
         int d15,t15,h15;
         cout<<"You choose the combo of Mexican Burger and Veg Manchurian :)"<<endl;
         cout<<"Your order is worth $85"<<endl;
          cout<<"Enter number of quantity :";
        cin>>h15;
         d15=(85*7)*h15/100;
         t15=85-d15;
         cout<<"You have to pay $"<<t15;
         cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Burger and Manchurian) \n You selected :Mexican Burger and Veg Manchurian"<<endl;
        cout<<"Pay Total : $"<<t15;
         break;
        }
        case 4:
        {
         int d16,t16,h16;
         cout<<"You choose the combo of Mazilo Burger and Dry Manchurian :)"<<endl;
         cout<<"Your order is worth $90"<<endl;
          cout<<"Enter number of quantity :";
        cin>>h16;
         d16=(90*7)*h16/100;
         t16=90-d16;
         cout<<"You have to pay $"<<t16;
         cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Combos (Burger and Manchurian) \n You selected :Mazilo Burger and Dry Manchurian"<<endl;
        cout<<"Pay Total : $"<<t16;
         break;
        }
        default :
        { cout<<"Please press a valid number :(";}
       }
       break;
      }
      }


    break;
   }
   case 2:
   {
   int reg;
    cout<<"You have choosen regular "<<endl;
    cout<<"Press 1 for Pizza       Press 2 for Burger       Press 3 for Pasta       Press 4 for Manchurian"<<endl;
    cout<<"Enter your choice :";
    cin>>reg;
    switch(reg)
    {
     case 1:
     {
     int c1;
      cout<<"\nPizza : 1 for Italian Pizza     2 for Mexican Pizza     3 for Thin Crust Pizza      4 for Seven Heavens Pizza"<<endl;
      cout<<"Enter your choice of pizza :"<<endl;
      cin>>c1;
      switch(c1)
      {
       case 1:
       {
        int t17,h17;
        cout<<"\nYou have choosen Italian Pizza :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h17;
        t17=(49)*h17;
        cout<<"You have to pay $"<<t17<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pizza) \n You selected :Italian Pizza"<<endl;
        cout<<"Pay Total : $"<<t17;
        break;
       }
       case 2:
       {
        int t18,h18;
        cout<<"\nYou have choosen Mexican Pizza :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h18;
        t18=(60)*h18;
        cout<<"You have to pay $"<<t18<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pizza) \n You selected :Mexican Pizza"<<endl;
        cout<<"Pay Total : $"<<t18;
        break;
       }
       case 3:
       {
        int t19,h19;
        cout<<"\nYou have choosen Thin Crust Pizza :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h19;
        t19=(45)*h19;
        cout<<"You have to pay $"<<t19<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pizza) \n You selected :Thin Crust Pizza"<<endl;
        cout<<"Pay Total : $"<<t19;
        break;
       }
       case 4:
       {
        int t20,h20;
        cout<<"\nYou have choosen Seven Heavens Pizza :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h20;
        t20=(100)*h20;
        cout<<"You have to pay $"<<t20<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pizza) \n You selected :Seven Heavens Pizza"<<endl;
        cout<<"Pay Total : $"<<t20;
        break;
       }
      }
      break;
     }
     case 2:
     {
     int c2;
      cout<<"\nBurger : 1 for Chicken Burger      2 for Chillie Burger      3 for Mexican Burger      4 for Mazilo Burger"<<endl;
      cout<<"Enter your choice of Burger :"<<endl;
      cin>>c2;
      switch(c2)
      {
       case 1:
       {
       int t21,h21;
        cout<<"\nYou have choosen Chicken Burger :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h21;
        t21=(70)*h21;
        cout<<"You have to pay $"<<t21<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Burger) \n You selected :Chicken Burger"<<endl;
        cout<<"Pay Total : $"<<t21;

        break;
       }
       case 2:
       {
        int t22,h22;
        cout<<"\nYou have choosen Chillie Burger :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h22;
        t22=(55)*h22;
        cout<<"You have to pay $"<<t22<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Burger) \n You selected :Chillie Burger"<<endl;
        cout<<"Pay Total : $"<<t22;

        break;
       }
       case 3:
       {
        int t23,h23;
        cout<<"\nYou have choosen Mexican Burger :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h23;
        t23=(50)*h23;
        cout<<"You have to pay $"<<t23<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Burger) \n You selected :Mexican Burger"<<endl;
        cout<<"Pay Total : $"<<t23;

        break;
       }
       case 4:
       {
        int t24,h24;
        cout<<"\nYou have choosen Mazilo Burger :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h24;
        t24=(60)*h24;
        cout<<"You have to pay $"<<t24<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Burger) \n You selected :Mazilo Burger"<<endl;
        cout<<"Pay Total : $"<<t24;
        break;
       }
      }
      break;
      }
       case 3:
       {
       int c3;
       cout<<"\nManchurian : 1 for Veg Manchurian      2 for Dry Manchurian"<<endl;
       cout<<"Enter your choice of Manchurian:"<<endl;
       cin>>c3;
       switch(c3)
       {
        case 1:
        {
        int t25,h25;
        cout<<"\nYou have choosen Veg Manchurian :)"<<endl;
        cout<<"Enter number of quantity :";
        cin>>h25;
        t25=(35)*h25;
        cout<<"You have to pay $"<<t25<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Manchurian) \n You selected :Veg Manchurian"<<endl;
        cout<<"Pay Total : $"<<t25;

         break;
        }
        case 2:
        {
         int t26,h26;
         cout<<"\nYou have choosen Dry Manchurian :)"<<endl;
         cout<<"Enter number of quantity :";
        cin>>h26;
        t26=(30)*h26;
        cout<<"You have to pay $"<<t26<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Manchurian) \n You selected :Dry Manchurian"<<endl;
        cout<<"Pay Total : $"<<t26;
         break;
        }
        }
        break;
       }
       case 4:
       {
        int c4;
        cout<<"\nPasta : 1 for Sweet Almond Pasta      2 for Spicy Soya Pasta      3 for Regular Pasta"<<endl;
        cout<<"Enter you choice of Pasta :"<<endl;
        cin>>c4;
        switch(c4)
        {
         case 1 :
         {
          int t27,h27;
          cout<<"\nYou have choosen Sweet Almond Pasta :)"<<endl;
          cout<<"Enter number of quantity :";
          cin>>h27;
          t27=(40)*h27;
          cout<<"You have to pay $"<<t27<<endl;
          cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pasta) \n You selected :Sweet Almond Pasta"<<endl;
        cout<<"Pay Total : $"<<t27;

          break;
         }
         case 2:
         {
          int t28,h28;
          cout<<"\nYou have choosen Spicy Soya Pasta :)"<<endl;
          cout<<"Enter number of quantity :";
        cin>>h28;
        t28=(30)*h28;
        cout<<"You have to pay $"<<t28<<endl;
        cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pasta) \n You selected :Spicy Soya Pasta"<<endl;
        cout<<"Pay Total : $"<<t28;

          break;
         }
         case 3:
         {
          int t29,h29;
          cout<<"\nYou have choosen Regular Pasta :)"<<endl;
          cout<<"Enter number of quantity :";
        cin>>h29;
        t29=(20)*h29;
        cout<<"You have to pay $"<<t29<<endl;
          cout<<"\n\n";
        cout<<"THE BILLING"<<endl;
        cout<<"Selection : Regular (Pasta) \n You selected :Regular Pasta"<<endl;
        cout<<"Pay Total : $"<<t29;
          break;
         }
        }
        break;
       }



     }

    break;
   }
  }
 }
};

int main()
{
  initwindow(1280,1280,"menu");
   readimagefile("pizza2.jpg",0,0,250,166);
   readimagefile("pizza 4.jfif",272,0,600,166);
   readimagefile("pizza 1.jfif",620,0,900,166);
   readimagefile("pizza 6.jfif",920,0,650,166);

   readimagefile("ssp1.jpg",0,200,250,370);
   readimagefile("ssp2.jpg",272,200,600,370);
   readimagefile("sP1.jfif",620,200,900,370);

   readimagefile("bg4.jpg",0,400,250,236);
   readimagefile("bg7.jfif",272,400,600,236);
   readimagefile("bg3.jpg",620,400,330,236);
   readimagefile("bg5.jpg",920,400,650,236);

   readimagefile("M1.jpg",0,600,250,436);
   readimagefile("M2.jpg",272,600,600,436);
   readimagefile("M3.jpg",620,600,900,430);

 Menu d1;
 d1.menu();
 Selection s1;
 s1.switchcase();
cout<<"\n\n\n Have a visit again \n Thanking You FILIYA RESTAURANT :) ";
getch();
}


