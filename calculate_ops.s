    .global calculate_ops
    .text

calculate_ops:

    vaddss %xmm0, %xmm1, %xmm0      # xmm0 = xmm0 + xmm1 (ops = on base + slugging)

    retq