import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np

def sieve_of_eratosthenes(n):
    sieve = np.zeros(n + 1, dtype=int)  # 0: unchecked, 1: composite, 2: prime
    sieve[0:2] = 1  # 0 and 1 are not prime numbers
    for i in range(2, n + 1):
        if sieve[i] == 0:
            sieve[i] = 2  # mark current number as prime
            sieve[i * i:n + 1:i] = 1  # mark multiples of i as composite
            yield sieve.copy()

def animate(frame, n):
    ax.clear()
    for i in range(1, n + 1):
        row = (i - 1) // 10
        col = (i - 1) % 10
        color = 'yellow' if frame[i] == 3 else 'red' if frame[i] == 1 else 'green' if frame[i] == 2 else 'white'
        ax.add_patch(plt.Rectangle((col, row), 1, 1, fill=True, color=color))
        ax.text(col + 0.5, row + 0.5, str(i), ha='center', va='center', fontsize=8)
    ax.set_xlim(0, 10)
    ax.set_ylim(0, n // 10 + 1)
    ax.set_aspect('equal')
    ax.invert_yaxis()  # Invert y-axis to start with 0 at the top
    ax.axis('off')

n = 100  # set the range for the sieve
fig, ax = plt.subplots()
ims = list(sieve_of_eratosthenes(n))  # list of frames

# Additional frame to highlight all primes in yellow
final_frame = np.where(ims[-1] == 2, 3, ims[-1])
ims.append(final_frame)

ani = animation.FuncAnimation(fig, animate, frames=ims, repeat=False, fargs=(n,))
ani.save('sieve.gif', writer='imagemagick', fps=1)  # save the animation as a gif
plt.show()
