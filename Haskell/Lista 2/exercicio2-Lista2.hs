------------------------------------------------MÓDULOS--------------------------------------------------
div5 x = (mod x 5)==0 --Verifica se X é divisível por 5
div3 x = (mod x 3)==0 --Verifica se X é divisível por 3
chkaP x a b = (x>a) && (x<b) --Verifica se o valor P está no intervalo aberto de A e B
chkP x a b = (x>=a) && (x<=b) --Verifica se o valor P está no intervalo fechado de A e B
disteu [xa,ya] [xb,yb] = sqrt(xb - xa)^2 + (yb-ya)^2 --Distância entre 2 pontos no ponto
ynop [x,y] [xe,ye] [xs,ys] = ((ys-ye)/(xs-xe))*(x-xe)+ye --Tira o y de um ponto em relação a uma reta
---------------------------------------------------------------------------------------------------------

--A) Verificar se um número pertence ao intervalo (0,100) e é divisível por 3 e por 5
inter35 x = (chkaP x 0 100) && (div3 x) && (div5 x)
--B) Operador Ou (||) exclusivo
oux x y = (x||y) && not(x && y)

--C) Número total de dias da execução de um projeto
diasproj di mi ai df mf af = if (mi==mf) && (ai==af) then
                                    df-di
                                    else (df-di) + (msdias mf - msdias mi) + (ansdias af - ansdias ai)
                            where
                                msdias mes = mes*30
                                ansdias ano = ano*360

--D) Analisa se 3 medidas dadas formam um triângulo ou não
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

--F) Relação entre 3 números
relaNum a b c | igualn3 = putStrLn "Os três são iguais!"
              | igual2n3 = putStrLn "Apenas dois são iguais!"
              | otherwise = putStrLn "Os três são diferentes!"
                where
                    igualn3 = (a==b) && (b==c)
                    igual2n3 = igual2a2 a b c || igual2a2 a c b || igual2a2 b c a
                    igual2a2 a b c = (a==b) && (not(b==c))
                    
--G) Pertinência do retângulo no plano
pertRetPlan [ex,ey] [dx,dy] = if chkQ2 then 
                                 if chkQ1 then 
                                    "2 Quadrantes!"
                                 else if chkQ3 then 
                                        "2 Quadrantes!"
                                      else if chkQ4 then 
                                              "4 Quadrantes!" 
                                           else "1 Quadrante!"
                              else if chkQ1 then 
                                      if chkQ4 then
                                         "2 Quadrantes!"
                                      else "1 Quadrante!"
                                   else if chkQ3 then
                                            if chkQ4 then
                                                "2 Quadrantes!"
                                                else "1 Quadrante!"
                                        else "1 Quadrante!"
                            where
                                chkQ1 = ((ex>0) && (ey>0)) || ((dx>0) && (dy>0))
                                chkQ2 = ((ex<0) && (ey>0)) || ((dx<0) && (dy>0))
                                chkQ3 = ((ex<0) && (ey<0)) || ((dx<0) && (dy<0))
                                chkQ4 = ((ex>0) && (ey<0)) || ((dx>0) && (dy<0))

--H1) Pertinência da peça no tabuleiro
pertPeca x y c= (x>=1) && (y>=1) && (x<=c) && (y<=c) --Checa se a peça está no tabuleiro

--H2) Validação de movimento de peça no tabuleiro
xadrezMov x y c mx my = if pertPeca x y c then
                            if (pertPeca xfinal yfinal c) && (validarmovimento) then
                                putStrLn "O movimento é válido"
                            else
                                putStrLn "O Movimento não é válido"
                        else putStrLn "A peça não está no tabuleiro!" 
                        where
                            validarmovimento = (limitemov mx x xfinal) && (limitemov my y yfinal)
                            limitemov m p pfinal | m<0 = pfinal==(p-1) 
                                                 | m>0 = pfinal==(p+1)
                                                 | otherwise = True
                            xfinal = x+mx
                            yfinal = y+my

--I) Maior de 3 números
maior3n a b c = maior2n (maior2n a b) c 
        where
            maior2n n1 n2 = if n1>n2 then n1 else n2

--J) Calcular o quadrado do sucesso do maior de 3 números
quadsucc3n a b c = (succ(maior3n a b c))^2

--K) Calcular desconto na passagem de acordo com a idade
ticketdesc preco idade | idade >= 60 = preco*0.6
                       | chkP idade 2 10 = preco*0.5
                       | idade < 2 = preco*0.1
                       | otherwise = preco 

--L) Raizes de equação 2º grau V2
eq2grau a b c = if delta <0 then
                    "Nao e possivel calcular a raiz!"
                else
                     "x': " ++ show(x') ++ "; x'': " ++ show(x'')
        where
            delta = (b^2) - 4 * a * c
            x' = (-b + sqrt(delta))/ (2*a)
            x'' = (-b - sqrt(delta))/ (2*a)

--M)Abono de natal baseado em hora extra e horas de falta
abononatal hextras hfaltas | (pontos>=1) && (pontos<=10) = "R$ 100"
                         | (pontos>10) && (pontos<=20) = "R$ 200"
                         | (pontos>20) && (pontos<=30) = "R$ 300"
                         | (pontos>30) && (pontos<41) = "R$ 400"
                         | pontos >= 41 = "R$ 500"
                         | otherwise = "O funcionario e um vagabundo entao ganhou 0 Reais!"
                        where
                            pontos = hextras - (hfaltas*(2/3))