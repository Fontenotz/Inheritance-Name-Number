#include<iostream.h>
#include<string.h>

class fruit
{
protected:
	char name[20];
	int seeds;
public:
	void Inputdata(const int seednum, const char *fruitname);
	void Outputdata();
};

void fruit::Inputdata(const int seednum, const char *fruitname)
{
	seeds=seednum;
	strcpy(name,fruitname);
}

void fruit::Outputdata()
{
	cout<<"Your fruit is an "<<name<<endl;
	cout<<"It has "<<seeds<<" seeds"<<endl;
}

class apple:public fruit
{
private:
	char color[10];
public:
	void Getcolor(const char *fruitcolor);
	void Outputcolor();
};

void apple::Getcolor(const char *fruitcolor)
{
	strcpy(color,fruitcolor);
}

void apple::Outputcolor()
{
	cout<<"Your apple is "<<color<<endl;
}

int main()
{
	fruit thisfruit;
	apple myapple;

	thisfruit.Inputdata(8,"pear");
	myapple.Inputdata(10,"apple");
	myapple.Getcolor("red");

	thisfruit.Outputdata();
	myapple.Outputdata();
	myapple.Outputcolor();

	return 0;
}