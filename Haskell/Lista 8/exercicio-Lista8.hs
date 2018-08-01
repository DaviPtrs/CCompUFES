--a)ordem alfabetica
sort xs = foldr insord [] xs
insord p [] = [p]
insord p (x:xs) = if p < x then 
                        p:(x:xs)
                    else 
                        x:(insord p (xs))