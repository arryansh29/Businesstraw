#include<iostream>
using namespace std;

int main ()
{
cout<<"Welcome to world of buissness\n";
cout<<"Enter the name of player1\n";
string Player1;
int  balnceofplayer1 = 25000;
cin>>Player1;

cout<<"Enter the name of player2\n";
string Player2;
int  balnceofplayer2 = 25000;
cin>>Player2;

cout<<"Enter the name of player3\n";
string Player3;
int  balnceofplayer3 = 25000;
cin>>Player3;

int bankbalance  = 250550;

int player1= balnceofplayer1;
int player2= balnceofplayer2;
int player3= balnceofplayer3;


    /*string country13 ="ENGLAND-done";
    string country2 ="IRAQ-done";

    string country23 ="WATERWAYS-done";

    string country4 ="FRANCE-done";
    string country5 ="IRAN-done";
    string country16 ="EGYPT-done";
    string country7 ="RESORT-done;
    string country8 ="CANADA-done";
    string country9 ="GERMANY-done";
    string country10 ="AIRWAYS-done";
    string country11="SWITZERLAND-done";
    string country12="BRAZIL-done";
    string country1="ITAY-done";
    string country14 ="PARTY HOUSE-done";
    string country15="JAPAN-done";
    string country26="USA-done";
    string country30="ROADWAYS-done";
    string country18="MEXICO-done";
    string country19="HONGKONG-done";

    string country20="AUSTRAILIA";

    string country21 ="JAIL";

    string country29="INDIA-done";
    string country3="SAUDI ARABIA-done";
    string country24="PETROLEUM-done
    string country25="RAILWAYS-done";
    string country27="MALAYSIA-done";
    string country17="SINGAPUR-done";*/

for (int i = 0; i < 45; i++)
{




                 string dhanda;
/*ITALY */       cout<<"Enter any number (enter like this countryXX  till 30)\n"<<endl;
                 cin>>dhanda;

                  if(dhanda=="country6")
                {
                   string ranking;
                   cout<<"Enter player ranking\n"<<endl;
                   cin>>ranking;
                   cout<<"enter player's balance  \n"<<endl;
                   int rankersbalance;
                   cin>>rankersbalance;

                   int ITALY = 3500;
                   if(rankersbalance<ITALY)
                  {
                   cout<<" Sorry you are not eligible\n";

                  }
                  if(rankersbalance==ITALY)
                  {
                      cout<<"Be careful you want be able to buy house in other countries \n"<<endl;

                  }

                  cout<<"so this is ITALY You want to buy as it is of  3500 dollars it or out\n"<<endl;
                  string bhokh;
                  cin>>bhokh;



                if(bhokh=="buy")
              {
                cout<<"Want to buy it alone or with deal\n";
                string soach;
                cin>>soach;

               if(soach=="alone")
               {

                rankersbalance = rankersbalance - ITALY;
                bankbalance = bankbalance + ITALY;
                cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  Now the bank has \n  "<<bankbalance<<endl;
               }


               if(soach=="deal")
               {

                string offer;
                cout<<"Enter the player you want to do deal with\n "<<endl;
                cin>>offer;
                cout<<"So as per the rules so the partnership will be 50:50\n"<<endl;
                int rankersbalance;
                cout<<"enter the balance you are doing deal with\n";
                cin>>rankersbalance;

                int  balancecode;
                cout<<"Enter your balance  ";
                cin>>balancecode;
                int iTALY = 1750;
                balancecode  =  balancecode  - iTALY ;
                rankersbalance = rankersbalance - iTALY ;
                bankbalance = bankbalance + iTALY;
                cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<  "   The bank has  : "<<bankbalance<<endl;
               }

               }

               }






//IRAQ


                   if(dhanda=="country2")
                {
                   string ranking;
                   cout<<"Enter player ranking\n"<<endl;
                   cin>>ranking;
                   cout<<"enter player's balance  \n"<<endl;
                   int rankersbalance;
                   cin>>rankersbalance;
                   int IRAQ = 5000;

         if(rankersbalance<IRAQ)
        {
            cout<<" Sorry you are not eligible\n"<<endl;

        }
         if(rankersbalance==IRAQ)
        {
             cout<<"Be careful you want be able to buy house in other countries\n "<<endl;

        }
               cout<<"so this is IRAQ You want to buy as it is of 5000 dollars it or out\n"<<endl;

                 string bhokh;
                 cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n"<<endl;
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - IRAQ;
                   bankbalance= bankbalance + IRAQ;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<" the bank  has  \n"<<bankbalance<<endl;

                  }



                   if(soach=="deal")
                 {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n "<<endl;
                     cin>>offer;
                     cout<<"So as per the rules so the partnership will be 50:50\n"<<endl;
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n"<<endl;
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  "<<endl;
                    cin>>balancecode;
                    int iRAQ = 2500;
                    balancecode  =  balancecode  - iRAQ ;
                    rankersbalance = rankersbalance - iRAQ ;
                    bankbalance =  bankbalance + iRAQ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : \n"<<bankbalance<<endl;
                  }


             }

             }


