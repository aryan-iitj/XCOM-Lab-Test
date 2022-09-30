#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
  using namespace std;

void
Anagrams (vector < string > &filewords)
{
  
map < string, vector < string >> mp;

for (auto x:filewords)
    {
      
string key = x;
      
sort (begin (key), end (key));
      
mp[key].push_back (x);
    
 
}
  
vector < vector < string >> ans;

for (auto x:mp)
    
ans.push_back (x.second);
  
for (int i = 0; i < ans.size (); i++)
    {
    
for (string s:ans[i])
	{
	  
cout << s << " ";
	
}
      
cout << "\n";
    
}

 
}


int
main () 
{
  
fstream file;
  
string word, t, q, filename;
  
vector < string > filewords;
  
filename = "file.txt";
  
file.open (filename.c_str ());
  
while (file >> word)
    
    {
      
filewords.push_back (word);
    
 
}
  
 
Anagrams (filewords);
  
return 0;

}
