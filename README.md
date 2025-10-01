# Projeto de Busca Binária em C

Este projeto implementa um algoritmo em **C** para calcular a altura ideal de blocos retangulares a partir do volume disponível, número de peças e dimensões da base.  
A solução utiliza **busca binária** para encontrar a altura de corte adequada.

---

## Estrutura
- `principal.c` → programa principal  
- `busca.c` → implementação das funções auxiliares  
- `busca.h` → cabeçalhos

---

## Compilação
Para compilar diretamente:
```bash
gcc principal.c busca.c -o exe -Wall
```

Se preferir compilar em etapas:
```bash
gcc -c busca.c -Wall
gcc -c principal.c -Wall
gcc busca.o principal.o -o exe
```

---

## Execução
A entrada é lida do terminal.  
Exemplo:
```bash
./exe < 1.in > 1.out
```

Onde:
- `input.in` contém os casos de teste (número de blocos, volume total, fator x).  
- A saída é gravada em `output.out`.

---

## Exemplo de Entrada
```
4
12 989736 36.9
5 900000 40.716
3 88206 15
27 40132.7 0
```

## Exemplo de Saída
```
30.287
54.289
Altura do corte igual ou maior que a camara de exposicao
Impossivel definir a altura do corte
```

---

## Licença
Este projeto é de uso livre para fins acadêmicos e de aprendizado.
