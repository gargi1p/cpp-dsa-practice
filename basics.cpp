#include <bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "hey" << " "<<name <<endl;
}

void calc(int x, int y){
    int sum = x+y;
    cout<<"sum is: "<<sum<<endl;
}

//pass by value
void number(int &n){     //use '&' for pass by reference 
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}

void doSomething(int arr2[], int len){
     for(int i=0; i<len; i++){
        cout<<arr2[i]<<" ";
    }
}

int main(){
    cout<<"Gargi"<<endl;
    cout<<"Gargi"<<std::endl;
    cout<<"Gargi";
    
    int z;
    cin>>z;
    cout<< "value of z: " << z;
    
    string s;
    getline(cin, s);
    cout<<"string is:"<<s;
    
    int age;
    cout<<"Enter age:";
    cin>> age;
    if(age>=18){
        cout<<"Adult";
    }else{
        cout<<"Child";
    }
    
    int arr[5];
    cout<<"Enter elements of an array :";
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];
    
    int arr[2][3];
    cout<<"Enter elements of an 2D array";
    cin>>arr[0][1]>>arr[1][2]>>arr[1][1];
    cout<<endl;
    cout<<arr[0][1]<<arr[1][2]<<arr[1][0];    //some garbage values will be shown at arr[1][0]
    
    
    string name1;
    cout<<"enter name1: ";
    cin>>name1;
    printName(name1);
    
    string name2;
    cout<<"enter name2: ";
    cin>>name2;
    printName(name2);
    
    
    int a1,b1;
    cout<<"enter two no.";
    cin>>a1>>b1;
    calc(a1, b1);
    
    int a2, b2;
    cout<<"enter two no.";
    cin>>a2>>b2;
    calc(a2, b2);
    
    
    int num1;
    cout<<"enter any no.";
    cin>>num1;
    number(num1);
    cout<<num1;
    
    
    int len;
    cout<<"enter size of an array: ";
    cin >> len;
    int arr2[len];
    for(int i=0; i<len; i++){
        cin>>arr2[i];
    }
    doSomething(arr2, len);
    
    return 0;
}