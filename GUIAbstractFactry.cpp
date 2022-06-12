
class GUIAbstractFactry{
	public:
		static IFactory* createFactory(string osType){
			if(osType== "windows")
				return new WinFactory();
			else if(osType== "mac")
				return new MacFactory();
			cout<<"wrong os TYPE entered, we use WINDOWS as default!"<<endl;
			return new WinFactory();
		}
};
