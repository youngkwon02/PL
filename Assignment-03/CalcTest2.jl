# Basic Calculator
include("Calc.jl")
# Extend to recognize fractions
include("Rational.jl")

enter(Rational("1/2"))
enter(Integer("3"))
add()
enter(Rational("1/4"))
add()
enter(Integer("2"))
sub()
enter(Rational("5/36"))
add()