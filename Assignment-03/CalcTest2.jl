# Basic Calculator
include("Calc.jl")
# Extend to recognize fractions
include("Rational.jl")

enter(Rational("1/2"))
enter(Rational("1/3"))
add()
# enter(Rational("1/4"))
# add()