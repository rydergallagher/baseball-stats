    .global calculate_hits
    .text

calculate_hits:

    vaddss %xmm0, %xmm1, %xmm0  # xmm0 = xmm0 + xmm1 (xmm0 = singles + doubles)
    vaddss %xmm2, %xmm3, %xmm8  # xmm8 = xmm2 + xmm3 (xmm8 = triples + homeruns)
    vaddss %xmm0, %xmm8, %xmm0  # xmm0 = xmm0 +xmm8

    retq
