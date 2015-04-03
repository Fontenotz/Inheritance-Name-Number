#include<iostream.h>

class nameandnumber
{
protected:
	int idnum;
	char lastname[20];
	char firstname[15];
public:
	nameandnumber();
	~nameandnumber();
	void inputdata(const int num,const char *last,const char *first);
	void outputdata();
};

class customer:public nameandnumber
{
private:
	double balancedue;
public:
	void inputbaldue(const double bal);
	void outputbaldue();
};

nameandnumber::nameandnumber()
{
	nameandnumber::idnum=0;
}

nameandnumber::inputdata(const int num,const char *last,const char *first)
{
	nameandnumber::idnum=num;
	nameandnumber::astname=last;
	nameandnumber::firstname=first;
}

nameandnumber::outputdata()
{
	cout<<nameandnumber::idnum<<endl;
	cout<<nameandnumber::lastname<<endl;
	cout<<nameandnumber::firstname<<endl;
}

nameandnumber::~nameandnumber()
{
	nameandnumber::idnum=0;
}

customer::inputbaldue(const double bal)
{
	customer::nameandnumber::balancedue=bal+bal*.06;
}

customer::outputbaldue()
{
	cout<<customer::balancedue<<endl;
}


int main()
{
	customer cust;
	cust.inputdata(215,"Fontenotz","Freddie");
	cust.outputdata();

	cust.inputbalance(147.95);
	cust.outputbaldue();

return 0;
}