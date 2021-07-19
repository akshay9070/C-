#include<iostream>
using namespace std;

class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
    void init_Counter(void){
     counter=0;
    }
    void setPrice(void);
    void dispalyPrice(void);
    
};

void Shop ::setPrice(){
    cout<<"Enter Item ID of Item "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Set the Price"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop ::dispalyPrice(){
    for(int i=0;i<counter;i++){
        cout<<"Price For Item ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
    

}

int main(){
    Shop Bakery;
    int number;
    cout<<"Total Item that have to set price are :"<<endl;
    cin>>number;
    Bakery.init_Counter();
    for(int i=0;i<number;i++){
        Bakery.setPrice();
    }

    cout<<"Here is the Price of each Item set by you "<<endl;
    Bakery.dispalyPrice();


}
