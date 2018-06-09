--Divisores de um número
divisores n = [x| x <- [1..n], mod n x == 0]

--Verificar ordem crescente de uma lista
ehcrescente xs = [xs!!i | i <- [0..(length xs-2)], xs!!i > xs!!(i+1)] == []

--Verifica se um dado inteiro positivo é primo
ehprimo n = length (divisores n) == 2