
## Switch

Exite algo llamado latencia: que es la suma de retardos parciales al momento de transmitir datos... estos datos viajan en paquetes (tramas).

Pues resulta entonces que en dado caso que sea necesaria una estructura de control por selección if-else-if se ve ineficiente.

```c

if(condicion_1){
    //Sentencia...
}else if(condicion_2){
    //Sentencia...
}else if(condicion_3){
    //Sentencia...
}else{
    //Sentencia...
}

```
" Mucha de la tecnología de hardware que usamos hoy en día se atorpece debido a que está construida con un software ineficiente... " -Director de tecnología de Qualcomm

---
### La ventaja de switch es que va directo a un valor(es) que buscamos que se cumplan y en seguida se rompe su estructura para continuar...
---
* Sintaxis de switch:

```c

int opcion; // Selector

switch(opcion){
    case 1: // n sentencias
        break;
    case 2: // n sentencias
        break;
    case 3: // n sentencias
        break;    
    default:
        // n sentencias...
        break;
}

```


