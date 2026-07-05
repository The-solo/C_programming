
// Ordering from larger to smaller integer helps the compiler with padding.
typedef struct SneklangVar {
  double weight; 
  int value; 
  int scope_level; 
  char *name; // Pointer to char is larger in size.
  char type;
  char is_constant;
} sneklang_var_t;

