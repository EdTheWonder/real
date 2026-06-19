import ArioriFull

def printSpectrum : IO Unit := do
  match processSeed VesicaNumber.one with
  | none => IO.println "failed"
  | some g => 
    for (ratio, dist, count) in g.spectrum do
      IO.println s!"({ratio.a}, {ratio.b}, {ratio.d}) - ({dist.a}, {dist.b}, {dist.d}) - {count}"

#eval printSpectrum
