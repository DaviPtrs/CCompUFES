------------------------------------------MÓDULOS------------------------------------------
div5 x = (mod x 5)==0 --Verifica se X é divisível por 5
div3 x = (mod x 3)==0 --Verifica se X é divisível por 3
chkaP x a b = (x>a) && (x<b) --Verifica se o valor P está no intervalo aberto de A e B
chkP x a b = (x>=a) && (x<=b) --Verifica se o valor P está no intervalo fechado de A e B
disteu [xa,ya] [xb,yb] = sqrt(xb - xa)^2 + (yb-ya)^2 --Distância entre 2 pontos no ponto
mreta [x1,y1] [x2,y2] = (y2-y1)/(x2-x1) --Ângulo da reta
ynox [x1,y1] [x2,y2] = (mreta [x1,y1] [x2,y2])*(x2-x1)+y1
-------------------------------------------------------------------------------------------

--Verificar se um número pertence ao intervalo (0,100) e é divisível por 3 e por 5
inter35 x = (chkaP x 0 100) && (div3 x) && (div5 x)
--Operador Ou (||) exclusivo
oux x y = (x||y) && not(x && y)

--Número total de dias da execução de um projeto
diasproj di mi ai df mf af = if (mi==mf) && (ai==af) then
                                    df-di
                                    else (df-di) + (msdias mf - msdias mi) + (ansdias af - ansdias ai)
                            where
                                msdias mes = mes*30
                                ansdias ano = ano*360

--Analisa se 3 medidas dadas formam um triângulo ou não
triang a b c    | (a<(b+c)) && (b<(a+c)) && (c<(a+b)) = putStrLn "As medidas PODEM formar um triângulo!"
                | otherwise = putStrLn "As medidas NÃO podem formar um triângulo!"

--Pertinência triângulo
pertriang [x,y] [ex,ey] [dx,dy] = (chkP x ex dx) && (chkP y dy ey)

--Pertinência Losângulo 
pertlosang [xe,ye] [xs,ys] [xp,yp] = yp <= (ynox [xe,ye] [xs,ys]) && (yp >= (ynox [xe,ye] [xs,(ys-2*ye)])) && (yp <= (ynox [(xe+2*xs),ye] [xs,ys])) && yp >= ynox [xe,ye] [xs,(ys-2*ye)]    

--Pertinência Círculo
pertcirc r [xc,yc] [xp,yp] = chkP (disteu [xc,yc] [xp,yp]) 0 r

