--1) Somatório dos elementos de uma lista
somaXS [] = 0
somaXS (x:xs) = x+(somaXS xs)

--2) O maior valor de uma lista
maiorXS [n] = n
maiorXS (p:x:xs) = 
    if p > x then
        maiorXS (p:xs)
    else
        maiorXS (x:xs)

--3) Operador lógico Ou
logicOR [] = False
logicOR (x:xs) = 
    if x == True then
        True
    else
        logicOR xs

--4) Operador lógico E

logicAND [] = True
logicAND (x:xs) =
    if x == False then
        False
    else
        logicAND xs

--5) ocorrência de um elemento numa lista
elemXS e [] = False
elemXS e (x:xs) = 
    if e == x then
        True
    else
        elem e xs

--6) Extrai menores que um valor k
filtraMenor k [] = []
filtraMenor k (x:xs) = 
    if k > x then
        x:filtraMenor k xs 
    else
        filtraMenor k xs 

--7) Extrair elementos dado um predicado
filtraPred cond [] = []
filtraPred cond (x:xs) =
    if (cond x) then
        x:filtraPred cond xs
    else
        filtraPred cond xs

--8) takeWhile Recursivo
tWhile cond (x:xs) =
    if (cond x) then
        x:tWhile cond xs
    else
        []

--9) dropWhile Recursivo

dWhile cond (x:xs) =
    if (cond x) then
        dWhile cond xs
    else
        (x:xs)

--10) inverter posições
inverteXS [] = []
inverteXS (x:xs) = (inverteXS xs)++[x]

--11) intersecção de listas
intersectXS _ [] = []
intersectXS [] _ = []
intersectXS (x:xs) ys = 
    if elem x ys then
        x:intersectXS xs ys
    else
        intersectXS xs ys

--12) união de listas
uniaoXS xs [] = xs
uniaoXS [] ys = ys
uniaoXS (x:xs) ys = 
    if elem x ys then
        uniaoXS xs ys
    else
        x:uniaoXS xs ys

--13) prefixo sem recursão
prefixo' xs ys = xs == inicioYS
    where
        inicioYS = take (length xs) ys

--13) prefixo com recursão
prefixo _ [] = False
prefixo [] _ = True
prefixo (x:xs) (y:ys) = (x==y) && prefixo xs ys 

--14) Verificar se xs é subconjunto de ys
subconj [] _ = True
subconj _ [] = False
subconj (x:xs) ys =
    if elem x ys then
        subconj xs ys
    else
        False

--15) Insere elemento sem desordenar
insord p [] = [p]
insord p (x:xs) = if p < x then 
                        p:(x:xs)
                    else 
                        x:(insord p (xs))

--16) Ordena uma lista
quicksort [] = []
quicksort [x] = [x]
quicksort (x:xs) = (quicksort menor) ++ [x] ++ (quicksort maior)
                where
                    menor  = filter (< x) xs
                    maior = filter (>= x) xs