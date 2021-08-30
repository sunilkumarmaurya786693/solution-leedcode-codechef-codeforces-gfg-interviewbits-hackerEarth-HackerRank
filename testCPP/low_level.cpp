#include <unordered_map>
#include <vector>
#include <string>
#include <assert.h>

using namespace std;

class Product
{
public:
    virtual float getPrice() = 0;
};

class Water : public Product
{
public:
    float getPrice()
    {
        return 1.0;
    }
};

class Coke : public Product
{
public:
    float getPrice()
    {
        return 2.0;
    }
};

class Payment
{
public:
    virtual float checkout(Product *p) = 0;
};

class CardPayment : public Payment
{
public:
    float checkout(Product *p)
    {
        return p->getPrice() * 0.8;
    }
};

class CashPayment : public Payment
{
public:
    float checkout(Product *p)
    {
        return p->getPrice() * 1;
    }
};

class VendingMachine
{
private:
    unordered_map<string, Product *> slots;

    int capacity;
    int pay;

public:
    VendingMachine(int cap) : capacity(cap){};

    bool addProduct(string idx, Product *p)
    {
        if (slots.size() >= capacity)
        {
            return false;
        }
        slots.insert({idx, p});

        return true;
    }

    Product *order(string idx)
    {
        auto result = slots[idx];
        if (result)
        {
            slots.erase(idx);
        }

        return result;
    }

    float checkout(vector<Product *> prod, Payment *pay)
    {
        float total = 0;
        for (auto p : prod)
        {
            total += pay->checkout(p);
        }

        return total;
    }
};

class Customer
{
private:
    VendingMachine *vm;

    vector<Product *> cart;

public:
    Customer(VendingMachine *v) : vm(v) {}

    bool select(string idx)
    {
        Product *p = vm->order(idx);

        if (p)
        {
            cart.push_back(p);
            return true;
        }

        return false;
    }

    float checkout(Payment *payment)
    {
        return vm->checkout(cart, payment);
    }
};

int main()
{
    auto w1 = new Water();
    auto w2 = new Water();
    auto c1 = new Coke();
    auto c2 = new Coke();

    auto vm = new VendingMachine(5);
    vm->addProduct("A1", w1);
    vm->addProduct("A2", w2);
    vm->addProduct("A3", c1);
    vm->addProduct("A4", c2);

    Customer *customer = new Customer(vm);
    customer->select("A1");
    customer->select("A2");

    auto card = new CardPayment();
    assert(abs(customer->checkout(card) - 1.6) < 1e-6);

    return 0;
}

class VendingMachine
{
private:
    friend class Worker;

    unordered_map<string, Product *> slots;

    void display(string s)
    {
        cout << s << endl;
    }
    void display(float price)
    {
        display("$" + to_string(price));
    }

    void vendProduct(Product *p)
    {
        p->qty--;
    }

public:
    void displayPrice(string key)
    {
        auto it = slots.find(key);
        if (it == slots.end())
            display("Invalid Selection");
        else
            display(it->second->getPrice());
    }
    void displayName(string key)
    {
        auto it = slots.find(key);
        if (it == slots.end())
            display("Invalid Selection") else display(it->second->name);
    }

    bool purchase(string key, Payment *pay)
    {
        auto it = slots.find(key);
        if (it == map.end())
        {
            display("Invalid Selection");
            return false
        }
        if (it->second->qty <= 0)
            return false;

        pay->makePayment(it->second->getPrice());
        vendProduct(it->second);
    }
};

class Worker : public Person
{
public:
    bool addProduct(VendingMachine *vm, Product *p, string key)
    {
        if (vm->slots.find(key) != slots.end())
            return false;

        vm->slots[key] = p;
        return true;
    }
    bool restock(VendingMachine *vm, string key, int quantity)
    {
        // error check
        Product *p = vm->slots[key];

        if (p->capacity < p->qty + quantity)
            return false;
        p->qty += quantity;
        return true;
    }

}

class Product
{
private:
    int qty;
    float price;
    string name;

public:
    string getName() { return name; }
    float getPrice() { return price; }
}

class Person
{
private:
    string name;
    CreditCard *card;
    Cash *cash;

public:
    bool makeSelection(VendingMachine *vm, string key)
    {
        vm->purchase(key, cash);
    }
};

class Payment
{
public:
    virtual bool makePayment(float amount) = 0;
}

class Cash : public Payment
{
private:
    float value;

public:
    Cash(float amount) : value(amount) {}
    bool makePayment(float amount)
    {
        if (value < amount)
            return false;
        else
            value -= amount;
        return true;
    }
}

class CreditCard : public Payment
{
private:
public:
    bool makePayment(float int)
    {
        // send request to bank...
    }
}