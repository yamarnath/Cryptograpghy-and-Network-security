#include <iostream>  
#include <string>  
using namespace std;  
  
int main()  
{  
   
    string original = "I AM INDIAN";  
  
 
    cout << original << endl;  
 
 
}  
  
class Vigenere  
{  
    public:  
        string key;  
   
        Vigenere(string key)  
        {  
            for (int i = 0; i < key.size(); ++i)  
            {  
                if (key[i] >= 'A' && key[i] <= 'Z')  
                    this -> key += key[i];  
                else if (key[i] >= 'a' && key[i] <= 'z')  
                    this -> key += key[i] + 'A' - 'a';  
            }  
        }  
   
        string encrypt(string text)  
        {  
            string out;  
            for (int i = 0, j = 0; i < text.length(); ++i)  
            {  
                char c = text[i];  
                if (c >= 'a' && c <= 'z')  
                    c += 'A' - 'a';  
                else if (c < 'A' || c > 'Z')  
                    continue;  
                out += (c + key[j] - 2 * 'A') % 26 + 'A';  
                j = (j + 1) % key.length();  
            }  
            return out;  
        }  
   
        string decrypt(string text)  
        {  
            string out;  
            for (int i = 0, j = 0; i < text.length(); ++i)  
            {  
                char c = text[i];  
                if (c >= 'a' && c <= 'z')  
                    c += 'A' - 'a';  
                else if (c < 'A' || c > 'Z')  
                    continue;  
                out += (c - key[j] + 26) % 26 + 'A';  
                j = (j + 1) % key.length();  
            }  
            return out;  
        }  
};  