------------------------------------------------MÓDULOS--------------------------------------------------
div5 x = (mod x 5)==0 --Verifica se X é divisível por 5
div3 x = (mod x 3)==0 --Verifica se X é divisível por 3
chkaP x a b = (x>a) && (x<b) --Verifica se o valor P está no intervalo aberto de A e B
chkP x a b = (x>=a) && (x<=b) --Verifica se o valor P está no intervalo fechado de A e B
disteu [xa,ya] [xb,yb] = sqrt(xb - xa)^2 + (yb-ya)^2 --Distância entre 2 pontos no ponto
ynop [x,y] [xe,ye] [xs,ys] = ((ys-ye)/(xs-xe))*(x-xe)+ye --Tira o y de um ponto em relação a uma reta
---------------------------------------------------------------------------------------------------------

--A)Verificar se um número pertence ao intervalo (0,100) e é divisível por 3 e por 5
inter35 x = (chkaP x 0 100) && (div3 x) && (div5 x)
--B)Operador Ou (||) exclusivo
oux x y = (x||y) && not(x && y)

--C)Número total de dias da execução de um projeto
diasproj di mi ai df mf af = if (mi==mf) && (ai==af) then
                                    df-di
                                    else (df-di) + (msdias mf - msdias mi) + (ansdias af - ansdias ai)
                            where
                                msdias mes = mes*30
                                ansdias ano = ano*360

--D)Analisa se 3 medidas dadas formam um triângulo ou não
triang a b c | (a<(b+c)) && (b<(a+c)) && (c<(a+b)) = putStrLn "As medidas PODEM formar um triângulo!"
             | otherwise = putStrLn "As medidas NÃO podem formar um triângulo!"

--E)
--Pertinência Retângulo
pertRet [x,y] [ex,ey] [dx,dy] = (chkP x ex dx) && (chkP y dy ey)

--Pertinência Losângulo
pertlosang [x,y] [xe,ye] [xs,ys] = (y <= retaES) && (y >= retaESi) && (y <= retaEiS) && (y >= retaEiSi)
                                where
                                    pontoP = [x,y]
                                    retaES =  ynop pontoP [xe,ye] [xs,ys]
                                    retaESi = ynop pontoP [xe,ye] [xs,(ys-2*ys)]
                                    retaEiS = ynop pontoP [(xe-2*xe),ye] [xs,ys]
                                    retaEiSi = (ynop pontoP [(xe-2*xe),ye] [xs,(ys-2*ys)])
--Pertinência Círculo
pertcirc r [xc,yc] [xp,yp] = chkP (disteu [xc,yc] [xp,yp]) 0 r

--F)Relação entre 3 números
relaNum a b c | igualn3 a b c = putStrLn "Os três são iguais!"
                | igual2n3 a b c = putStrLn "Apenas dois são iguais!"
                | otherwise = putStrLn "Os três são diferentes!"
                
                where
                    igualn3 a b c = (a==b) && (b==c)
                    igual2n3 a b c = igual2a2 a b c || igual2a2 a c b || igual2a2 b c a
                    igual2a2 a b c = (a==b) && (not(b==c))
                    
--G) Pertinência do retângulo no plano
pertRetPlan [ex,ey] [dx,dy] | Chk1Q [ex,ey,dx,dy] || Chk2Q [ex,ey,dx,dy] || Chk3Q [ex,ey,dx,dy] || Chk4Q [ex,ey,dx,dy] = 1
                            | 
                            where
                                chk1Q [ex,ey,dx,dy] = ChkQ1 [ex,ey,dx,dy] && not(chkQ234 [ex,ey,dx,dy]) 
                                chk2Q [ex,ey,dx,dy] = ChkQ2 [ex,ey,dx,dy] && not(chkQ134 [ex,ey,dx,dy]) 
                                chk3Q [ex,ey,dx,dy] = ChkQ3 [ex,ey,dx,dy] && not(ChkQ1 [ex,ey,dx,dy] || ChkQ2 [ex,ey,dx,dy] || ChkQ4 [ex,ey,dx,dy])
                                chk4Q [ex,ey,dx,dy] = ChkQ4 [ex,ey,dx,dy] && not(ChkQ1 [ex,ey,dx,dy] || ChkQ3 [ex,ey,dx,dy] || ChkQ2 [ex,ey,dx,dy])
                                chkQ123 [ex,ey,dx,dy] = chkQ2 [ex,ey,dx,dy] || chkQ3 [ex,ey,dx,dy] || chkQ4 [ex,ey,dx,dy]
                                chkQ234 [ex,ey,dx,dy] = 
                                chkQ134 [ex,ey,dx,dy] = hkQ1 [ex,ey,dx,dy] || chkQ3 [ex,ey,dx,dy] || chkQ4 [ex,ey,dx,dy]
                                chkQ124 [ex,ey,dx,dy] = 
                                chkQ1 [ex,ey,dx,dy] | (ex >= 0) && (ey >= 0) || (dx >= 0) && (dy >= 0) = True
                                                    | otherwise = False
                                chkQ2 [ex,ey,dx,dy] | ((ex <= 0) && (ey >= 0)) || ((dx <= 0) && (dy >= 0)) = True
                                                    | otherwise = False
                                chkQ3 [ex,ey,dx,dy] | ((ex <= 0) && (ey <= 0)) || ((dx >= 0) && (dy >= 0)) = True
                                                    | otherwise = False
                                chkQ4 [ex,ey,dx,dy] | ((ex >= 0) && (ey <= 0)) || ((dx >= 0) && (dy >= 0)) = True
                                                    | otherwise = False
        
        

