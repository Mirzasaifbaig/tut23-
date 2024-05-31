// *******------> Using of arrays in class<-----******
#include<iostream>
using namespace std;
class shop{
int itemId[100];
int itemPrice[100];
int counter;
public :
void intitCounter(void) { counter=0;}
void setPrice(void);
void displayPrice(void);
};
void shop :: setPrice(void){
    cout<<"Enter the Id of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}
void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Price  of item with id"<<itemId[i]<<"is"<<itemPrice[i];
    }
    
}
int main(){
shop dukkan;
dukkan . intitCounter();
dukkan.setPrice();
dukkan.setPrice();
dukkan.setPrice();
dukkan.displayPrice();
    return 0;
} 