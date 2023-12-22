/*Solução: Para esvaziar um vaso contendo N flores, primeiro verificamos se o vaso
está vazio. Se o vaso não está vazio, tiramos uma flor. Temos agora que esvaziar um
vaso contendo N − 1 flores.*/

void esvaziarVaso(int flores){
 if(flores > 0){
//remove uma flor
esvaziarVaso(flores – 1);
 }
}