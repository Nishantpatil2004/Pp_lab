#include<iostream> using namespace std;



class BB;

class AA
{



private:

int v1;
public:

void setdata(int val){
v1=val;
}


int display()
{

return v1;}

friend void exchange (AA &x, BB &y); };

class BB

{

private:

int v2;

public:

void setdata(int val)

{

v2=val;

}

int display()

{

return v2;

} friend void exchange (AA &x, BB &y);
};
void exchange(AA x,BB y)
{
  int temp;
temp=x.v1;
x.v1=y.v2;
y.v2=temp;
}
int main()
{
  AA a;
BB b;
a.setdata();
b.setsata();
cout<<"before exchange"<<a.display()<<b.display();
exchange(a,b);
cout<<"after exchange"<<a.display()<<b.display();
return 0;
}
