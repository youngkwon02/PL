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

<img width="700" alt="스크린샷 2021-10-17 오후 3 18 48" src="https://user-images.githubusercontent.com/39653584/137614239-ba8d2401-a10e-451d-ad93-472d35c28488.png">

## Pass-by-Name (Inout Mode) => (Paa-by-Function)
<img width="700" alt="스크린샷 2021-10-17 오후 3 28 46" src="https://user-images.githubusercontent.com/39653584/137614458-269b8aa0-2ddc-4b4a-90b5-75c11de6ce6e.png">
