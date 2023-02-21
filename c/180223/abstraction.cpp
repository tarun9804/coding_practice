#include<iostream>


using std::cout;
using std::endl;
using std::string;


class abs{
	virtual void promote()=0;
};
class emp:abs{
public:
       promote(){
	       cout<<"you are promted"<<endl;
       }
};


int main(){
	emp e1;
	e1.promote();
	cout<<"hello"<<endl;

	return 0;

}
