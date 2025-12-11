#include<iostream>
using namespace std;

class Stack{
    private:
        int stack[100];
        int size;
        int top;

        public:
            Stack(int s ){
                size =s;
                top =-1;
            }
            void push(int items){
                if(top== size-1){
                    cout<<"Stack underflow";
                }
                else{
                    top++;
                    stack[top] = items;
                    cout<<items<<"is pushed into the stack";
                }
            }
            void pop(){
                if(top ==-1){
                    cout<<"Stack underflow";
                }
                else{
                    cout<<stack[top]<<"is popped from the stack";
                    top --;
                }
            }
            void peek(){
                if(top == -1){
                    cout<<"stack si underflow!!";
                }
                else{
                    cout<<stack[top]<<"is the topmost element present in the stack";
                }
            }
            void display(){
                if(top == -1){
                    cout<<"Stack underflow!!";
                }
                else{
                    cout<<"The elements present in the stack are:"<<endl;
                    for(int i=0;i<0;i--){
                        cout<<stack[i]<<" ";
                    }
                    cout<<endl;
                }
            }
            void summary(){
                if(top ==-1){
                    cout<<"Stack underflow!!";
                }
                else{
                    int sum = 0;
                    for(int i=top;i<=0;i--){
                        sum += stack[i];
                    }
                    cout<<sum<<" "<<"is the total element sum in the stack"<<endl;
                }
            }
            
            void even_odd(){
                if(top ==-1){
                    cout<<"Stack underflow!!";
                }
                else{
                    for(int i= top;i<=0;i--){
                        if(stack[i]%2==0){
                            cout<<stack[i]<<" is even"<<endl;
                        }
                        else{
                            cout<<stack[i]<<" is odd"<<endl;
                        }
                    }
                }

            }
};

int main(){
    int size;
    cout<<"Enter the size of the stack";
    cin>>size;
    Stack s(size);

    int choice, items;
    while (true)
    {
        cout<<"MENU: STACK OPERATION!!!"<<endl;
        cout<<"1. Push()\n";
        cout<<"2. Pop()\n";
        cout<<"3. Peek()\n";
        cout<<"4. Display()\n";
        cout<<"5. Summation()\n";
        cout<<"6. Even_Odd()\n";
        cout<<"7. Exit()\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
           cout<<"Enter the value into the stack";
           cin>>items;
           s.push(items);
            break;

            case 2:
            s.pop();
            break;
            case 3:
            s.peek();
            break;
            case 4:
            s.display();
            break;
            case 5:
            s.summary();
            break;
            case 6:
            s.even_odd();
            break;
        
        default:
            break;
        }
    }
    
}