#include<iostream>
using namespace std;
int T,W;
float g;

class item
{
    int quantity;
    char name[100];
    float price,G,GST;

public:
    float Total;
    void get_Gdata();
    void put_Gdata();

};



void item::get_Gdata()
{
    cout<<" Enter the name of the item "<<T+1<<" = ";
    cin>>name;
    cout<<" Enter the quantity = ";
    cin>>quantity;
    cout<<" Enter the price = ";
    cin>>price;
    cout<<" Enter the GST % ";
    cin>>G;
    cout<<"\n";

}
void item::put_Gdata()
{
    Total=(1+G/100)*(quantity*price);
    cout<<"\t|\t"<<name;
	cout<<"\t|\t"<<quantity;
	cout<<"\t|\t"<<price;
	cout<<"\t|\t"<<G<<"%";
	cout<<"\t|\t"<<Total<<"\t|";
	cout<<endl;
//	for(int y=0;y<=88;++y)
//		cout<<"-";
	cout<<"\t-------- --------------- --------------- --------------- --------------- ----------------";
}


class product
{
    int quantity;
    char name[100];
    float price,GST;

public:
    float Total;
    void get_gdata();
    void put_gdata();
    void const_gst_val();

};



void product::get_gdata()
{
    cout<<" Enter the name of the item "<<W+1<<" = ";
    cin>>name;
    cout<<" Enter the quantity = ";
    cin>>quantity;
    cout<<" Enter the price = ";
    cin>>price;
    cout<<"\n";

}
void product::put_gdata()
{
    Total=(1+g/100)*(quantity*price);
    cout<<"\t|\t"<<name;
	cout<<"\t|\t"<<quantity;
	cout<<"\t|\t"<<price;
	cout<<"\t|\t"<<g<<"%";
	cout<<"\t|\t"<<Total<<"\t|";
	cout<<endl;
//	for(int y=0;y<=88;++y)		//this os for layout only
//		cout<<"-";
	cout<<"\t-------- --------------- --------------- --------------- --------------- ----------------";			// # Line 3
}
void product::const_gst_val()
{
	cout<<"\n Fix Gst Rate(in %) = ";
	cin>>g;
	cout<<"\n";
}



int main()
{
    int N,x;
    char s;
    
    cout<<"\n\n";
    
    do
	{    	
	    item i[100];
   		product j[100];
   		product p;
    	product k;
	    
    	cout<<" Enter 1 for Fix Gst Rate(in %) \n\n Enter 2 for Custom Gst Rate(in %) \n\n Enter your choice ";
    	cin>>s;
    	cout<<"\n You have selected "<<s<<"\n\n";
    
    	switch(s)
    	{
    		case '1':	cout<<"\n Enter the Total number of item = ";
    					cin>>N;
    					
    					k.const_gst_val();
    					
						for(W=0;W<N;++W)
    					{
							j[W].get_gdata();
						}
				break;
				
			case '2':	cout<<"\n Enter the Total number of item = ";
    					cin>>N;
						for(T=0;T<N;++T)
						{
							i[T].get_Gdata();
						}
				break;
			default	:	cout<<"Enter valid choice only 1 or 2";
		}
		    
		switch(s)
	    {
	    	case '1'	:	
							cout<<" \n \t-------- --------------- --------------- --------------- --------------- ----------------";		// # Line 1
							cout<<"\n\t|Sr No. |";
	    					cout<<" Name of items |";
    						cout<<"    Quantity   |";
    						cout<<"    item price |";
    						cout<<"       GST % \t|";
    						cout<<"      Total  \t|";
    						
							cout<<endl;
							//	for(int y=0;y<=88;++y)		//this is for layout only
							//	cout<<"-";
							cout<<"\t-------- --------------- --------------- --------------- --------------- ----------------";			// # Line 2 
	

							for(W=0;W<N;++W)
	    					{	
	    						
	    						cout<<"\n  \t|   "<<W+1;
	    						j[W].put_gdata();
	    							    						
							}
				break;
		
			case '2'	:	
							cout<<" \n \t-------- --------------- --------------- --------------- --------------- ----------------";		// # Line 1
							cout<<"\n\t|Sr No. |";
	    					cout<<" Name of items |";
    						cout<<"    Quantity   |";
    						cout<<"    item price |";
    						cout<<"       GST % \t|";
    						cout<<"      Total  \t|";
    						
							cout<<endl;
							//	for(int y=0;y<=88;++y)		//this is for layout only
							//	cout<<"-";
							cout<<"\t-------- --------------- --------------- --------------- --------------- ----------------";			// # Line 2 
	

								for(T=0;T<N;++T)
							{
								cout<<"\n  \t|   "<<T+1;
								i[T].put_Gdata();
							}
				break;
		}
	
		cout<<"\n\n\n\n\n";

		cout<<" Press 1 for new Entry \n\n Press 2 to Exit ";
		cin>>x;
		cout<<"\n\n";
	}
	while(x == 1);
	
	cout<<"\n\n";
	return 0;
}

