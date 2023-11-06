#include "Transaction.h"
#include "Item.h"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>


Transaction::Transaction(const Item& i, double cost, TransactionType t, const std::string& d)
    : item(i), amount(cost), type(t), date(d) {}

Item Transaction::getItem() const {
    return item;
}

double Transaction::getAmount() const {
    return amount;
}

TransactionType Transaction::getType() const {
    return type;
}

std::string Transaction::getDate() const {
    return date;
}

double Transaction::getTotalCost() const {
    if (type == TransactionType::PURCHASE) {
        return amount * item.getQuantity();
    }
    return 0.0;
}

double Transaction::getTotalRevenue() const {
    if (type == TransactionType::SALE) {
        return amount;
    }
    return 0.0;
}
