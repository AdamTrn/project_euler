import Data.List

-- solution is definitely suboptimal
pe2 :: Int -> Int
pe2 n = foldr (+) (0) $ filter (even) $ takeWhile (<n) fibs
  where
    fibs = unfoldr (\(a,b) -> Just (a,(b,a+b))) (0,1)