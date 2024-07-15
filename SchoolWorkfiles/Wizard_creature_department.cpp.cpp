/*==========================================================

 Title:     Assignment 12 - C++ Wizard Creature Department
 Course:  	CSC 1100
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <string>

using namespace std;

//Write classes here...
class Creature{
    protected:
        string name;
        int quantity;
        string creature_type;
    public:
        Creature() :  quantity(0),  creature_type("unknown"){}
        
        Creature(const string& name, int quantity): name(name), quantity(quantity),  creature_type("unknown"){}
        
        void setName(const string& name){
            this->name = name;
        }
        string getName() const {
            return name;
        }
        void setQuantity(int quantity){
            this->quantity = quantity;
        }
        int getQuantity() const {
            return quantity;
        }
        virtual void printStatement() const {
            cout << "There's " << quantity << " creatures named " << name << endl;
        }
    
};


class Phoenix : public Creature{
    private:
        string color;
    
    public: 
        Phoenix() : color(""){}
        
        Phoenix(const string& name, int quantity, const string& color) : Creature(name, quantity), color(color){}
        
        void setColor(const string& col){
            this->color = color;
        }
        string getColor() const{
            return color;
        }
        virtual void printStatement() const override{
            cout << "There's " << quantity <<" golden phoenixes named " << name << endl;
        }
    
};
class Basilisk : public Creature{
public:
    Basilisk(){
        quantity = 1;
    }
    
    Basilisk(const string& name) : Creature(name, 1){}
    
    virtual void printStatement() const override{
        cout << "There's " << quantity << " basilisk named " << name << endl;
    }
};

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];
    string name;
	// Write loop here to record user input as names
    // and set third name to “Clover”
    for(int i = 0; i < 3; ++i){
        cin >> name;
        nameArr[i] = name;
        if(i == 2){
            nameArr[i] = "Clover";
        }
    }
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

