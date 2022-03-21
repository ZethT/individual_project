class PhsicEngineGUI
{

private:
    /* data */
    float width = 200, height=200, speed = 1;
protected:
    float get_height(){ return height;}
    float get_width(){ return width;}
    float get_speed(){ return speed;}
    void set_height( float height){this->height = height;}
    void set_width( float height){this->width = width;}
    void set_speed( float height){this->speed = speed;}
public:

    PhsicEngineGUI();
    PhsicEngineGUI(float width,float height){
        this->width = width;
        this->height = height;
    };
    PhsicEngineGUI(float width,float height,float speed){
        this->width = width;
        this->height = height;
        this->speed = speed;
    }
    ~PhsicEngineGUI(){};
};

