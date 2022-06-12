class ITextBox{
	public:
		virtual void  showText()=0;
};
class MacTextBox: public ITextBox{
	public:
		void showText(){
			cout<<"Mac TextBox Created!"<<endl;
		}
};
class WinTextBox: public ITextBox{
	public:
		void showText(){
			cout<<"Window TextBox Created!"<<endl;
		}
};
