
import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt

datos = np.loadtxt("datos.txt")
x=datos[:,0]
y=datos[:,1]


fig = plt.figure(figsize=(8,8))
plt.scatter(x,y, s=3)
plt.xlabel('Tiempo')
plt.ylabel('Altura')

plt.title('Movimiento rectilineo')
plt.savefig("grafica_piedra.pdf")