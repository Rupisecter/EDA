import pandas as pd
import matplotlib.pyplot as plt
df2=pd.read_csv("distancias5000.txt",sep=" ",header=None)
dim2=df2.T.squeeze()
dim2.plot.hist(grid=True, bins=10, rwidth=0.9, color='#607c8e')
plt.title('5000 Dimensiones')
plt.xlabel('Distancia')
plt.ylabel('Frecuencia')
plt.grid(axis='y', alpha=0.75)
plt.xlim(0,30)
plt.show()
