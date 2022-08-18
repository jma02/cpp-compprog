print("paste sequence, and on a new line, type 'done' and press enter")
nl = input()
seq = ""
while nl.lower() != "done":
    seq+=nl
    nl = input()
print("".join(seq.split()))
