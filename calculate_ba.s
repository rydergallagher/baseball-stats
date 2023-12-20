    .global calculate_ba
    .text

calculate_ba:

    # vdivss src1, src2, dst
    # dst = srcs2 / srcs1
    vmovaps %xmm0, %xmm8        # move arg 1 into xmm8 (for organization)
    vxorps %xmm0, %xmm0, %xmm0 # 0 out return register
    vdivss %xmm1, %xmm8, %xmm0  # return = hits / plate appearances
   
    retq
