

#include <iostream>

using namespace std;

class queue{
    int *arr;
    int front ;
    int back;
 public:
 queue(){
     int n;
     arr=new int[n];
     front=-1;
     back=-1;
 }
 void push(int x){
     if (back==front-1 ){
         cout<<"overflow";
         return;
     }
     back++;
     arr[back]=x;
     if(front==-1){
         front++;
     }}
     
void pop(){
         if(front==-1 || front>back){
             return ;
         }
         front++;
         
     }
     int peek(){
         if(front==-1 || front>back){
             return -1;
         }
         return arr[front];
         
     }
     bool empty(){
         if(front==-1 || front>back){
             return true;
         }
         else
         return false;
     }
 };
    


int main()
{
    queue q;
    int n;
    cin>> n;
    q.push(1);
    q.push(2);
    cout<<q.peek()<<endl;
    q.pop();
}
