
#include<string>
using std::string;
class Dot
{
private:
    /* data */
    float x,y,r;
    string color;
protected:
    float get_x(){return x;}
    float get_y(){return y;}
    float get_r(){return r;}
    
public:
    Dot(float x, float y){
        this->x = x;
        this->y = y;
    };
    void makeDot(float mouse_x, float mouse_y){

    }
    ~Dot();
};
void Dot::makeDot(float mouse_x, float mouse_y){
    
}