//SAUDIARABIA
                  if(dhanda=="country3")
                {
                   string ranking;
                   cout<<"Enter player ranking\n"<<endl;
                   cin>>ranking;
                   cout<<"enter player's balance  \n"<<endl;
                   int rankersbalance;
                   cin>>rankersbalance;
                   int SAUDIARABIA = 5500;

                  if(rankersbalance<SAUDIARABIA)
                {
                  cout<<" Sorry you are not eligible\n"<<endl;

                }

                 if(rankersbalance==SAUDIARABIA)
                  {
                   cout<<"Be careful you want be able to buy house in other countries \n"<<endl;

                  }

                  cout<<"so this is SAUDI ARABIA You want to buy as it is of 5500 dollars it or out\n"<<endl;

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n"<<endl;
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - SAUDIARABIA;
                   bankbalance =  bankbalance + SAUDIARABIA;

                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<" the bank has \n"<<bankbalance<<endl;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n "<<endl;
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n"<<endl;
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n"<<endl;
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  "<<endl;
                    cin>>balancecode;
                    int sAUDIARABIA = 2750;
                    balancecode  =  balancecode  - sAUDIARABIA ;
                    rankersbalance = rankersbalance - sAUDIARABIA ;
                    bankbalance =  bankbalance + sAUDIARABIA;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance<<endl;
                  }


                  }

                  }

