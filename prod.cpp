#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int productID;
    string name;
    double price;
    int quantity;

public:
    
    Product() {
        productID = 0;
        name = "Generic Product";
        price = 0.0;
        quantity = 0;
    }

    Product(int id, string n, double p, int q) {
        productID = id;
        name = n;
        price = p;
        quantity = q;
    }

   
    Product(const Product &prod) {
        productID = prod.productID;
        name = prod.name;
        price = prod.price;
        quantity = prod.quantity;
    }

  
    double calculateTotalCost() {
        return price * quantity;
    }


    void display() {
        cout << "ID: " << productID 
             << " | Name: " << name 
             << " | Price: $" << price 
             << " | Quantity: " << quantity 
             << " | Total Cost: $" << calculateTotalCost() << endl;
    }
};

int main() {
    
    Product prod1;                            
    Product prod2(501, "Wireless Mouse", 25.50, 4); 
    Product prod3 = prod2;                   

    cout << "Product 1 (Default Constructor):" << endl;
    prod1.display();

    cout << "\nProduct 2 (Parameterized Constructor):" << endl;
    prod2.display();

    cout << "\nProduct 3 (Copy Constructor):" << endl;
    prod3.display();

    return 0;
}
