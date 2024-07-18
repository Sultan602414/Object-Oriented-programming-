

class Deep
{
private:
    int a , b , c;
    int *p = &c;
public:
    void setvalue (int x , int y);
    void print();
    Deep (int x, int y , int z);
    Deep (Deep & abc);

};
