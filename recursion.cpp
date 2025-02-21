//GFG -- Print GFG n times   (Recursion)
class Solution {
    public:
      void printGfg(int N) {
          if(N==0) return; 
          printGfg(N-1);
          cout<<"GFG"<<" ";
      }
  };


//GFG -- Print 1 to N numbers   (Recursion)
class Solution {
    public:
     
      void printNos(int n) {
          if(n==0) return;
          printNos(n-1);
          cout<<n<<" ";
      }
  };
  

//GFG -- Print N to 1 numbers   (Recursion)
  class Solution {
    public:
      void printNos(int N) {
          if(N<1) return;
          cout << N << " ";
          printNos(--N);
      }
  };
  

//GFG -- Sum of series   (Recursion)
class Solution {
    public:
      int sumOfSeries(int n) {
        if(n==1) return 1;
        return (n*n*n) + sumOfSeries(n-1);
      }
  };


//GFG --Factorial Less than or Equal to n
class Solution {
    public:
      vector<long long> factorialNumbers(long long n) {
          vector<long long> result;
          long long fact = 1, i = 1;
          
          while (fact <= n) {
              result.push_back(fact);
              i++;
              fact *= i;
          }
          
          return result;
      }
  };


//GFG -- Reverse an Array   (Recursion)
class Solution {
    public:
      void fun(vector<int> &arr,int l,int r){
              if(l>=r) return;
              swap(arr[l],arr[r]);
              fun(arr,l+1,r-1);
          }
      void reverseArray(vector<int> &arr) {
          int l=0;
          int r =arr.size()-1;
          fun(arr,l,r);
      }
  };


//LeetCode -- Valid Palindrome   (Easy)
class Solution {
    public:
        bool fun(string &temp,int l, int r){
            if(l>=r) return true;
            if(temp[l]==temp[r]){
                return fun(temp,l+1,r-1);
            }
            return false;
        }
        bool isPalindrome(string s) {
            string temp;
            for(int i=0;i<s.size();i++){
                if( s[i] < '0' || s[i] > '9' && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z' )continue;
                else{
                    temp.push_back(tolower(s[i]));
                }
            }
            int l=0;
            int r=temp.size()-1;
            return fun(temp,l,r);
        }
    };


//LeetCode -- Fibonacci Number   (Easy)
class Solution {
    public:
        int fib(int n) {
           if (n == 0) return 0;
           if (n == 1) return 1;
           return fib(n - 1) + fib(n - 2);
        }
    };    