//FRANCE

                  if(dhanda=="country4")
                {
                   string ranking;
                   cout<<"Enter player ranking\n"<<endl;
                   cin>>ranking;
                   cout<<"enter player's balance  \n"<<endl;
                   int rankersbalance;
                   cin>>rankersbalance;
                   int FRANCE = 2500;

                  if(rankersbalance<FRANCE)
                {
                  cout<<" Sorry you are not eligible\n"<<endl;

                }

                 if(rankersbalance==FRANCE)
                  {
                   cout<<"Be careful you want be able to buy house in other countries \n"<<endl;

                  }

                  cout<<"so this is FRANCE You want to buy as it is of 2500 dolars it or out\n"<<endl;

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n"<<endl;
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - FRANCE;
                   bankbalance= bankbalance + FRANCE;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<" The bank  has  \n"<<bankbalance<<endl;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int fRANCE = 1250;
                    balancecode  =  balancecode  - fRANCE ;
                    rankersbalance = rankersbalance - fRANCE ;
                    bankbalance =  bankbalance + fRANCE;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//IRAN
                  if(dhanda=="country7")
                {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int IRAN = 2500;

                  if(rankersbalance<IRAN)
                {
                  cout<<" Sorry you are not eligible\n";
                }
                 if(rankersbalance==IRAN)
                  {
                      cout<<"Be careful you want be able to buy house in other countries \n";

                  }
                  cout<<"so this is IRAN You want to buy as it is of 2500 dolar it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - IRAN;
                   bankbalance  = bankbalance + IRAN;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"   the bank has \n"<< bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int iRAN = 1250;
                    balancecode  =  balancecode  - iRAN ;
                    rankersbalance = rankersbalance - iRAN ;
                   bankbalance =  bankbalance + iRAN;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//CANADA
                   if(dhanda=="country8")
                {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int CANADA = 4000;

                  if(rankersbalance<CANADA)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==CANADA)
        {
             cout<<"Be careful you want be able to buy house in other countries\n ";

        }
                  cout<<"so this is CANADA You want to buy as it is of 4000 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - CANADA;
                   bankbalance = bankbalance + CANADA;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<" The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int cANADA = 2000;
                    balancecode  =  balancecode  - cANADA ;
                    rankersbalance = rankersbalance - cANADA ;
                    bankbalance =  bankbalance + cANADA;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//GERMANY
                   if(dhanda=="country9")
                {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int GERMANY = 3500;

                  if(rankersbalance<GERMANY)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==GERMANY)
        {
             cout<<"Be careful you want be able to buy house in other countries\n ";

        }

                  cout<<"so this is GERMANY You want to buy as it is of 3500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - GERMANY ;
                   bankbalance = bankbalance+ GERMANY;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<" The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int gERMANY = 1750;
                    balancecode  =  balancecode  - gERMANY ;
                    rankersbalance = rankersbalance - gERMANY ;

                    bankbalance =  bankbalance + gERMANY;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
    //AIRWAYS
                    if(dhanda=="country10")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int AIRWAYS= 10500;

                  if(rankersbalance<AIRWAYS)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==AIRWAYS)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }
                  cout<<"so this is AIRWAYS You want to buy as it is of 10500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - AIRWAYS ;
                   bankbalance= bankbalance + AIRWAYS;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int aIRWAYS = 5250;
                    balancecode  =  balancecode  - aIRWAYS ;
                    rankersbalance = rankersbalance - aIRWAYS ;
                   bankbalance =  bankbalance + aIRWAYS;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

                  if(dhanda=="country1")

                  {
                      cout<<"OPPS!! \n According to our data base there is no country registered here and you have to take 1500 from bank\n";
                      string ranking;
                      cout<<"Enter you player ranking \n";
                      cin>>ranking;
                      int balance;
                      cout<<"Enter your balance\n";
                      cin>>balance;
                      balance = balance+ 1000;
                      bankbalance = bankbalance - 1500;
                      cout<<ranking<<"  your balance is : "<<balance<<endl;



                  }

                   if(dhanda=="country5")

                  {
                      cout<<"OPPS!! \n According to our data base there is no country registered here so  \n"<<endl;
                       cout<<"you are in a resort\n you have to pay 400 to each player ";
                      string ranking,otherranking, otherrankingone;
                      int otherbalance,otherbalanceone,balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;

                      cout<<"Enter your balance \n";
                      cin>>balance;

                      cout<<"Enter other player ranking  :\n";
                       cin>>otherranking;

                       cout<<"Enter other player ranking  :\n";
                       cin>>otherrankingone;


                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalance;

                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalanceone;

                       balance= balance - 800;
                       otherbalance= otherbalance + 400;
                       otherbalanceone= otherbalanceone + 400;
                       cout<<"Your balance is now : "<<balance<<endl;
                       cout<<otherranking<<" balance is : "<<otherbalance<<endl;
                       cout<<otherrankingone<<" balance is :"<<otherbalanceone<<endl;



                  }




                  if(dhanda=="country22")
                  {

                      cout<<"OPPS!! \n According to our data base there is no country registered here \n"<<endl;
                      cout<<"You are jail 'yaha pe kuch to gad bad hai dayaa'\n";

                      string ranking;
                      int balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;
                      cout<<"Enter your balance :\n";
                      cin>>balance;
                      cout<<"As per the rules\n as you are in the jail you have to pay 2000 dollars and 250 dollars to each player  or you can deposit your all countries and have to give 500 dollars to each player\n"<<endl;
                      string choice;
                      cout<<"to deposit your all country and 500 to each player you can type 'karma' to pay fine type fine";
                      cin>>choice;
                      if(choice=="karma")
                      {
                         balance = balance - 1000;
                         cout<<"Now you are not the owner any country and your balance is \n"<<balance;
                      }
                      if(choice=="fine"){
                        balance = balance - 2000;
                        cout<<"Your balance is :  "<<balance<<endl<<"Hope our service was good in jail god bless!!";
                      }



                  }


     //SWITZERLAND

                    if(dhanda=="country11")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int SWITZERLAND = 3500;

                  if(rankersbalance<SWITZERLAND)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==SWITZERLAND)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is SWITZERLAND You want to buy as it is of 3500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - SWITZERLAND ;
                   bankbalance= bankbalance + SWITZERLAND;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int sWITZERLAND = 1750;
                    balancecode  =  balancecode  - sWITZERLAND ;
                    rankersbalance = rankersbalance - sWITZERLAND ;
                   bankbalance =  bankbalance + sWITZERLAND;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//BRAZIL

                   if(dhanda=="country12")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int BRAZIL= 2500;

                  if(rankersbalance< BRAZIL)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance== BRAZIL)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is  BRAZIL You want to buy as it is of 2500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - BRAZIL;
                   bankbalance= bankbalance + BRAZIL;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int bRAZIL = 1250;
                    balancecode  =  balancecode  -  bRAZIL ;
                    rankersbalance = rankersbalance -  bRAZIL ;
                   bankbalance =  bankbalance +  bRAZIL ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
