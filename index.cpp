#include<iostream>
using namespace std;

#include"IButton.cpp"
#include"ITextBox.cpp"
#include"IFactory.cpp"
#include"GUIAbstractFactry.cpp"

int main(){
	cout<<"enter your machine OS"<<endl;
	string osType;
	cin>>osType;
	
	//create a factory(Mac/Win) and store in a abstract(interface) factory class->obj
	IFactory* factory= GUIAbstractFactry::createFactory(osType);
	
	//create a button(Mac/Win) and store in a abstract(interface) Button class->obj
	IButton* button= factory->createButton();
	button->press();
	
	//create a textBox(Mac/Win) and store in a abstract(interface) TextBox class->obj
	ITextBox* textBox= factory->createTextBox();
	textBox->showText();
	
	return 0;	
}
