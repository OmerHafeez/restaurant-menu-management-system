#include<iostream>
using namespace std;
int main ()
{
	//declaring variable
	string A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,var,VAR_2;
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,Price,bill,Total_Bill,ON=0,quan,W;
	char order;
	long long int con;
	//taking food for the menu and giving the value to the strings
	A="Food1";
	B="Food2";
	C="Food3";
	D="Food4";
	E="Food5";
	F="Food6";
	G="Food7";
	H="Food8";
	I="Food9";
	J="Food10";
	K="Food11";
	L="Food12";
	M="Food13";
	N="Food14";
	O="Food15";
	P="Food16";
	Q="Food17";
	R="Food18";
	S="Food19";
	T="Food20";
	
	//specifing the price of all the menu and store it in the integers
	
	a=324;
	b=742;
	c=257;
	d=7352;
	e=5725;
	f=6325;
	g=4624;
	h=6422;
	i=542;
	j=578;
	k=964;
	l=258;
	m=157;
	n=257;
	o=789;
	p=643;
	q=468;
	r=987;
	s=7653;
	t=2984;
	
	//Printing menu for the people
	
	cout << "\tThe Menu is: "<<endl;
	cout << "Item: "<<A<<"\tPrice:"<<a<<endl;
	cout << "Item: "<<B<<"\tPrice:"<<b<<endl;
	cout << "Item: "<<C<<"\tPrice:"<<c<<endl;
	cout << "Item: "<<D<<"\tPrice:"<<d<<endl;
	cout << "Item: "<<E<<"\tPrice:"<<e<<endl;
	cout << "Item: "<<F<<"\tPrice:"<<f<<endl;
	cout << "Item: "<<G<<"\tPrice:"<<g<<endl;
	cout << "Item: "<<H<<"\tPrice:"<<h<<endl;
	cout << "Item: "<<I<<"\tPrice:"<<i<<endl;
	cout << "Item: "<<J<<"\tPrice:"<<j<<endl;
	cout << "Item: "<<K<<"\tPrice:"<<k<<endl;
	cout << "Item: "<<L<<"\tPrice:"<<l<<endl;
	cout << "Item: "<<M<<"\tPrice:"<<m<<endl;
	cout << "Item: "<<N<<"\tPrice:"<<n<<endl;
	cout << "Item: "<<O<<"\tPrice:"<<o<<endl;
	cout << "Item: "<<P<<"\tPrice:"<<p<<endl;
	cout << "Item: "<<Q<<"\tPrice:"<<q<<endl;
	cout << "Item: "<<R<<"\tPrice:"<<r<<endl;
	cout << "Item: "<<S<<"\tPrice:"<<s<<endl;
	cout << "Item: "<<T<<"\tPrice:"<<t<<endl;
	
	
	//tkaing the name and the number from the custo mer
	cout << "Enter your Name: ";
	cin>>U;
	cout<< "Enter your contact number: ";
	cin>>con;
	
	
	
	
		do{										//want to have atleast one iteration so using do while
			cout<<"Enter item:";				//take the order	
			cin>>VAR_2;
												//check the conditions for the order
					if(VAR_2=="A")				
					{
						Price=a;							//check the price
						cout<<"Enter the quantity: ";		//check for the quantity
						cin>>quan;
						W=a*quan;							
						cout<<"Quantity is: "<<quan<<endl;					//print the quantity
						cout<<"Price for item is: "<<W<<endl;				//print the price for the individial item
					}
					else if(VAR_2=="B")
					{														//do the same for all items 
						Price=b;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=b*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="C")
					{
						Price=c;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=c*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="D")
					{
						Price=d;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=d*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="E")
					{
						Price=e;cout<<"Enter the quantity: ";
						cin>>quan;
						W=e*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="F")
					{
						Price=f;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=f*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="G")
					{
						Price=g;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=g*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="H")
					{
						Price=h;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=h*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="I")
					{
						Price=i;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=i*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="J")
					{
						Price=j;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=j*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="K")
					{
						Price=k;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=k*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="L")
					{
						Price=l;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=l*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="M")
					{
						Price=m;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=m*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="N")
					{
						Price=n;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=n*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="O")
					{
						Price=o;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=o*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="P")
					{
						Price=p;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=p*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="Q")
					{
						Price=q;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=q*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="R")
					{
						Price=r;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=r*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="S")
					{
						Price=s;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=s*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
					else if(VAR_2=="T")
					{
						Price=t;
						cout<<"Enter the quantity: ";
						cin>>quan;
						W=t*quan;
						cout<<"Quantity is: "<<quan<<endl;
						cout<<"Price for item is: "<<W<<endl;
					}
			bill=bill+W;											//calculate the bill without GST
			cout<<"Do you want to continue order: ";
			cin>>order;
			if(ON==6)												//the order can be taken for six time maximum
			cout<<"This was your last item you cannot order more: "<<endl;
			ON++;
		}while((order=='y'||order=='Y')&&ON<=6);					//if the user wants to do more order and order number is less than 6
		cout<<"The bill is"<<bill<<endl;							//the price of bill without GST is
		cout<<"The GST on the bill is: "<<(bill*12)/100<<endl;		//print the 12% GST on bill
	Total_Bill=bill+(bill*12)/100;
	cout<<"The total bill after GST is: "<<Total_Bill<<endl;		//Print the bill with tax
	
//	cout<<"______________________"<<endl;
//	cout<<"|Name\tQty\tTotal|"<<endl;
	
	
	
	}