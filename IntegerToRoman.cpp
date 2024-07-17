#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        
        int IntegerValues[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string RomanValues[] = {"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I"};
        string ans = "";
        int i = 0;
        while(num > 0){
            if(num - IntegerValues[i] >= 0){
                ans += RomanValues[i];
                num -= IntegerValues[i];
            }
            else{
                i++;
            }
        }
        return ans;
    }   
};


int main(){
    return 0;
}