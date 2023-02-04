import React, { useRef, useState } from 'react'

export default function StopWatch() {
    const startTime = useRef(null);
    let intervalRef = useRef(null);
    const [currTime, setCurrTime] = useState(null);
    const [laps, setLaps] = useState([]);
    const startTimer = () => {
        startTime.current = Date.now();
        intervalRef.current = setInterval(() => {
            setCurrTime(Date.now());
        }, 70);
    }
    const stopTimer = () => {
        clearInterval(intervalRef.current);
    }
    const handleLaps = () => {
        setLaps([...laps, ((currTime - startTime.current) / 1000).toFixed(3)])
    }
    return (
        <>
            <div>
                <h1>{((currTime - startTime.current) / 1000).toFixed(3)}</h1>
                <button onClick={startTimer}>Start</button>
                <button onClick={stopTimer}>Stop</button>
                <button onClick={handleLaps}>Lap</button>
            </div>
            {laps?.length ? <div>
                <h1>Laps</h1>
                <div style={{ height: "200px", border: "2px solid blue", display: "flex", flexWrap: "wrap", justifySelf: "center" }}>
                    {laps.map(lap =>
                        <p key={lap}>{lap}</p>
                    )}
                </div>
            </div> : null}
        </>
    )
}