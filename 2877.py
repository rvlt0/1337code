import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    dt = pd.DataFrame()
    dt["student_id"] = [x[0] for x in student_data[:]]
    dt["age"] = [x[1] for x in student_data[:]]
    return dt

if __name__ == "__main__":
    student_data = [[1,15],[2,11],[3,11],[4,20]]
    dt = createDataframe(student_data)
    print(dt)
