#include<iostream>


using std::cout;
using std::endl;
using std::string;


class abs_emp{
	virtual void ask_promotion()=0;
};


class emp:abs_emp{
private:
	string name;
	int age;
public:
	void set_name(string Name){
	name=Name;
	}
	string get_name(){
	return name;
	}	
	int get_age(){
	return age;
	}
	void ask_promotion(){
	if(age>30){
	cout<<"you got promoted"<<endl;
	}
	else
		cout<<"no promotion"<<endl;
	}
	emp(string Name,int Age){
	age=Age;
	name=Name;
	}

};


int main(){
	emp emp1=emp("tarun",34);
	emp emp2=emp("john",28);
	emp1.ask_promotion();
	emp2.ask_promotion();
	//cout<<emp1.ask_promotion()<<endl;
	
	cout<<"hello"<<endl;
	return 0;

}
