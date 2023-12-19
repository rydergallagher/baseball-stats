    .global calculate_ba
    .text

calculate_ba:

    movq %rdi, %rax  # moves argument 1 (hits) into rax (return value, as well as result for division)
    movq %rsi, %r9   # moves argument 2 (plate appearances) into r9 (for organizational purposes)
    movq $0, %rdx    # moves 0 into rdx (remainder value for division)

    divq %rsi       # rax = rax / rsi (hits / plate appearances)



    retq
    