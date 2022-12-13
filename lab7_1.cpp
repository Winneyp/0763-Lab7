#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string input;
	string reText;
	string palin;
	string lowInput;
	string lowReText;

    cout << "Input text: ";
	cin >> input;
	lowInput = func3(input);
	
	reText = func1(input);
	cout << "Reversed text: " << reText<< "\n";
    lowReText = func3(reText);

	if (lowReText==lowInput)
	{
		palin = "Yes";
	}
	else
	{
		palin = "No";
	}
	cout << "Palindrome: " << palin;
    return 0;
}
