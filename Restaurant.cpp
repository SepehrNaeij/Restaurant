#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<cstdlib>
#include<math.h>
#include<conio.h>
#include<windows.h>

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

//-------------<< *** The name of functions *** >>------------------------------------------------------


void welcome();
void bye();
void select();
void pay();
void food();
void part111();
void part112();
void part113();
void part114();
void part115();
void part11();
void part12();
void part13();
void part210();
void part211();
void part216();
void part21();
void part222();
void part223();
void part224();
void part221();
void part22();
void part23();
void part31();
void part32();
void part33();
void part41();
void print1();
void print2();
void print3();
void print4();
void print();


//------------<< ***The duty of functions *** >>---------------------------------------------------------


void welcome(){
	system("cls");
	system("color 03");
cout<<"                       ***********************************************************************              ";
cout<<"                                   *              <<<    Welcome to Sepehr resturant    >>>              *"<<endl;
cout<<"                       ***********************************************************************              "<<endl;
cout<<"========================================================================================================================";
}
void bye()    {
	welcome();
	SetConsoleTextAttribute(h,04);
	cout<<endl;
	cout<<"\n"<<"Have a nice day...";
	SetConsoleTextAttribute(h,07);
}
void pay(){
SetConsoleTextAttribute(h,07);
int a,b;
SetConsoleTextAttribute(h,02);
cout<<"\n"<<"\n"<<"if you confirm this receipt,Pay it please..."<<"\n";
SetConsoleTextAttribute(h,07);
cout<<"1. pay"<<endl;
cout<<"2. Return"<<endl;
cin>>a;
welcome();
SetConsoleTextAttribute(h,07);
if ( a==1){
cout<<"Paid..."<<endl<<endl;
SetConsoleTextAttribute(h,02);
cout<<"Enter a number to return : ";
SetConsoleTextAttribute(h,07);
cin>>b;
part21();
}
if ( a==2 ){
part21();
} 
}
void select(){
	welcome();
	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Do you want to add a food?"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
}
void food(){
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Foods->>"<<endl<<endl;
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"   price"<<"     |  "<<"time"<<"  |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"    1   "<<" | Pizza    |"<<"  50000 Toman "<<" | 20 min |"<<"Fast Food|"<<" Gharch + Goje + Dolme"<<endl;
	cout<<"    2   "<<" | Hamberger|"<<"  40000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Kahu + Panir + Goje"<<endl;
	cout<<"    3   "<<" | Hot Dog  |"<<"  35000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Susis + Sos Makhsus"<<endl;
	cout<<"    4   "<<" | potato   |"<<"  25000 Toman "<<" | 10 min |"<<"Fast Food|"<<" Gharch + Panir"<<endl;
	cout<<"    5   "<<" | Vafel    |"<<"  35000 Toman "<<" | 10 min |"<<" Desert  |"<<" Ard + Shekar"<<endl;
	cout<<"    6   "<<" | Chiz cake|"<<"  30000 Toman "<<" | 15 min |"<<" Desert  |"<<" Shir + Tokhme Morgh"<<endl;
	cout<<"    7   "<<" | Tiramisu |"<<"  25000 Toman "<<" | 15  min|"<<" Desert  |"<<" Zaferun + Kare + Biskuiit"<<endl;
	cout<<"    8   "<<" | Ice Jelly|"<<"  20000 Toman "<<" | 10 min |"<<" Desert  |"<<" Zhelle + Bastani"<<endl;
	cout<<"    9   "<<" | Delester |"<<"  9000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   10   "<<" | Nushabe  |"<<"  8000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   11   "<<" | Dough    |"<<"  7000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   12   "<<" | Water    |"<<"  5000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;	
	cout<<"   13   "<<" | Fesenjun |"<<"  50000 Toman "<<" | 20 min |"<<"Main Food|"<<" Gerdu + Piaz + Gusht"<<endl;
	cout<<"   14   "<<" | Kubide   |"<<"  40000 Toman "<<" | 20 min |"<<"Main Food|"<<" Torshi + Kalam Ghermez"<<endl;
	cout<<"   15   "<<" | Gheime   |"<<"  35000 Toman "<<" | 25 min |"<<"Main Food|"<<" Lappe + Rob + Piaz"<<endl;
	cout<<"   16   "<<" | JUje     |"<<"  30000 Toman "<<" | 20 min |"<<"Main Food|"<<" Felfel + Namak + Piaz"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Enter a number in this list : ";
}
void part111(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Fast Food->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"    1   "<<" | Pizza    |"<<"  50000 Toman "<<" | 20 min |"<<"Fast Food|"<<" Gharch + Goje + Dolme"<<endl;
	cout<<"    2   "<<" | Hamberger|"<<"  40000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Kahu + Panir + Goje"<<endl;
	cout<<"    3   "<<" | Hot Dog  |"<<"  35000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Susis + Sos Makhsus"<<endl;
	cout<<"    4   "<<" | potato   |"<<"  25000 Toman "<<" | 10 min |"<<"Fast Food|"<<" Gharch + Panir"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"-if you want to return enter a number : ";
	cin>>a;
	if ( a>=0 ){
	part11();
	}
}
void part112(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Desert->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"    1   "<<" | Vafel    |"<<"  35000 Toman "<<" | 10 min |"<<" Desert  |"<<" Ard + Shekar"<<endl;
	cout<<"    2   "<<" | Chiz cake|"<<"  30000 Toman "<<" | 15 min |"<<" Desert  |"<<" Shir + Tokhme Morgh"<<endl;
	cout<<"    3   "<<" | Tiramisu |"<<"  25000 Toman "<<" | 15  min|"<<" Desert  |"<<" Zaferun + Kare + Biskuiit"<<endl;
	cout<<"    4   "<<" | Ice Jelly|"<<"  20000 Toman "<<" | 10 min |"<<" Desert  |"<<" Zhelle + Bastani"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"-if you want to return enter a number : ";
	cin>>a;
	if ( a>=0 ){
	part11();
	}
}
void part113(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Drink->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"   1   "<<" | Delester |"<<"  9000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   2   "<<" | Nushabe  |"<<"  8000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   3   "<<" | Dough    |"<<"  7000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   4   "<<" | Water    |"<<"  5000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;	
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"<-if you want to return enter a number : ";
	cin>>a;
	if ( a>=0 ){
	part11();
	}
}
void part114(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Main Food->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"   13   "<<" | Fesenjun |"<<"  50000 Toman "<<" | 20 min |"<<"Main Food|"<<" Gerdu + Piaz + Gusht"<<endl;
	cout<<"   14   "<<" | Kubide   |"<<"  40000 Toman "<<" | 20 min |"<<"Main Food|"<<" Torshi + Kalam Ghermez"<<endl;
	cout<<"   15   "<<" | Gheime   |"<<"  35000 Toman "<<" | 25 min |"<<"Main Food|"<<" Lappe + Rob + Piaz"<<endl;
	cout<<"   16   "<<" | JUje     |"<<"  30000 Toman "<<" | 20 min |"<<"Main Food|"<<" Felfel + Namak + Piaz"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"<-if you want to return enter a number : ";
	cin>>a;
	if ( a>=0 ){
	part11();
	}
}
void part115(){
	SetConsoleTextAttribute(h,07);
	print1();
}
void part11() {
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Fast Food"<<endl;
	cout<<"2. Desrt"<<endl;
	cout<<"3. Drink"<<endl;
	cout<<"4. Main Food"<<endl;
	cout<<"5. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	cin>> a; 
	system("cls");
	if ( a!=1 && a!=2 && a!=3 && a!=4 && a!=5) {
	do{
	welcome();
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Fast Food"<<endl;
	cout<<"2. Desrt"<<endl;
	cout<<"3. Drink"<<endl;
	cout<<"4. Main Food"<<endl;
	cout<<"5. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 || a==3 || a==4 || a==5)
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 || a!=3 || a!=4 || a!=5);
	system("cls");
	welcome();
	}
	if ( a==5 ){
	part115();
	}
	if ( a==2 ){
	part112();
	}
	if ( a==1 ){
	part111();
	}
	if ( a==3 ){
	part113();
	}
	if ( a==4 ){
	part114();
	}
}
void part12() {
	welcome();
	SetConsoleTextAttribute(h,07);
	int n,m;
	cout<<"Enter your new Username : ";
	cin>>n;
	cout<<"Enter your new Password : ";
	cin>>m;
	if ( n>0 && m>0 ){
		print();
}
}
void part13() {
	welcome();
	SetConsoleTextAttribute(h,07);
	print();
}
void part210(){
	SetConsoleTextAttribute(h,07);
}
void part211(){
	SetConsoleTextAttribute(h,07);
}
void part216(){
	welcome();
	SetConsoleTextAttribute(h,07);
	print2();
}
void part21() {
	SetConsoleTextAttribute(h,07);
	int b,c,s=0,m,x;             
	string A[100],D[100];
	string n;
	int B[100],C[100];
	int E[100],F[100];
	A[1]={"Pizza"};
	A[2]={"Hamberger"};
	A[3]={"Hot Dog"};
	A[4]={"Potato"};
	A[5]={"Vafel"};
	A[6]={"Chiz cake"};
	A[7]={"Tiramisu"};
	A[8]={"Ice Jelly"};
	A[9]={"Delester"};
	A[10]={"Nushabe"};
	A[11]={"Dough"};
	A[12]={"Water"};
	A[13]={"Fesenjun"};
	A[14]={"Kubide"};
	A[15]={"gheime"};
	A[16]={"Juje"};
	B[1]=50000;
	B[2]=40000;
	B[3]=35000;
	B[4]=25000;
	B[5]=35000;
	B[6]=30000;
	B[7]=25000;
	B[8]=20000;
	B[9]=9000;
	B[10]=8000;
	B[11]=7000;
	B[12]=5000;
	B[13]=50000;
	B[14]=40000;
	B[15]=35000;
	B[16]=30000;
	C[1]=20;
	C[2]=15;
	C[3]=15;
	C[4]=10;
	C[5]=10;
	C[6]=15;
	C[7]=15;
	C[8]=10;
	C[9]=0;
	C[10]=0;
	C[11]=0;
	C[12]=0;
	C[13]=20;
	C[14]=20;
	C[15]=25;
	C[16]=20;
//-----------------------------
	int a;
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15;
	int y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16,y;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Foods"<<endl;
	cout<<"2. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	cin>> a; 
	system("cls");
	if ( a!=1 && a!=2 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Foods"<<endl;
	cout<<"2. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	if ( a==1 || a==2 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 );
	system("cls");
	welcome();
	SetConsoleTextAttribute(h,07);
	}
	if ( a==1 ){
	food();	    
	welcome();
	SetConsoleTextAttribute(h,02);
	cout<<"\n"<<"Enter your name : ";
	SetConsoleTextAttribute(h,07);
	cin>>n;
	system("cls");      
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x1=b;
	s+=B[b];
	y=s;
	m=C[b];
	select();
	cin>>c;
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid("resid.txt");
	resid<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x2=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid1("resid1.txt");
	resid1<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x3=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid2("resid2.txt");
	resid2<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x4=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid3("resid3.txt");
	resid3<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x5=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid4("resid4.txt");
	resid4<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x6=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}	
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid5("resid5.txt");
	resid5<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x7=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid6("resid6.txt");
	resid6<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x8=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid7("resid7.txt");
	resid7<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x9=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid8("resid8.txt");
	resid8<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x10=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid9("resid9.txt");
	resid9<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x11=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid10("resid10.txt");
	resid10<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x12=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[x11]<<"\n"<<"12. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid11("resid11.txt");
	resid11<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x13=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[x11]<<"\n"<<"12. "<<A[x12]<<"\n"<<"13. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid12("resid12.txt");
	resid12<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x14=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[x11]<<"\n"<<"12. "<<A[x12]<<"\n"<<"13. "<<A[13]<<"\n"<<"14. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid13("resid13.txt");
	resid13<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	x15=b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[x11]<<"\n"<<"12. "<<A[x12]<<"\n"<<"13. "<<A[13]<<"\n"<<"14. "<<A[14]<<"\n"<<"15 ."<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid14("resid14.txt");
	resid14<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	s+=B[b];
	y=s;
	if ( C[b]>=m ){
	m=C[b];
	}
	select();
	cin>>c;
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( c==2 ){
	cout<<"\n"<<"\n"<<"This receipt exported for (mr/ms) : ";
	SetConsoleTextAttribute(h,06);
	cout<<n<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Your order : "<<"\n";
	SetConsoleTextAttribute(h,06);
	cout<<"\n"<<"1. "<<A[x1]<<"\n"<<"2. "<<A[x2]<<"\n"<<"3. "<<A[x3]<<"\n"<<"4. "<<A[x4]<<"\n"<<"5. "<<A[5]<<"\n"<<"6. "<<A[x6]<<"\n"<<"7. "<<A[x7]<<"\n"<<"8. "<<A[x8]<<"\n"<<"9. "<<A[x9]<<"\n";
	cout<<"10. "<<A[x10]<<"\n"<<"11 ."<<A[x11]<<"\n"<<"12. "<<A[x12]<<"\n"<<"13. "<<A[13]<<"\n"<<"14. "<<A[14]<<"\n"<<"15 ."<<A[x15]<<"\n"<<"16. "<<A[b]<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Payable amount : ";
	SetConsoleTextAttribute(h,06);
	cout<<s<<" toman"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"Waiting time : ";
	SetConsoleTextAttribute(h,06);
	cout<<m<<" min"<<endl;
	ofstream resid15("resid15.txt");
	resid15<<s;
	pay();
	}
	if ( c==1 ){
	food();
	SetConsoleTextAttribute(h,07);
	cin>>b;
	s+=B[b];
	if ( C[b]>=m ){
	m=C[b];
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
}
	if ( a==2 ){
	part216();
	}
	if ( a==3 ){
	cout<<y;
	}
}
void part221(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Fast Food->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"_________|__________|_______________|________|_________|__________________________"<<endl;
	cout<<"    1   "<<" | Pizza    |"<<"  50000 Toman "<<" | 20 min |"<<"Fast Food|"<<" Gharch + Goje + Dolme"<<endl;
	cout<<"    2   "<<" | Hamberger|"<<"  40000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Kahu + Panir + Goje"<<endl;
	cout<<"    3   "<<" | Hot Dog  |"<<"  35000 Toman "<<" | 15 min |"<<"Fast Food|"<<" Susis + Sos Makhsus"<<endl;
	cout<<"    4   "<<" | potato   |"<<"  25000 Toman "<<" | 10 min |"<<"Fast Food|"<<" Gharch + Panir"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"-if you want to return enter a number : ";
	cin>>a;
	if ( a>0 ){
	part22();
	}	
}
void part222(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Desert->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"    1   "<<" | Vafel    |"<<"  35000 Toman "<<" | 10 min |"<<" Desert  |"<<" Ard + Shekar"<<endl;
	cout<<"    2   "<<" | Chiz cake|"<<"  30000 Toman "<<" | 15 min |"<<" Desert  |"<<" Shir + Tokhme Morgh"<<endl;
	cout<<"    3   "<<" | Tiramisu |"<<"  25000 Toman "<<" | 15  min|"<<" Desert  |"<<" Zaferun + Kare + Biskuiit"<<endl;
	cout<<"    4   "<<" | Ice Jelly|"<<"  20000 Toman "<<" | 10 min |"<<" Desert  |"<<" Zhelle + Bastani"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"-if you want to return enter a number : ";
	cin>>a;
	if ( a>0 ){
	part22();
	}
}
void part223(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Drink->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"   1   "<<" | Delester |"<<"  9000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   2   "<<" | Nushabe  |"<<"  8000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   3   "<<" | Dough    |"<<"  7000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;
	cout<<"   4   "<<" | Water    |"<<"  5000 Toman "<<"  |   0    |"<<" Drink   |"<<endl;	
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"<-if you want to return enter a number : ";
	cin>>a;
	if ( a>0 ){
	part22();
	}
}
void part224(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl;
	cout<<"<<-Main Food->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is stored by food's price***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"  number"<<" |   "<<"name"<<"   |  "<<"price"<<"        | "<<"time"<<"   |"<<"Category"<<" | Contents "<<endl;
	cout<<"   13   "<<" | Fesenjun |"<<"  50000 Toman "<<" | 20 min |"<<"Main Food|"<<" Gerdu + Piaz + Gusht"<<endl;
	cout<<"   14   "<<" | Kubide   |"<<"  40000 Toman "<<" | 20 min |"<<"Main Food|"<<" Torshi + Kalam Ghermez"<<endl;
	cout<<"   15   "<<" | Gheime   |"<<"  35000 Toman "<<" | 25 min |"<<"Main Food|"<<" Lappe + Rob + Piaz"<<endl;
	cout<<"   16   "<<" | JUje     |"<<"  30000 Toman "<<" | 20 min |"<<"Main Food|"<<" Felfel + Namak + Piaz"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"<-if you want to return enter a number : ";
	cin>>a;
	if ( a>0 ){
	part22();
	}
}
void part22() {
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Fast Food"<<endl;
	cout<<"2. Desrt"<<endl;
	cout<<"3. Drink"<<endl;
	cout<<"4. Main Food"<<endl;
	cout<<"5. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	cin>> a; 
	system("cls");
	if ( a!=1 && a!=2 && a!=3 && a!=4 && a!=5) {
	do{
	welcome();
	cout<<endl<<endl<<"<<-Food Menu->>"<<endl<<endl;
	cout<<"1. Fast Food"<<endl;
	cout<<"2. Desrt"<<endl;
	cout<<"3. Drink"<<endl;
	cout<<"4. Main Food"<<endl;
	cout<<"5. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 || a==3 || a==4 || a==5)
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 || a!=3 || a!=4 || a!=5);
	system("cls");
	welcome();
	}
	if ( a==5 ){
	print2();
	}
	if ( a==2 ){
	part222();
	}
	if ( a==1 ){
	part221();
	}
	if ( a==3 ){
	part223();
	}
	if ( a==4 ){
	part224();
	}
}
void part23() {
	welcome();
	SetConsoleTextAttribute(h,07);
	print();
}
void part31() {
	welcome();
	int a;
	SetConsoleTextAttribute(h,07);
	ifstream resid("resid.ios::app");
	ifstream resid1("resid1.txt");
	ifstream resid2("resid2.txt");
	ifstream resid3("resid3.txt");
	ifstream resid4("resid4.txt");
	ifstream resid5("resid5.txt");
	ifstream resid6("resid6.txt");
	ifstream resid7("resid7.txt");
	ifstream resid8("resid8.txt");
	ifstream resid9("resid9.txt");
	ifstream resid10("resid10.txt");
	ifstream resid11("resid11.txt");
	ifstream resid12("resid12.txt");
	ifstream resid13("resid13.txt");
	ifstream resid14("resid14.txt");
	ifstream resid15("resid15.txt");
	int sum,s,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;
	string n;
	cout<<"\n"<<"\n"<<"<-Show all reciepts->"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,06);
	resid>>s;
	if ( s!=0 ) cout<<s<<" Toman"<<endl;
	resid1>>s1;
	if ( s1!=0 ) cout<<s1<<" Toman"<<endl;
	resid2>>s2;
	if ( s2!=0 ) cout<<s2<<" Toman"<<endl;
	resid3>>s3;
	if ( s3!=0 ) cout<<s3<<" Toman"<<endl;
	resid4>>s4;
	if ( s4!=0 ) cout<<s4<<" Toman"<<endl;
	resid5>>s5;
	if ( s5!=0 ) cout<<s5<<" Toman"<<endl;
		resid6>>s6;
	if ( s6!=0 ) cout<<s6<<" Toman"<<endl;
		resid7>>s7;
	if ( s7!=0 ) cout<<s7<<" Toman"<<endl;
		resid8>>s8;
	if ( s8!=0 ) cout<<s8<<" Toman"<<endl;	
		resid9>>s9;
	if ( s9!=0 ) cout<<s9<<" Toman"<<endl;
		resid10>>s10;
	if ( s10!=0 ) cout<<s10<<" Toman"<<endl;	
		resid11>>s11;
	if ( s11!=0 ) cout<<s11<<" Toman"<<endl;
		resid12>>s12;
	if ( s12!=0 ) cout<<s12<<" Toman"<<endl;
		resid13>>s13;
	if ( s13!=0 ) cout<<s13<<" Toman"<<endl;
		resid14>>s14;
	if ( s14!=0 ) cout<<s14<<" Toman"<<endl;
		resid15>>s15;
	if ( s15!=0 ) cout<<s15<<" Toman"<<endl;
	sum=s+s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15;
	ofstream residkol("residkol.txt");
	residkol<<sum;
	SetConsoleTextAttribute(h,07);
	cout<<"\n"<<"Total income is : ";
	SetConsoleTextAttribute(h,05);
	cout<<sum<<" Toman";
	SetConsoleTextAttribute(h,02);
	cout<<"\n"<<"\n"<<"If you want to return enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	if( a>=0 )
	print3();
}
void part32() {
	SetConsoleTextAttribute(h,07);
	print();
}
void part41() {
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	cin>>a; 
	system("cls");
	if ( a!=1 && a!=2 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2);
	system("cls");
	welcome();
	}
	if ( a==1 ){
	bye();
	}
	if ( a==2 ){
	print();
	}
}
void print1() {
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	int n,m;
	cout<<"Username : ";
	cin>>n;
	cout<<"Password : ";
	cin>>m;
	if ( n==m ){
	system("cls");
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Modiriat->>"<<endl<<endl;
	cout<<"1. Show The Food Menu"<<endl;
	cout<<"2. Change Password"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a; 
	SetConsoleTextAttribute(h,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Modiriat->>"<<endl<<endl;
	cout<<"1. Show The Food Menu"<<endl;
	cout<<"2. Change Password"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 || a==3)
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
	part11();
	}
	if ( a==2 ){
	part12();
	}
	if ( a==3 ){
	part13();
	}
}
}
void print2() {
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Moshtari->>"<<endl<<endl;
	cout<<"1. Sabte Sefaresh"<<endl;
	cout<<"2. Look the menu"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	cin>> a; 
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Moshtari->>"<<endl<<endl;
	cout<<"1. Sabte Sefaresh"<<endl;
	cout<<"2. Look the menu"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 || a==3 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
	part21();
	}
	if ( a==2 ){
	part22();
	}
	if ( a==3 ){
	part23();
	}
}
void print3() {
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Omur Mali->>"<<endl<<endl;
	cout<<"1. Show all reciepts"<<endl;
	cout<<"2. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>> a; 
	system("cls");
	if ( a!=1 && a!=2){
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Omur Mali>>"<<endl<<endl;
	cout<<"1. Show all reciepts"<<endl;
	cout<<"2. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please enter a correct number in this list : ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	SetConsoleTextAttribute(h,02);
	if ( a==1 || a==2)
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2);
	system("cls");
	welcome();
	}
	if (a==1){
	part31();
	}
	if (a==2){
	part32();
	}	
}
void print4() {
	SetConsoleTextAttribute(h,07);
	part41();
} 
void print()  {
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-MAIN MENU->>"<<endl<<endl;
	cout<<"1. Modiriat"<<endl;
	cout<<"2. Moshtari"<<endl;
	cout<<"3. Omur Mali"<<endl;
	cout<<"4. Close The App"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,02);
	cin>> a; 
	welcome();
	SetConsoleTextAttribute(h,07);
	if ( a!=1 && a!=2 && a!=3 && a!=4 ) {
	do{
	cout<<endl<<endl<<"<<-MAIN MENU->>"<<endl<<endl;
	cout<<"1. Modiriat"<<endl;
	cout<<"2. Moshtari"<<endl;
	cout<<"3. Omur Mali"<<endl;
	cout<<"4. Close The App"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please enter a correct number in this list : ";
	cin>>a;
	if ( a==1 || a==2 || a==3 || a==4 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2 || a!=3 || a!=4 );
	system("cls");
	welcome();
	}
	
	if ( a==1 ){
	print1();
	}
	if ( a==2 ){
	print2();
	}
	if ( a==3 ){
	print3();
	}
	if ( a==4 ){
	print4();
	}
	
}


//------------<< *** Performance *** >>--------------------------------------------------------------------


int main(){	
	int a,b,c;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"Enter the password ";
	SetConsoleTextAttribute(h,02);
	cout<<"===> ";
	SetConsoleTextAttribute(h,07);
	cin>>b;
	if ( b==1234 ){
	system("cls");
	}else{
	system("cls");
	for(int i=3;i>0;i--){
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<endl<<"You just have ("<<i<<") opportunity to enter the correct password...!";
	cout<<endl<<endl<<"Please enter the Password correctly ";
	SetConsoleTextAttribute(h,02);
	cout<<"===> ";
	SetConsoleTextAttribute(h,07);
	cin>>b;
	system("cls");
	if ( b!=1234 ){
	system("cls");
	welcome();
	SetConsoleTextAttribute(h,04);
	cout<<"\n"<<"\n"<<"End...";
	SetConsoleTextAttribute(h,07);
	}
	if ( b==1234 )
	break;
	}
	}
	if ( b==1234 ){
	welcome();
	SetConsoleTextAttribute(h,07);
	print();
}
	return 0;
}