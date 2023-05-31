
class UndergroundSystem:
    def __init__(self):
        self.checkIns = {}
        self.averageTimes = defaultdict(lambda: [0, 0])

    def checkIn(self, id: int, stationName: str, t: int) -> None:
        self.checkIns[id] = (stationName, t)

    def checkOut(self, id: int, stationName: str, t: int) -> None:
        startStation, startTime = self.checkIns[id]
        route = (startStation, stationName)
        timeTravel = t - startTime
        self.averageTimes[route][0] += timeTravel
        self.averageTimes[route][1] += 1

 def getAverageTime(self, startStation: str, endStation: str) -> float:
        totalTime, totalTrips = self.averageTimes[(startStation, endStation)]
        return totalTime / totalTrips if totalTrips > 0 else 0.0
