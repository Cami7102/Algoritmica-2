# Union Find

Es una estructura de datos que modela una colección de conjuntos disjuntos (disjoint-sets) y esta basado en 2 operaciones:

Find( A ): Determina a cual conjunto pertenece el elemento A. Esta operación puede ser usada para determinar si 2 elementos están o no en el mismo conjunto.

Union( A, B ): Une todo el conjunto al que pertenece A con todo el conjunto al que pertenece B, dando como resultado un nuevo conjunto basado en los elementos tanto de A como de B.

![image](https://user-images.githubusercontent.com/80707476/130380694-6fa0dabd-7a99-46e3-9458-a7ceadb02ba8.png)

La idea consiste en que todos los nodos dentro de una componente conexa tengan la misma etiqueta, y dos nodos en diferentes componentes conexas tengan distinta etiqueta, así bastará comparar las etiquetas para saber si están o no en la misma componente conexa.

## [Temas]
- [Union Find](https://github.com/Cami7102/Algoritmica-2/blob/main/algoritmos/estructura_de_datos/B%C3%BAsqueda%20de%20uni%C3%B3n/union_find)

## [Bibliografia]
-[Que es?](https://jariasf.wordpress.com/2012/04/02/disjoint-set-union-find/#:~:text=Union%20Find%20es%20una%20estructura%20de%20datos%20que,elementos%20est%C3%A1n%20o%20no%20en%20el%20mismo%20conjunto.)
-[Datos](https://chococontest.wordpress.com/2011/01/05/union-find/)
