🃥 Blackjack (21) en C++
Un juego de casino clásico implementado en C++ diseñado para múltiples jugadores y con reglas del Blackjack americano.

INSTRUCCIONES
En este juego el objetivo es ganarle al "Crupier" obteniendo una mano con un valor más alto que el suyo sin superar 21.
Al inicio, todos reciben dos cartas: tú ves las tuyas completas, pero el dealer solo muestra una. Las cartas valen su número (el 2 vale 2, el 3 vale 3…), las figuras (J, Q, K) valen 10 y el As puede valer 1 u 11, lo que más te convenga.

En tu turno, puedes:

🂡 Pedir carta (para acercarte a 21).

🂡 Plantarte (quedarte con lo que tienes).

🂡 Doblar (aumentar tu apuesta y recibir solo una carta más).

🂡 Dividir (si tienes dos cartas iguales, separarlas en dos manos).


El dealer juega después: si su suma es 16 o menos, pide carta; si es 17 o más, se planta. Ganas si:

Tu mano es mejor que la del dealer (sin pasarte de 21).

El dealer se pasa de 21.

Sacas Blackjack (un As + una carta de 10 en las dos primeras cartas).

Pierdes si te pasas de 21 o si el dealer tiene mejor mano. Si empatas, recuperas tu apuesta.
