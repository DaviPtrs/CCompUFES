--------------------------------------MÓDULOS----------------------------------
bissexto ano = if (mod ano 4 == 0) && (mod ano 100 /= 0) || (mod ano 400 == 0) then
                    True
                else
                    False

menorXS xs | length xs == 1 = xs
           | head xs <= last xs = menorXS (init xs)
           | otherwise = menorXS (tail xs) 

maiorXS xs | length xs == 1 = xs
           | head xs >= last xs = maiorXS (init xs)
           | otherwise = maiorXS (tail xs) 

{--Exercício 1: Teste as seguintes funções e comente o seu comportamento.
a)--}
foo0 = compare 2 (mod 17 2) == EQ  
{--A classe de tipo Ordering tem como valores EQ, LT e GT, significando 
igual, menor que e maior que. 
A função compare compara dois valores e determina se eles são iguais (EQ), 
se o primeiro é menor que o segundo (LT) ou se é maior que o segundo (GT).--}

--b) 
foo1 = x + y
    where x = y
          y = 2
{-- Soma as variáveis x e y, nas quais os valores são definidos localmente. X e Y são
ditos iguais e Y é dito como igual a 2, portanto, se x=y então x=2, se y=2.--}

--c) 
--foo2 = x + y
--    where x = y 
--        where y = 2
{-- Soma as variáveis x e y, nas quais os valores são definidos localmente. X e Y são
ditos iguais e Y é dito como igual a 2, portanto, se x=y então x=2, se y=2. 
A diferença da foo2 para foo1 é que na foo2, existe uma definição local para a definição
local da função. Sendo Y=2 um valor somente válido para a definição x = y, não
válido para nenhuma função que venha depois da primeira definição local, porém
na prática isso gera um erro, pois não pode haver where dentro de where--}

--d)
foo3 x = if( x <= 30 ) then 'D'
         else if( x <= 50 ) then 'C'
         else if( x <= 80 ) then 'B'
         else 'A'
{--
Imprime 4 opções de letra de acordo com o intervalo a qual o valor X pertence.
--}

--I)Escreva descrições usando listas, para as seguintes listas constantes:

--a) múltiplos de 5 maiores que 0 e menores que 80;
mult5a80 = [5,10..80]

--b) meses de um ano:
mesesAno = ["janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"]

--c) numero de dias por mês
diaspMes::Int->[Int]
diaspMes ano = if bissexto ano then
                  [31,29,31,30,31,30,31,31,30,31,30,31]
               else
                  [31,28,31,30,31,30,31,31,30,31,30,31]

--d) Dias da semana
diasSemana = ["Segunda","Terça","Quarta","Quinta","Sexta","Sábado","Domingo"]

--Disciplinas
disciplinas = ["Cálculo 1","Álgebra Linear","IntroComp","ATC 1","Programação 1"]

{--II) 
Escreva as listas resultantes das descrições abaixo e depois compare com a resposta da avaliação 
da lista no interpretador:--}

--a) [3*5, 4*5+2.. 100 - 5]
--Ghci: [15,22,29,36,43,50,57,64,71,78,85,92]
--Faz a mesma coisa que a lista [15,22..95]

--b) [2, 2*2 .. 4 * 5]
--Ghci: [2,4,6,8,10,12,14,16,18,20]
--Faz a mesma coisa que a lista [2,4..20]

--c) f x r t = [x, x + r .. t] 
--se dado f 5 2 10 então [5,7,9]
--Portanto, x é o início, r a razão e t o término.

--III

--A) Menor valor de uma lista
menorVXS xs = head (menorXS xs)

--B) Dupla com o maior e menor valor de uma lista
maior_menorXS::[Integer]->(Integer,Integer)
maior_menorXS xs = (head (menorXS xs),head (maiorXS xs))

--C) Multiplos de um número até um limite
multiNum num lim = [num,num+num..lim]

--D) Dividir lista no meio
divideLista xs = if length xs ==0 then
                    ([],[])
                  else (take meio xs,drop meio xs)
                    where
                        meio = div (length xs) 2
--E) Duplicar itens de uma lista
duplicaLista xs = [xs!!(div n 2) | n <- [0..2*(length xs)-1]]

--F) união de duas listas
uniaoXYS xs ys = xs ++ ys