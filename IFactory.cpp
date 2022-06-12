class IFactory{
	public:
		virtual IButton* createButton()=0;
		virtual ITextBox* createTextBox()=0;
};
class MacFactory: public IFactory{
	public:
		virtual IButton* createButton(){
			return new MacButton();
		}
		virtual ITextBox* createTextBox(){
			return new MacTextBox();
		}
};
class WinFactory: public IFactory{
	public:
		virtual IButton* createButton(){
			return new WinButton();
		}
		virtual ITextBox* createTextBox(){
			return new WinTextBox();
		}
};
