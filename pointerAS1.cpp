// pw assignment-1 on pointers



#include<iostream>
using namespace std;

void add(int *p1,int *p2){
    cout<<p1<<" "<<p2<<endl;
    cout<<"Addition "<<*p1+*p2<<"\n";
}

void mul(int *p1,int *p2);

void minMax(int *p1,int *p2,int *p3);

int process(string s,char *f,char *l);



int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
   cout<<ptr1<<" "<<ptr2<<endl;

    add(ptr1,ptr2);
    mul(ptr1,ptr2);

   minMax(ptr1,ptr2,ptr3);
   cout<<"a="<<a<<" b="<<b<<endl;
    swap(*ptr1,*ptr2);
    cout<<"a="<<a<<" b="<<b<<endl;
    string s;
    char first,last;
    cin>>s;
    int cnt = process(s,&first,&last);
    cout<<first<<" "<<last<<" "<<cnt<<endl;
    
    return 0;
}

void mul(int *p1,int *p2){
    cout<<"Multiplication "<<*p1**p2<<endl;
}

void minMax(int *p1,int *p2,int *p3){
    cout<<"Min "<<min(*p1,min(*p2,*p3))<<endl;
        cout<<"Max "<<max(*p1,max(*p2,*p3))<<endl;
    
}

int process(string s,char *f,char *l){
    *f=s[0];
    *l=s[s.size()-1];
    int cnt=0;
    for(char c:s)
        if(c=='t')
        cnt++;
    return cnt;    
}
