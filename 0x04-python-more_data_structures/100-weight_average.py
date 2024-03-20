sum_product = sum([score * weight for score, weight in my_list])
sum_weights = sum([weight for _, weight in my_list])

return sum_product / sum_weights
