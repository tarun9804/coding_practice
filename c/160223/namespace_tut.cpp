#include<iostream>

using std::cout;
using std::endl;

namespace name1{
	int age;
}

namespace name2{
	int age;
}
	
int main()
{
	name1::age=40;
	name2::age=70;
	cout<<name2::age<<endl;
	cout<<"hello world"<<endl;
	return 0;

}
