-- C04EX16.ADA

With Ada.Text_IO; Use Ada.Text_IO;  
With Ada.Integer_Text_IO; Use Ada.Integer_Text_IO;
With Ada.Characters.Handling; Use Ada.Characters.Handling;  
Procedure C04EX16 is  
  R : Character;
  X : Integer;
  N : Integer;  
  I : Integer;  
Begin
  I := 1;
  Loop
    Put("Entre valor:"); Put(Integer'Image(I)); 
    Put(" -> "); Get(N);
    X := N * 3;  
    Put("Resultado = "); Put(Integer'Image(X));
    New_Line(2);
    Put("Deseja continuar? (S) p/ Sim, qualquer letra p/ Nao: ");
    Get(R);
    New_Line;
    Exit When (To_Upper(R) /= 'S');  
    I := I + 1;
  End Loop;
End C04EX16;