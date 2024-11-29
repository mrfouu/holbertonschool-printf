<div align="center">
<img src="https://miro.medium.com/v2/resize:fit:1400/1*is7_2D8TSgViW5dntlGkQw.png">
</div>

The project to create a `printf` function consists of reimplementing this standard function in C, which allows formatted data to be displayed on standard output (usually the console). The goal is to recreate a simplified version of `printf` without using the standard `<stdio.h>` library and its built-in functions.
### Table of Contents
1. Introduction
2. Requirements
3. Installations
4. Usages
5. Authors
### Requirements

1. **Éditeur de texte ou IDE :** Pour écrire et compiler votre code C, vous pouvez utiliser des éditeurs comme `vim`, `nano`
2. Install minimun Ubuntu 20, github
### installations
1. Clone this github
```
https://github.com/mrfouu/holbertonschool-printf
```
2. Command compilation _printf source file
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
3. si besoin d'aide faite
```
man man_3_printf
```
## Macro and functions allowed :white_check_mark:
`write`
`malloc`, `free`
`va_start`, `va_end`, `va_copy`, `va_arg`
### Test
```

#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
        _printf("hello C25\n");
        _printf("i don't have %d iphone\n",10);
        _printf("my name is not  %s\n", "Athur");
        _printf("I have %i laughed at the final result which is equivalent to a %c\n", 50, 'C');
        _printf("let's go for 0 %%\n");
        return(0);
}
```

```
STDOUT
hello C25
i don't have 10 iphone
my name is not Arthur
I have 50 laughed at the final result wich is equivalent to a C
lets go for 0 %
```
### FLOWCHART

```mermaid
graph TD
    A[Démarrer printf] --> B[Parcourir format]
    B --> C{Est-ce un caractère % ?}
    C -->|Oui| D[Identifier spécificateur et récupérer argument]
    C -->|Non| E[Ajouter caractère au résultat final]
    D --> F{Spécificateur de format ?}
    F -->|%d| G[Convertir entier en chaîne et ajouter]
    F -->|%s| H[Ajouter chaîne]
    F -->|%c| I[Ajouter caractère]
    F -->|%f| J[Convertir flottant en chaîne et ajouter]
    F -->|%%| K[Ajouter %]
    F -->|autre| L[Ajouter % et spécificateur]
    F -->|aucun soécificateur| M[aucun spécificateur trouver]
    G --> M[Passer au caractère suivant]
    H --> M
    I --> M
    J --> M
    K --> M
    L --> M
    E --> M
    M --> N{Est-ce la fin du format ?}
    N -->|Oui| O[Afficher résultat final]
    N -->|Non| B
```

### Authors
Bryan Weinegaessel [](https://github.com/mrfouu)

Hugo Bailly [](https://github.com/hugo-b-fx)
