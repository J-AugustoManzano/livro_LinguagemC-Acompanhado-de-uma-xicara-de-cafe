REM C04EX16.BAS

DIM R AS STRING
DIM N AS INTEGER
DIM X AS INTEGER
DIM I AS INTEGER

I = 1
DO
  PRINT USING "Entre valor ##"; I
  INPUT "-> ", N
  X = N * 3
  PRINT USING "Resultado = ###"; X 
  PRINT
  INPUT "Deseja continuar? (S) p/ Sim, qualquer letra p/ Nao: ", R
  PRINT
  IF (UCASE$(R) <> "S") THEN EXIT DO
  I = I + 1
LOOP
END
