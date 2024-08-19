#include <stdio.h>
#include <string.h>

int in = 0,pos = 0, top = -1,lenght;
char temp,symbol;
char stack[30], infix[30], postfix[30];

void push(char sym)
{
    top = top+1;
    stack[top] = sym;
}
char pop()
{
    char sym;
    sym = stack[top];
    top--;
    return (sym);
}

int preced(char symb)
{
    int p;
    switch(symb)
    {
        case '*':
        case '/':
            p = 2;break;
        case '+':
        case '-':
            p = 1; break;
        
        case ')':
        case '(':
            p = 0;
            break;
        case '#' :
            p = -1; break;
    }
    return  p;
}
void in_po(char infix[],char postfix[]){
    lenght = strlen(infix);
    push('#');
    while (in < lenght) {
        symbol = infix[in];

        
        switch (symbol) {
            case '(': push(symbol);
                    break;
            case ')': temp = pop();
                    while (temp != '(') {
                        postfix[pos++] = temp;
                        temp = pop();
                    
                    }
                    break;
            case '+':
            case '-':
            case '*':
            case '/':
                while (preced(stack[top]) >= preced(symbol)) {
                    temp = pop();
                    postfix[pos++] = temp;
                
                }
                push(symbol);
                break;
            default:postfix[pos++] = symbol;
            break;
        }
        in++;
    
    }
    while (top >0) {
        temp =pop();
    postfix[pos++] = temp;
    }
}

int main()
{
    printf("Enter infix expression:");
    scanf("%s",infix);
    in_po(infix, postfix);
    printf("\n postfix expression:%s \n",postfix);
    return  0;

}