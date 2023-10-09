from flask import Flask, request, render_template
import sys
import io

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        # Get the code from the form and execute it
        code = request.form.get('code')
        output = run_code(code)
        return render_template('index.html', output=output)
    else:
        return render_template('index.html')

def run_code(code):
    # Redirect output to a string buffer
    stdout = sys.stdout
    sys.stdout = io.StringIO()

    try:
        # Execute the code
        exec(code)
    except Exception as e:
        # Print any errors to the console
        print(e)

    # Get the output and reset the stdout buffer
    output = sys.stdout.getvalue()
    sys.stdout = stdout

    return output

if __name__ == '__main__':
    app.run(debug=True)
