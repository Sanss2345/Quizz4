#include <iostream>

void mostrarInventario(int oro, int pociones);
bool comprarPocion(int* oro, int* pociones, int precio);
void venderPocion(int* oro, int* pociones, int precioVenta);

int main(){
    int oro = 100, pociones = 2, precioCompra = 30, precioVenta = 15;
    std::cout<<"==== Inventario inicial ===="<<std::endl;
    mostrarInventario(oro, pociones);
    //Primera compra
    comprarPocion(&oro, &pociones, precioCompra);
    mostrarInventario(oro, pociones);
    //Segunda compra
    comprarPocion(&oro, &pociones, precioCompra);
    mostrarInventario(oro, pociones);
    //Tecera compra
    comprarPocion(&oro, &pociones, precioCompra);
    mostrarInventario(oro, pociones);
    //Vende 1 pocion 
    venderPocion(&oro, &pociones,precioVenta);
    mostrarInventario(oro, pociones);
    //Intenta comprar 1 pocion mas pero no tiene oro 
    comprarPocion(&oro, &pociones, precioCompra);
    mostrarInventario(oro, pociones);
}

void mostrarInventario(int oro, int pociones){
    std::cout<<"Oro: "<<oro<<" | Pociones: "<<pociones<<std::endl;
}

bool comprarPocion(int* oro, int* pociones, int precio){
    std::cout<<"Comprando pocion......";
    if(*oro<precio){
        std::cout<<"Oro insuficiente"<<std::endl;
        return false;
    }
    std::cout<<"Exito!"<<std::endl;
    *oro-=precio;
    *pociones+=1;
    return true;
}

void venderPocion(int* oro, int* pociones, int precioVenta){
    if(*pociones >=1){
        std::cout<<"Vendiendo pocion..."<<std::endl;
        pociones-=1;
        *oro +=precioVenta;
    }else{
        std::cout<<"No tienes pociones para vender!"<<std::endl;
    }
}


