--a)Cédulas
ced x = div x 500 +
        div (mod x 500) 100 +
        div (mod x 100) 50 +
        div (mod x 50) 20 +
        div ((mod x 50)-20*(div (mod x 50) 20)) 10 +
        div (mod x 10) 5 +
        mod x 5

--b)Área do retângulo
arrt x y = x*y 

--c)Área do círculo
arcir r = 3.14 * (r^2)

--d)Distância euclidiana
disteu xa ya xb yb = sqrt((xb - xa)^2 + (yb-ya)^2) 

--e)Raizes de equação 2º grau
delta a b c = (b^2) - 4 * a * c
endx1 a b c = (-b + sqrt(delta a b c))/ (2*a)
endx2 a b c = (-b - sqrt(delta a b c))/ (2*a)

--f)Potência de expoente negativo
exponeg a b =  1/(a^(abs (b)))

--g)Conversão graus Celsius para Farenheit
tempCF x = 1.8*x +32

--h)Cálculo ganho anual de investimento com renda mensal
gainyr v j = v*(1+(j/100))^12 - v

--Davi de Souza Petris - CComp 2018--
