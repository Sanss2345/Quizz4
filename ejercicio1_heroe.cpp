#include <iostream>
#include <string>

void mostrarEstado(std::string nombre, int hp, int maxHP);
void recibirDanio(int& hp, int dano);
void curar(int& hp, int cantidad, int maxHP);

int main(){
    std::string nombre="Arthas";
    int hp=100, maxHp=100;
    std::cout<<"=== Salud del heroe ==="<<std::endl;
    mostrarEstado(nombre,hp,maxHp); //Muestra estado inicial 
    std::cout<<nombre<<" recibe 30 de dano"<<std::endl;
    recibirDanio(hp,30); //recibe 30 de dano
    mostrarEstado(nombre,hp,maxHp);//Muestra estado luego de 30 dano
    std::cout<<nombre<<" recibe 50 de dano"<<std::endl;
    recibirDanio(hp,50); //recibe 50 de dano
    mostrarEstado(nombre,hp,maxHp);//Muestra estado luego de 50 dano
    std::cout<<nombre<<" se cura 40 de vida"<<std::endl;
    curar(hp,40,maxHp); //Se cura 40
    mostrarEstado(nombre,hp,maxHp);//Muestra estado luego de curarse 40 
    std::cout<<nombre<<" recibe 80 de dano"<<std::endl;
    recibirDanio(hp,80); //recibe 80 de dano
    mostrarEstado(nombre,hp,maxHp);//Muestra estado luego de 50 dano

}

void mostrarEstado(std::string nombre, int hp, int maxHP){
    std::cout<<nombre<<" - HP: "<<hp<<"/"<<maxHP<<std::endl;
}
void recibirDanio(int& hp, int dano){
    hp-=dano;
    if(hp<0){
        hp=0;
    }
}
void curar(int& hp, int cantidad, int maxHP){
    hp+=cantidad;
    if(hp>=maxHP){
        hp=maxHP;
    }
}
