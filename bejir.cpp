#include <iostream>
#include <cmath>
#include <tuple>
#include <vector>

using namespace std;

class Dot{
    private:
        double x;
        double y;
    public:
        Dot(double x, double y){
            this->x = x;
            this->y = y;
        };
        void print(){
            cout << "[" << x << "," << y << "]";
        }
};

class Line{
    private:
        vector<Dot> dotlist;
        int neff;
    public:
        Line(){
            neff = 0;
        }
        
        void show(){
            for (int i = 0; i < neff; i++) {
                dotlist[i].print();
            };
        }

        Line& operator+=(const Dot& titik){
            this->dotlist.push_back(titik);
            neff++;
            return *this;
        }       

};

int main() {
    Line garis;

    garis += Dot(0,0);
    garis += Dot(1,1);
    garis.show();
    }