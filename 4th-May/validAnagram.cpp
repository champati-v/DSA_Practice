#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "anagram";
    string s2 = "nagaram";

    if(s1.length() != s2.length()){
        cout << "The strings are not anagrams." << endl;
        return 0;
    }
    
    int* freq = new int[26](); // allocate and zero-initialize frequency array

    for(char c : s1){
        int idx = c - 'a';
        freq[idx]++;
    }

    for(char c : s2){
        int idx = c - 'a';
        freq[idx]--;
    }

    bool isAnagram = true;
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            isAnagram = false;
            break;
        }
    }

    if(isAnagram){
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    delete[] freq;

}