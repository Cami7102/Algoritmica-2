# Bit

Es una estructura de datos que puede realizar actualizaciones de los elementos y calcular la suma de los prefijos en un arreglo de números de manera eficiente. Algunas ventajas sobre el Segment tree son el espacio, ya que utiliza mucho menos y además es una estructura de datos más fácil de implementar. 

![image](https://user-images.githubusercontent.com/80707476/130380037-a6954a4a-cdbc-4e47-8967-4b0f65d840a2.png)

Cada nodo responsable se encarga de mantener la suma de los valores de todos sus nodos dependientes. De esta manera, para calcular una suma en cualquier intervalo solo hay que tomar los valores en los nodos responsables que estén en el intervalo, y sumarlos, ya que estos comprimen en ellos la información de sus nodos dependientes.

## [Temas]
- [Bit](https://github.com/Cami7102/Algoritmica-2/blob/main/algoritmos/estructura_de_datos/Bit/bit)

## [Bibliografia]
- [Arbol de Fenwick](https://prodeportiva.wordpress.com/2013/02/17/arbol-de-fenwick/#:~:text=El%20%C3%81rbol%20de%20Fenwick%20%28tambi%C3%A9n%20conocido%20como%20%C3%81rbol,de%20datos%20muy%20eficiente%20para%20calcular%20sumas%20acumulativas.)