//JAPAN

                   if(dhanda=="country15")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int JAPAN= 2500;

                  if(rankersbalance<JAPAN )
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance== JAPAN)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is  JAPAN You want to buy as it is of 2500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - JAPAN;
                   bankbalance= bankbalance + JAPAN;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int jAPAN = 1250;
                    balancecode  =  balancecode  - jAPAN ;
                    rankersbalance = rankersbalance - jAPAN;
                   bankbalance =  bankbalance +  jAPAN ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//USA


                      if(dhanda=="country26")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int USA= 8500;

                  if(rankersbalance<USA )
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance== USA)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is USA You want to buy as it is of 8500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - USA;
                   bankbalance= bankbalance + USA;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int uSA =4250;
                    balancecode  =  balancecode  - uSA ;
                    rankersbalance = rankersbalance - uSA;
                   bankbalance =  bankbalance +  uSA ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//roadways

                      if(dhanda=="country30")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int ROADWAYS = 3500;

                  if(rankersbalance<ROADWAYS )
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==ROADWAYS)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is ROADWAYS You want to buy as it is of 3500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - ROADWAYS;
                   bankbalance= bankbalance + ROADWAYS;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int rOADWAYS =1750;
                    balancecode  =  balancecode  - rOADWAYS ;
                    rankersbalance = rankersbalance - rOADWAYS ;
                   bankbalance =  bankbalance +  rOADWAYS ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
//Mexico
                   if(dhanda=="country17")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int MEXICO = 4000;

                  if(rankersbalance< MEXICO )
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==MEXICO)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is MEXICO You want to buy as it is of 4000 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - MEXICO;
                   bankbalance= bankbalance + MEXICO;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int mEXICO  = 2000;
                    balancecode  =  balancecode  - mEXICO ;
                    rankersbalance = rankersbalance - mEXICO;
                   bankbalance =  bankbalance +  mEXICO  ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//SINGAPUR



                    if(dhanda=="country18")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int SINGAPUR = 3000;

                  if(rankersbalance<SINGAPUR)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==SINGAPUR)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is SINGAPUR You want to buy as it is of 3000 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - SINGAPUR;
                   bankbalance= bankbalance + SINGAPUR;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int sINGAPUR  = 1500;
                    balancecode  =  balancecode  - sINGAPUR ;
                    rankersbalance = rankersbalance - sINGAPUR;
                   bankbalance =  bankbalance +  sINGAPUR  ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//RAILWAYS



                   if(dhanda=="country25")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int RAILWAYS = 9500;

                  if(rankersbalance<RAILWAYS)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==RAILWAYS)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is RAILWAYS You want to buy as it is of 9500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - RAILWAYS;
                   bankbalance= bankbalance + RAILWAYS;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int rAILWAYS  = 4750;
                    balancecode  =  balancecode  - rAILWAYS ;
                    rankersbalance = rankersbalance - rAILWAYS;
                   bankbalance =  bankbalance +  rAILWAYS  ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//HONGKONG
                    if(dhanda=="country19")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int HONGKONG = 2000;

                  if(rankersbalance<HONGKONG)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==HONGKONG)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is HONGKONG You want to buy as it is of 9500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - HONGKONG;
                   bankbalance= bankbalance + HONGKONG;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int hONGKONG  = 1000;
                    balancecode  =  balancecode  - hONGKONG ;
                    rankersbalance = rankersbalance - hONGKONG;
                   bankbalance =  bankbalance +  hONGKONG  ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
