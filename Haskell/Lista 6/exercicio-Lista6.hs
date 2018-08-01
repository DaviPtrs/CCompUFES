--A) prefixo com list comprehension 
prefixo' xs ys = xs == inicioYS
    where
        inicioYS = [ys!!i | i<-[0..(length xs)-1]]

--prefixo com recursão
prefixo _ [] = False
prefixo [] _ = True
prefixo (x:xs) (y:ys) = 
    if (x:xs) == (y:ys) then
        True 
    else
        (x==y) && prefixo xs ys 

--B) sufixo por list
sufixo' xs ys = xs == finalYS
    where
        finalYS = [ys!!i | i<-[sufixoLen..(length ys)-1]]
        sufixoLen = (length ys) - (length xs)


--prefixo com recursão
sufixo _ [] = False
sufixo [] _ = True
sufixo xs ys = 
    if xs == ys then
        True 
    else
        ((last xs) == (last ys)) && sufixo (init xs) (init ys)

--C) Sub-lista recursão (ESTE LIXO NÃO FUNCIONA)
sublista _ [] = False
sublista (x:xs) (y:ys) = 
        if x == y then
            sublistaRec (x:xs) (y:ys)
        else
            sublista (x:xs) ys
    where
        sublistaRec [] _ = True
        sublistaRec _ [] = False
        sublistaRec (x:xs) (y:ys) = 
            if x==y then
                x==y && sublistaRec xs ys
            else
                sublista (x:xs) ys
                    
