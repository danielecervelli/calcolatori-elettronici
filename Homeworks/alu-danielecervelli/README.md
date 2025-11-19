[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/3sGZ3-8r)
# :control_knobs: ALU a 4 bit

<img alt="points bar" align="right" height="36" src="../../blob/status/.stats/points-bar.svg" />

Dovete progettare una semplice ALU che sia in grado di lavorare con operandi a 4 bit. La ALU è formata da una rete iterativa---non è necessario implementare ottimizzazioni basate sul parallelismo per questo homework. Si veda in fondo per indicazioni aggiuntive.

### Operazioni supportate

La ALU lavora su uno o due operandi ($a=\langle a3 \  a2 \ a1 \ a0 \rangle$ e $b=\langle b3 \ b2 \ b1 \ b0 \rangle$), a seconda dell'operazione che viene richiesta utilizzando un *opcode*. L'opcode è a 4 bit, decomposto nei bit $op0$, $op1$, $op2$, $op3$. Le operazioni da supportare sono riportate nella seguente tabella. Le operazioni logiche sono operazioni bit a bit.

| $op0$ | $op1$ | $op2$ | $op3$ |                Operazione                |
| :---: | :---: | :---: | :---: | :--------------------------------------: |
|   0   |   0   |   0   |   0   |        $a+b$ (somma senza segno)         |
|   0   |   0   |   0   |   1   | Shift a sinistra di una posizione di $a$ |
|   0   |   0   |   1   |   0   |               $a$ and $b$                |
|   0   |   1   |   0   |   0   |                $a$ or $b$                |
|   0   |   1   |   1   |   0   |               $a \oplus b$               |
|   1   |   0   |   0   |   0   |               $a \odot b$                |
|   1   |   0   |   1   |   0   |                 $a \vert b$              |
|   1   |   1   |   0   |   0   |             $a \downarrow b$             |
|   1   |   1   |   1   |   0   |              $\overline{a}$              |

Nel caso dell'operazione di shift, il valore in input di $b$ è una *don't care condition*. Nel caso di $\overline{a}$, $b$ può essere assunto forzato a zero. Il circuito restituisce in $cout$ il carry risultante dalla somma tra $a$ e $b$ oppure il bit più significativo estratto dall'operazione di shift a sinistra.

## Punteggi

Verranno assegnati i seguenti punti per le seguenti parti del compito risolte:

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/sum.svg" />  :heavy_plus_sign: Somma corretta |
| :----------------------------------------------------------- |
| Vengono assegnati **4 punti** se il circuito è in grado di calcolare correttamente la somma senza segno tra $a$ e $b$, aggiornando correttamente anche il bit di carry in uscita. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/shift.svg" />  :arrow_left: shift a sinistra di una posizione di $a$ corretto |
| :----------------------------------------------------------- |
| Vengono assegnati **4 punti** se il circuito è in grado di calcolare correttamente lo shift a sinistra di una posizione di $a$ ($b$ è una don't care condition quando si esegue uno shift). Il circuito deve utilizza il bit di carry per riportare il bit più significativo uscente. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/and.svg" /> :heavy_check_mark::heavy_check_mark: Ca​lcolo corretto dell'AND logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore dell'AND logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/or.svg" />:white_circle: :black_circle: Calcolo corretto dell'OR logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore dell'OR logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/xor.svg" />:white_circle: :black_circle: :white_circle: Calcolo corretto dello XOR logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore dello XOR logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/xnor.svg" />:white_check_mark: :heavy_plus_sign: :white_check_mark: / :heavy_multiplication_x: :heavy_plus_sign: :heavy_multiplication_x:  Calcolo corretto dell'XNOR logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore dell'XNOR logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/nand.svg" />:heavy_check_mark: :heavy_multiplication_x:  Calcolo corretto del NAND logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore del NAND logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/nor.svg" />:no_entry_sign: :white_circle: :white_circle:  Calcolo corretto del NOR logico |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore del NOR logico tra gli operandi $a$ e $b$. |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/not.svg" /> :white_check_mark: :arrow_right: :heavy_multiplication_x: Calcolo corretto della negazione di $a$ |
| :----------------------------------------------------------- |
| Vengono assegnati **2 punti** se il circuito è in grado di calcolare correttamente il valore di $\overline{a}$ (in questo caso $b$ in input deve valere sempre zero). |

| <img alt="activity status" align="right" height="24" src="../../blob/status/.stats/circuit_complexity.svg" /> 🤯 Complessità circuitale |
| :----------------------------------------------------------- |
| Se il circuito individuato è corretto ed il numero di componenti utilizzato è considerato ragionevole per questo circuito, vengono assegnati **20 punti**. |

Il *punteggio massimo* ottenibile con questo homework è quindi pari a 42.

## Come realizzare il circuito

La soluzione circuitale deve essere inserita all'interno del file `circuito.dig`, che può essere modificato utilizzando l'editor e simulatore di circuiti [Digital](https://github.com/hneemann/Digital). Il simulatore permette anche di testare localmente il circuito, pertanto potete verificare anche localmente la correttezza della soluzione proposta. Se la soluzione viene proposta in un file con *un nome differente*, il punteggio ottenuto sarà zero.

Nel file `circuito.dig` sono già specificati gli ingressi e le uscite del circuito. **Non** rinominare o eliminare questi terminali, altrimenti non sarà possibile valutare l'homework consegnato.

*Attenzione*: verranno considerate soltanto le soluzioni caricate nel branch `master`. Potete utilizzare altri branch se volete, ma per la consegna finale varrà soltanto quanto contenuto in `master`. L'autograder non funzionerà su altri branch.

## Indicazioni sulla realizzazione della soluzione

Si ricorda che una rete iterativa è del tipo:

![](./.github/templates/iterative.png)

Pertanto, è necessario che l'organizzazione del circuito sia composta da un modulo $M_n$ in grado di implementare le operazioni richieste (si veda sopra) su una coppia di bit degli operandi coinvolti. Tale modulo dovrà poi essere replicato 4 volte, per realizzare la rete iterativa completa.

**Non** saranno considerate valide soluzioni che utilizzano sommatori o shifter per supportare queste operazioni. In generale, subiranno una penalità (indipendentemente dal risultato del solutore) tutte le soluzioni che non sono perfettamente iterative. Una soluzione che utilizzi, oltre ai moduli $M_i$ indicati in figura sopra, dei circuiti combinatori aggiuntivi/esterni non è una rete perfettamente iterativa.  Tali controlli verranno fatti manualmente dal docente a valle della consegna.

Si consiglia di affrontare il problema per fasi. Ogni operazione richiesta può essere risolta con un sotto-circuito dedicato. Riconoscere delle ricorrenze nei circuiti può aiutare nella minimizzazione. L'utilizzo di ROM o PLA può aiutare *molto* nell'individuazione di una soluzione minima.