//ENGLAND




                    if(dhanda=="country13")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int ENGLAND = 2500;

                  if(rankersbalance< ENGLAND)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==ENGLAND)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is  ENGLAND You want to buy as it is of 2500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - ENGLAND;
                   bankbalance= bankbalance +  ENGLAND;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int  eNGLAND = 1250;
                    balancecode  =  balancecode  - eNGLAND ;
                    rankersbalance = rankersbalance - eNGLAND;
                   bankbalance =  bankbalance +  eNGLAND ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }

//Party house
                  if(dhanda=="country14")
                  {
                     cout<<"You  are in a party house you will get 400 from each player"<<endl;
                      string ranking,otherranking, otherrankingone;
                      int otherbalance,otherbalanceone,balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;

                      cout<<"Enter your balance \n";
                      cin>>balance;

                      cout<<"Enter other player ranking  :\n";
                       cin>>otherranking;

                       cout<<"Enter other player ranking  :\n";
                       cin>>otherrankingone;


                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalance;

                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalanceone;

                       balance= balance + 800;
                       otherbalance= otherbalance - 400;
                       otherbalanceone= otherbalanceone- 400;
                       cout<<"Your balance is now :\n"<<balance<<endl;
                       cout<<otherranking<<" balance is \n"<<otherbalance<<endl;
                       cout<<otherrankingone<<" balance is \n"<<otherbalanceone<<endl;




                  }
//INDIA
                    if(dhanda=="country29")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int INDIA = 4500;

                  if(rankersbalance< INDIA)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==INDIA)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is   INDIA You want to buy as it is of 4500 dollars it or out\n";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - INDIA;
                   bankbalance= bankbalance +  INDIA;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int  iNDIA = 2250;
                    balancecode  =  balancecode  - iNDIA ;
                    rankersbalance = rankersbalance - iNDIA;
                   bankbalance =  bankbalance +  iNDIA ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
//PETROLIUM

                    if(dhanda=="country24")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int PETROLEUM = 7000;

                  if(rankersbalance< PETROLEUM)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==PETROLEUM)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is PETROLEUM You want to buy as it is of 7000 dollars it or out\n";
                  //cout<<"The owner of this will 150 dollars from the player who buys a country as a tax";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - PETROLEUM;
                   bankbalance= bankbalance +  PETROLEUM;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int pETROLEUM = 3500;
                    balancecode  =  balancecode  - pETROLEUM ;
                    rankersbalance = rankersbalance - pETROLEUM;
                   bankbalance =  bankbalance +  pETROLEUM ;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//Malaysia



                    if(dhanda=="country27")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int Malaysia = 1500;

                  if(rankersbalance< Malaysia)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==Malaysia)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is Malaysia You want to buy as it is of 1500 dollars it or out\n";
                  //cout<<"The owner of this will 150 dollars from the player who buys a country as a tax";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - Malaysia;
                   bankbalance= bankbalance +  Malaysia;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int MAlaysia = 750;
                    balancecode  =  balancecode  - MAlaysia ;
                    rankersbalance = rankersbalance - MAlaysia;
                   bankbalance =  bankbalance +  MAlaysia;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }


