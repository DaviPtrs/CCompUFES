--Módulos
chkP p a b = (p<=a) && (p>=b) --Verifica se o valor P está no intervalo fechado de A e B

--Verificar se um número pertence ao intervalo (0,100) e é divisível por 3 e por 5
inter35 x = (x>0) && (x<100) && ((mod x 3)==0) && ((mod x 5)==0)

--Operador Ou (||) exclusivo
oux x y = (x||y) && not(x && y)

--Número total de dias da execução de um projeto
diasproj di mi ai df mf af = if (mi==mf) && (ai==af)
								then df-di
								else (df-di) + (msdias mf - msdias mi) + (ansdias af - ansdias ai)
								where
									msdias mes = mes*30
									ansdias ano = ano*360

--Analisa se 3 medidas dadas formam um triângulo ou não
triang a b c | (a<(b+c)) && (b<(a+c)) && (c<(a+b)) = putStrLn "As medidas PODEM formar um triângulo!"
			 | otherwise = putStrLn "As medidas NÃO podem formar um triângulo!"

--Pertinência triângulo
pertriang [x,y] [ex,ey] [dx,dy] = (chkP x dx ex]) && (chkP [y ey dy])
