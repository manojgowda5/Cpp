#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    cout << "Pattern 1"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    } 
}
void pattern2(int n){
    cout << "Pattern 2"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    } 
}

void pattern3(int n){
    cout << "Pattern 3"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=1;j<=i+1;j++){
            cout << " "<<  j;
        }
        cout << endl;
    } 
}

void pattern4(int n){
    cout << "Pattern 4"<< endl ;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << " "<<  i;
        }
        cout << endl;
    } 
}

void pattern5(int n){
    cout << "Pattern 5"<< endl ;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    cout << "Pattern 6"<< endl ;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout << " " << j;
        }
        cout << endl;
    }
}

void pattern7(int n){
    cout << "Pattern 7"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for (int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    cout << "Pattern 8"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        for (int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
    cout << "pattern 9"<< endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for (int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        for (int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }  
}

void pattern10 (int n){
    cout << "pattern 10"<< endl;
    for (int i=1;i<=2*n-1;i++){
        int stars=i;
        if (i>n) stars=2*n -i;
        for(int j=1;j<=stars;j++){
            cout << "*" ;
        }
        cout << endl;
    }
}


void pattern11 (int n){
    cout << "pattern 11"<< endl;
    for (int i=0;i<n;i++){
        int start = 1;
        if (i %2==0) start =1;
        else start = 0;
        for (int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12 (int n ){
    cout << "pattern 12";
   int space = 2*(n-1);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j ;
        }

        for (int j=1;j<=space;j++){
            cout << " ";
        }

        for (int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -=2;

    }
}

void pattern13(int n ){
    cout << "pattern 13"<<endl;
    int num=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout <<num << " ";
            num+=1;
        }
        cout << endl;
    }
}

void pattern14(int n ){
    cout << "pattern 14"<<endl;
    
    for (int i=1;i<=n;i++){
        for (char ch ='A'; ch<'A'+i;ch++){
            cout << ch << " ";
            
        }
        cout << endl;
    }
}

void pattern15(int n ){
    cout << "pattern 15"<<endl;
    
    for (int i=0;i<n;i++){
        for (char ch ='A'; ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
            
        }
        cout << endl;
    }
}

void pattern16(int n ){
    cout << "pattern 16"<<endl;
    
    for (int i=0;i<n;i++){
        char ch ='A'+i;
        for (int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


void pattern17(int n){
    cout << "Pattern 17"<< endl ;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        int bp=(2*i+1)/2 ;
        char ch ='A';

        for (int j=1;j<=2*i+1;j++){
            cout << ch;
            if ( j <=bp)ch++;
            else ch--;
        }
        for (int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
    cout << "pattern 18"<< endl;
    for (int i=0;i<n;i++){
        for (char ch ='E'-i;ch<='E';ch++){
            cout << ch ;
        }
        cout << endl;
    }
}

void pattern19(int n){
    cout << "pattern 19"<<endl;
    int space =0;
    for (int i=0;i<n;i++){
        
        for (int j=1;j<=n-i;j++){
            cout << "*";

        }
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for (int j=1;j<=n-i;j++){
            cout << "*";
            
        }
        space +=2;
        cout << endl;
    }

    int spaceb= 2*(n-1);
    for (int i=1;i<=n;i++){
         for (int j=1;j<=i;j++){
            cout << "*";

        }
        for(int j=0;j<spaceb;j++){
            cout << " ";
        }
        for (int j=1;j<=i;j++){
            cout << "*";
            
        }
        spaceb -=2;
        cout << endl;

    }
}
int main() {
    int n;
    cout << " enter the integer";
    cin >> n ;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
  return 0;
}
