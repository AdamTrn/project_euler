pe1 ::  Int -- starting from 3
pe1 = foldr (+) 0 (filter isGood [3..999])

isGood :: Int -> Bool
isGood x = if (x `mod` 3 == 0 || x `mod` 5 == 0) then True else False