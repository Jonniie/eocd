def min_count(product_count, box_size):
    if product_count % box_size == 0:
        return product_count/box_size
    else:
        return product_count//box_size + 1