//WATERWAYS

                    if(dhanda=="country23")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int WATERWAYS = 9500;

                  if(rankersbalance< WATERWAYS)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==WATERWAYS)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is WATERWAYS You want to buy as it is of 9500 dollars it or out\n";
                 // cout<<"The owner of this will 50 dollars from the player who buys a country as a tax";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - WATERWAYS;
                   bankbalance= bankbalance +  WATERWAYS;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int wATERWAYS = 4750;
                    balancecode  =  balancecode  - wATERWAYS ;
                    rankersbalance = rankersbalance - wATERWAYS;
                   bankbalance =  bankbalance + wATERWAYS;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
//AUSTRAILIA



                     if(dhanda=="country23")
                  {
                   string ranking;
                   cout<<"Enter player ranking\n";
                   cin>>ranking;
                   cout<<"enter player's balance  \n";
                   int rankersbalance;
                   cin>>rankersbalance;
                   int AUSTRAILIA = 3300;

                  if(rankersbalance< AUSTRAILIA)
                {
                  cout<<" Sorry you are not eligible\n";

                }

                 if(rankersbalance==AUSTRAILIA)
        {
             cout<<"Be careful you want be able to buy house in other countries or other ways \n ";

        }

                  cout<<"so this is AUSTRAILIA You want to buy as it is of 3300 dollars it or out\n";
                  //cout<<"The owner of this will 50 dollars from the player who buys a country as a tax";

                  string bhokh;
                  cin>>bhokh;


                  if(bhokh=="buy")
                 {
                   cout<<"Want to buy it alone or with deal\n";
                   string soach;
                   cin>>soach;

                  if(soach=="alone")
                 {

                   rankersbalance = rankersbalance - AUSTRAILIA;
                   bankbalance= bankbalance +  AUSTRAILIA;
                   cout<<"Congratulations,  "<<ranking<<"    your account have   \n" <<rankersbalance<<"  The bank has \n"<<bankbalance;
                  }


                   if(soach=="deal")
                   {

                     string offer;
                     cout<<"Enter the player you want to do deal with\n ";
                     cin>>offer;
                     cout<<"So as per the rules so the partner ship will be 50:50\n";
                     int rankersbalance;
                     cout<<"enter the balance you are doing deal with\n";
                     cin>>rankersbalance;

                     int  balancecode;
                    cout<<"Enter your balance  ";
                    cin>>balancecode;
                    int aUSTRAILIA = 1650;
                    balancecode  =  balancecode  - aUSTRAILIA ;
                    rankersbalance = rankersbalance - aUSTRAILIA;
                   bankbalance =  bankbalance + aUSTRAILIA;
                    cout<<"Congratulations for the deal you balance is \n  "<<balancecode<<"  and your deal partner balance is    \n        "<< rankersbalance<<"  The bank has : "<<bankbalance;
                  }


                  }

                  }
 //JAIL
                  if(dhanda=="country21")
                  {
                      cout<<"You are jail 'yaha pe kuch to gad bad hai dayaa'"<<endl;
                      string ranking;
                      int balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;
                      cout<<"Enter your balance :\n";
                      cin>>balance;
                      cout<<"As per the rules\n as you are in the jail you have to pay 2000 dollars and 250 dollars to each player  or you can deposit your all countries and have to give 500 dollars to each player\n"<<endl;
                      string choice;
                      cout<<"to deposit your all country and 500 to each player you can type 'karma' to pay fine type fine\n"<<endl;
                     cin>>choice;
                      if(choice=="karma")
                      {
                         balance = balance - 1000;
                         cout<<"Now you are not the owner any country and your balance is \n"<<balance;
                      }
                      if(choice=="fine"){
                        balance = balance - 2000;
                        cout<<"Your balance is :  "<<balance<<endl<<"Hope our service was good in jail god bless!!"<<endl;
                      }


                  }

