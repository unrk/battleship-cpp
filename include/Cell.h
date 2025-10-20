#ifndef CELL_H
#define CELL_H

class Ship;

class Cell {
private:
    int x;
    int y;
    bool hasShip;
    bool isHit;
    Ship* ship;

public:
    Cell(int x = 0, int y = 0);
    
    // Getters
    int getX() const { return x; }
    int getY() const { return y; }
    bool getHasShip() const { return hasShip; }
    bool getIsHit() const { return isHit; }
    Ship* getShip() const { return ship; }
    
    // Méthodes principales
    bool receiveShot();
    bool isEmpty() const;
    char getDisplayChar(bool isOwn) const;
    
    // Setters
    void setShip(Ship* s);
    void setHit(bool hit) { isHit = hit; }
};

#endif
