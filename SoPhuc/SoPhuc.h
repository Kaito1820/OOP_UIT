#pragma
typedef class SoPhuc{
private:
    float soThuc;
    float soAo;
public:
    SoPhuc(const SoPhuc &obj){
        
    }
    void input();
    void output();
    bool modulo();
    float getSoThuc(){
        return soThuc;
    }
    float getSoAo(){
        return soAo;
    }
    void Tong(SP a, SP b);
    void nhanK();
    void Nhan(SP a, SP b);
} SP;