//RESORT

                  if(dhanda=="country31")
                  {
                      cout<<"you are in a resort\n you have to pay 400 to each player "<<endl;
                      string ranking,otherranking, otherrankingone;
                      int otherbalance,otherbalanceone,balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;

                      cout<<"Enter your balance \n";
                      cin>>balance;

                      cout<<"Enter other player ranking  :\n";
                       cin>>otherranking;

                       cout<<"Enter other player ranking  :\n";
                       cin>>otherrankingone;


                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalance;

                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalanceone;

                       balance= balance - 800;
                       otherbalance= otherbalance + 400;
                       otherbalanceone= otherbalanceone + 400;
                       cout<<"Your balance is now :\n"<<balance<<endl;
                       cout<<otherranking<<" balance is \n"<<otherbalance<<endl;
                       cout<<otherrankingone<<" balance is \n"<<otherbalanceone<<endl;




                  }



                  if(dhanda=="country32")
                  {
                      cout<<"you are in a resort\n you have to pay 400 to each player "<<endl;
                      string ranking,otherranking, otherrankingone;
                      int otherbalance,otherbalanceone,balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;

                      cout<<"Enter your balance \n";
                      cin>>balance;

                      cout<<"Enter other player ranking  :\n";
                       cin>>otherranking;

                       cout<<"Enter other player ranking  :\n";
                       cin>>otherrankingone;


                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalance;

                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalanceone;

                       balance= balance - 800;
                       otherbalance= otherbalance + 400;
                       otherbalanceone= otherbalanceone + 400;
                       cout<<"Your balance is now :\n"<<balance<<endl;
                       cout<<otherranking<<" balance is \n"<<otherbalance<<endl;
                       cout<<otherrankingone<<" balance is \n"<<otherbalanceone<<endl;




                  }
                   if(dhanda=="country32")
                  {
                      cout<<"You are in a jail\n";
                      string ranking;
                      int balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;
                      cout<<"Enter your balance :\n";
                      cin>>balance;
                      cout<<"As per the rules\n as you are in the jail you have to pay 2000 dollars and 250 dollars to each player  or you can deposit your all countries and have to give 500 dollars to each player\n"<<endl;
                      string choice;
                      cout<<"to deposit your all country and 500 to each player you can type 'karma' to pay fine type fine";
                      if(choice=="karma")
                      {
                         balance = balance - 1000;
                         cout<<"Now you are not the owner any country and your balance is \n"<<balance;
                      }
                      if(choice=="fine"){
                        balance = balance - 2000;
                        cout<<"Your balance is :  "<<balance<<endl<<"Hope our service was good in jail god bless!!";
                      }

                  }

                  if(dhanda=="country33")
                  {
                     cout<<"You  are in a party house you will get 400 from each player"<<endl;
                      string ranking,otherranking, otherrankingone;
                      int otherbalance,otherbalanceone,balance;
                      cout<<"Enter your player ranking\n";
                      cin>>ranking;

                      cout<<"Enter your balance \n";
                      cin>>balance;

                      cout<<"Enter other player ranking  :\n";
                       cin>>otherranking;

                       cout<<"Enter other player ranking  :\n";
                       cin>>otherrankingone;


                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalance;

                       cout<<"Enter other player balance  :\n";
                       cin>>otherbalanceone;

                       balance= balance + 800;
                       otherbalance= otherbalance - 400;
                       otherbalanceone= otherbalanceone - 400;
                       cout<<"Your balance is now :\n"<<balance<<endl;
                       cout<<otherranking<<" balance is \n"<<otherbalance<<endl;
                       cout<<otherrankingone<<" balance is \n"<<otherbalanceone<<endl;
                  }




                  if(dhanda=="country34")
                  {
                      string choice;
                    cout<<"So this is USA if this is owned  by someone type rent and no one has owned it till now you cant but it now sorry "<<endl;
                    cin>>choice;
                    if(choice=="rent")
                    {
                        string ranking;
                        int balanceofowner;
                        int renter;
                        string owner;
                        cout<<"Enter the player ranking of the owner";
                        cin>>owner;
                        cout<<"Enter your ranking \n";
                        cin>>ranking;
                        cout<<"Enter owner balance\n";
                        cin>>balanceofowner;
                        cout<<"Enter you balance\n";
                        cin>>renter;
                        renter = renter - 1000;
                        balanceofowner = balanceofowner + 1000;
                        cout<<ranking<<"   Your balance is : "<<renter<<endl;
                        cout<<owner<<"  your balance is : "<<balanceofowner;

                    }

                  }

        }
    }

