#include <bits/stdc++.h>

using namespace std;
string encoder(string P, int key)
{
string result = "";
for (int i = 0; i < P.length(); i++)
{
if (isupper(P[i]))
result += char(int(P[i] + key - 65) % 256 + 65);
else
result += char(int(P[i] + key - 97) % 256 + 97);
}

return result;
}

string decoder(string C, int key)
{
string result = "";
for (int i = 0; i < C.length(); i++)
{

   if (isupper(C[i]))
result += char(int(C[i] - key - 65) % 256 + 65);
else
result += char(int(C[i] - key - 97) % 256 + 97);
}

return result;
}

int main()
{
string input, encoded, decoded;
int key;
cout << "Enter the string : ";
getline(cin, input);
cout << "Enter the key : ";
cin >> key;
encoded = encoder(input, key);
cout << "Encoded string : " << encoded << endl;
decoded = decoder(encoded, key);
cout << "Decoded string : " << decoded << endl;
return 0;
}

