/*O uso de vários comandos return é útil quando o retorno da função está 
relacionado a determinada condição dentro dela. Veja o exemplo da Figura 9.10.*/


int maior(int x, int y){
 if(x > y)
return x;
 else
return y;
}