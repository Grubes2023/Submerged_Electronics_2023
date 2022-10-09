# -*- coding: utf-8 -*-
"""
Created on Sun Oct  9 10:05:42 2022

@author: chen18
"""


""
import pandas as pd
pokedata = pd.read_csv('pokemon_data.csv')
print(pokedata.head(3)) 
# Can load other types of files such as read_excel()"
# By using read_csv('.txt', delimiters='\t')"

# reading headers
print(pokedata.columns)

# read each column
print(pokedata['Name', 'Type 1', 'HP'][0:5])

# read each row
print(pokedata.iloc[1:4])

# read a specific location (R,C)
# print(pokedata.iloc[2,1])
""


""
# sorting data
#pokedata.sort_values(['Type 1', 'HP'], ascending=[1,0])

#pokedata
""




""
# Altering the data
#pokedata['Total'] = pokedata['HP'] + pokedata['Attack'] + pokedata['Defense'] + pokedata['Sp. Atk'] + pokedata['Sp. Def'] + pokedata['Speed']

# pokedata = pokedata.drop(columns=['Total'])

#pokedata['Total'] = pokedata.iloc[:, 4:10].sum(axis=1)

#cols = list(pokedata.columns)
#pokedata = pokedata[cols[0:4] + [cols[-1]]+cols[4:12]]

#pokedata.head(5)
""


""
# Saving our Data
# pokedata.to_csv('modified.csv', index=False)

#pokedata.to_excel('modified.xlsx', index=False)

#pokedata.to_csv('modified.txt', index=False, sep='\t')
""


""
#Filtering Data
#new_pokedata = pokedata.loc[(pokedata['Type 1'] == 'Grass') & (pokedata['Type 2'] == 'Poison') & (pokedata['HP'] > 70)]

#new_pokedata.reset_index(drop=True, inplace=True)

#new_pokedata

#new_pokedata.to_csv('filtered.csv')
""


""
# Conditional Changes
# pokedata.loc[pokedata['Total'] > 500, ['Generation','Legendary']] = ['Test 1', 'Test 2']

# pokedata

# pokedata = pd.read_csv('modified.csv')

# pokedata
""


""
# Aggregate Statistics (groupby)
#pokedata = pd.read_csv('modified.csv')

#pokedata['count'] = 1

#pokedata.groupby(['Type 1', 'Type 2']).count()['count']
""


""
# Large Datasets
"new_pokedata = pd.DataFrame(columns=pokedata.columns)"

"for pokedata in pd.read_csv('modified.csv', chunksize=5):""
    "results = pokedata.groupby(['Type 1']).count()"
    
    "new_pokedata = pd.concat([new_pokedata, results])""
""