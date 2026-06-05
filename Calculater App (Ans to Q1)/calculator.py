import sys

def calc(op, a, b):
    """
    Performs basic arithmetic and exponentiation calculations.
    """
    try:
        val1 = float(a)
        val2 = float(b)
    except ValueError:
        raise ValueError("Invalid numeric inputs provided.")
    
    if op == "add":
        return val1 + val2
    elif op == "sub":
        return val1 - val2
    elif op == "mult":
        return val1 * val2
    elif op == "div":
        if val2 == 0:
            raise ZeroDivisionError("Divison by zero is undefined.")
        return val1 / val2
    elif op == "pow":
        
        return val1 ** val2
    else:
        raise ValueError(f"Unknown operation:'{op}'")
    
def run_interactive_loop():
    """
    Preserved interactive mode placeholder for future standalone desktop client development.
    """
    print("Starting interactive session... (Press Ctrl+C to exit)")
    while True:
        try:
            op = input("Enter operation (add, sub, mult, div, pow) or 'exit': ").strip()
            if op.lower() == 'exit':
                break
            num1 = input("Enter first number: ").strip()
            num2 = input("Enter second number: ").strip()
            print("Interactive Result:", calc(op, num1, num2))
        except (ValueError, ZeroDivisionError) as error:
            print(f"Execution Error: {error}")
        except KeyboardInterrupt:
            break

if __name__ == "__main__":
    # If standard execution parameters are omitted, guide the user or fall back safely
    if len(sys.argv) == 1:
        run_interactive_loop()
        sys.exit(0)

    try:
        if len(sys.argv) != 4:
            print("Usage error: Expected syntax is 'python script.py <operation> <num1> <num2>'")
            sys.exit(1)
            
        operation = sys.argv[1]
        num1 = sys.argv[2]
        num2 = sys.argv[3]
        
        result = calc(operation, num1, num2)
        print("RESULT IS:")
        print(result)
        
    except Exception as runtime_error:
        print(f"Pipeline Execution Failed: {runtime_error}")
        sys.exit(1)