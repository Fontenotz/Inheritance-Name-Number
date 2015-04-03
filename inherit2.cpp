#include<iostream.h>
#include<string.h>

class nameandnumber
{
protected:
	int idnum;
	char lastname[20];
	char firstname[15];
public:
	nameandnumber();
//	~nameandnumber();
	void inputdata(const int num, const char *last, const char *first);
	void outputdata();
};

nameandnumber::nameandnumber()
{
	idnum=0;
}

void nameandnumber::inputdata(const int num, const char *last, const char *first)
{
	idnum=num;
	strcpy(lastname,last);
	strcpy(firstname,first);
}

void nameandnumber::outputdata()
{
	cout<<"ID Number is: "<<idnum<<endl;
	cout<<firstname<<"   "<<lastname<<endl;
}

// The class customer, which follows, concerns itself with informing them
// how much money that they owe to my company
class customer:public nameandnumber
{
private:
	double balance;
public:
	void inputbaldue(const double bal);
	void outputbaldue();
};

void customer::inputbaldue(const double bal)
{
	balance=bal;
}

void customer::outputbaldue()
{
	cout<<"Your balance is $"<<balance<<endl;
}

// The class vendor, which follows, concerns itself with informing them
// how much money my company owes to them
class vendor:public nameandnumber
{
private:
	double moneyowed;
public:
	void inputamountowed(const double owed);
	void outputowed();
};

void vendor::inputamountowed(const double owed)
{
	moneyowed=owed;
}

void vendor::outputowed()
{
	cout<<"My company will pay you $"<<moneyowed<<" for services recently rendered"<<endl;
}


int main()
{
	customer cust1,cust2,cust3,cust4;
	vendor vend1;
	cust1.inputdata(23456,"Fontenotz","Josephine");
	cust2.inputdata(67890,"Bagodonuts","Harry");
	cust3.inputdata(97862,"Jacobi","Jake");
    vend1.inputdata(32451,"Marketeers","Acme");
	cust1.inputbaldue(345.68);
	cust2.inputbaldue(123.31);
	cust3.inputbaldue(456.43);
    vend1.inputamountowed(1140.68);
	cust1.outputdata();
	cust1.outputbaldue();
	cout<<endl;
	cust2.outputdata();
	cust2.outputbaldue();
	cout<<endl;
	cust3.outputdata();
	cust3.outputbaldue();
	cout<<endl;
	vend1.outputdata();
	vend1.outputowed();

	return 0;
}

	