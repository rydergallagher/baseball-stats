    .global calculate_hits
    .text

calculate_hits:

    vaddss %xmm0, %xmm1, %xmm0
    vaddss %xmm2, %xmm3, %xmm8
    vaddss %xmm0, %xmm8, %xmm0

    retq
    