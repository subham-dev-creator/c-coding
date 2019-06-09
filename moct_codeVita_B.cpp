#include<bits/stdc++.h>
using namespace std;

const string EMPTY = "";

const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
				"Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
				"Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
				"Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
				"Sixty ", "Seventy ", "Eighty ", "Ninety " };

// Function to convert single digit or two digit number into words
string convert2digit(int n, string suffix)
{
	// if n is zero
	if (n == 0) {
		return EMPTY;
	}

	// split n if it is more than 19
	if (n > 19) {
		return Y[n / 10] + X[n % 10] + suffix;
	}
	else {
		return X[n] + suffix;
	}
}

// Function to convert a given number (max 9-digits) into words
string numberToWords(unsigned long long int n)
{
	// string to store word representation of given number
	string res;

	// this handles digits at ones & tens place
	res = convert2digit((n % 100), "");

	if (n > 100 && n % 100) {
		res = "and " + res;
	}

	// this handles digit at hundreds place
	res = convert2digit(((n / 100) % 10), "Hundred ") + res;

	// this handles digits at thousands & tens thousands place
	res = convert2digit(((n / 1000) % 100), "Thousand ") + res;

	// this handles digits at hundred thousands & one millions place
	res = convert2digit(((n / 100000) % 100), "Lakh, ") + res;

	// this handles digits at ten millions & hundred millions place
	res = convert2digit((n / 10000000) % 100, "Crore, ") + res;

	// this handles digits at ten millions & hundred millions place
	res = convert2digit((n / 1000000000) % 100, "Billion, ") + res;

	return res;
}

int main()
{
	int n1,m1,n,m;
	cin>>n1>>m1;
	if(n1>m1)
		{
		n=m1;
		m=n1;
	}
	else
	{
		n=n1;
		m=m1;
	}
	while(n<=99999 || m<=99999)
	{
	    //cout<<n<<" "<<m<<endl;
		if(n==m)
		{
			cout<<n;
			break;
		}
		string nw=numberToWords(n);
		string mw=numberToWords(m);
		string nnw,mmw;
		int nnnw,mmmw;
		
		//cout<<nw<<"  "<<mw<<endl;
		int a = nw.length();
		int b = mw.length();
		
		char char_nw[a+ 1];
		char char_mw[b+ 1];
		
		strcpy(char_nw, nw.c_str());
		strcpy(char_mw, mw.c_str());
		
		if( lexicographical_compare(char_nw,char_nw+a, char_mw, char_mw+b))
		{
			nnw=nw;
			mmw=mw;
		}
		else
		{
			nnw=mw;
			mmw=nw;
		}
		//cout<<nnw<<"  "<<mmw<<endl;
		
		if(nnw==nw)
			{
			nnnw=n;
			mmmw=m;
			}
		else
		{
			nnnw=m;
			mmmw=n;
		}
		//cout<<nnnw<<"  "<<mmmw<<endl;
		n=n+nnnw;
		m=m+mmmw;
	}
}
