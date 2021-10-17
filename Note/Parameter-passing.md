# Semantic Models of Parameter Passing

## Pass-by-Value (In Mode)
- Normally implemented by copying
- When the caller has so many passing valiables, very inefficient !

## Pass-by-Result (Out Mode)
- Get the operation result of the function body and return it by copying
- The result of this function is susceptible by the order of copying.
  - (e.g. Although the function defined as subtract(a, b), called like this: subtract(p1, p1))

## Pass-by-Value-Result (Inout Mode)
- Very clear to read and understand
- Has the cons of PBV and PBR at the same time

## Pass-by-Reference (Inout Mode)
- Also called Pass-by-Sharing
- Preserve only one adress, so the passing process is efficient
- Slower accessing than Pass-by-Value
- Side effect: subtract(p1, p1) (like pass-by-result)
