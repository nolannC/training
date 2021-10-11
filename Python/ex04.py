# ask model and numberplate
model = input("Model : ")
numberplate = input("Numberplate : ")

# open data.csv
with open("data.csv", "a") as f:
    # write inside
    f.write(f"{model}, {numberplate}\n")
    # close it
    f.close()
