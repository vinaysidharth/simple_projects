#include<iostream>
#include<string>
using namespace std;

int main() {
    string name="vivv";
    int true_count=0;
    int false_count=0;
    for(int i=0;i<name.length();i++)
            {
                if(name[i]==name[name.length()-i-1])
                    {
                    true_count+=1;
                    }
                else
                    {
                    false_count+=1;
                    }
            }
    if (true_count==name.length())
        {
        cout<<"It is a palindrome";
        }
    else
        {
        cout<<"Not a palindrome";
        }
    return 0;
}
