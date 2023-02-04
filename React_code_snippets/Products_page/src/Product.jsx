import React from 'react'

export default function Product(props) {
    return (
        <div style={{ display: "flex", flexDirection: "column", margin: "0 10px", border: "1px solid #777" }}>
            <img src={props.img} alt="" style={{ width: "100%" }} />
            <h2>{props.title}</h2>
            <p>{props.desc}</p>
            <button>Buy Now</button>
            <button id={props.value} onClick={props.handleProductClick}>Know More</button>
        </div>
    )
}
