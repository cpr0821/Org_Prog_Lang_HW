#include <iostream>
using namespace std;

int main()
{
	enum Name {Camryn, Helen = 5, Ethan, Alex };

	Name me = Camryn;
	Name you = Helen;
	Name him = Ethan;
	Name her = Alex;

	
	cout << "1. Camryn + 1 = " << (Camryn + 1) << endl;
	cout << "2. Camryn + Helen = " << (Camryn + Helen) << endl;
	cout << "3. Ethan / Alex = " << (Ethan / Alex) << endl;
	cout << "4. Camryn * Ethan = " << (Camryn * Ethan) << endl;
	cout << "5. Helen | Ethan = " << (Helen | Ethan) << endl;
	cout << "6. Camryn & Ethan = " << (Camryn & Ethan) << endl;
	cout << "7. Alex > Helen = " << (Alex > Helen) << endl;
	cout << "8. Camryn ^ Ethan = " << (Camryn ^ Ethan) << endl;
	cout << "9. Alex % Helen = " << (Alex % Helen) << endl;
	cout << "10. Helen == Ethan = " << (Helen == Ethan) << endl;
	
	
	
}

