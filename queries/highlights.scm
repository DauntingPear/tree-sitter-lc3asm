; General
(label) @variable.special
(hex) @number
(int) @number
(reg) @variable
(label_jump) @type

(meta [
  (meta_ident) @keyword
  (hex) @number
])

(instruction [
  (trap) @keyword
  (opcode) @function
  (label) @variable.special
])

(string) @string

(comment) @comment
