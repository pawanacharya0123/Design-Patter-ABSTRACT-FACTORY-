class IButton{
	public:
		virtual void press()=0;
};
class MacButton: public IButton{
	public:
		void press(){
			cout<<"Mac Button Pressed!"<<endl;
		}
};
class WinButton: public IButton{
	public:
		void press(){
			cout<<"Window Button Pressed!"<<endl;
		}
};
