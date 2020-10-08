
Public Function test(a, b, c)
Z = a + b - c
If Z = 0 Then
test = ""
Else
test = Z
End If

End Function

Public Function child_discount(child, price)
If child > 2 Then
child_discount = price * 0.5
Else
child_discount = ""
End If

End Function

Public Function discount_helper(a, b)
If a >= 16 Or b = True Then
discount_helper = 250
Else
discount_helper = 0
End If

End Function

Public Function discount_payment(sibiling, fee)
If sbiling >= 3 Then
discount_paymetn = fee * 0.08
ElseIf sibiling = 2 Then
discount_payment = fee * 0.5
Else
discount_payment = 0
End If

End Function
