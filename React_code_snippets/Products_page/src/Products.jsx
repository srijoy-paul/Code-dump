import React, { useState, useEffect } from 'react'
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Product from './Product';

// export default function Products() {
//     const [products, setProducts] = useState(null);
//     const [product, setProduct] = useState(null);

//     async function getData() {
//         const response = await fetch('https://fakestoreapi.com/products');
//         const parsedResponse = await response.json();
//         console.log(parsedResponse);
//         setProducts(parsedResponse);
//         console.log("products:", products);
//     }
//     async function getProduct() {
//         const response = await fetch(`https://fakestoreapi.com/products/${product}`);
//         console.log(response);
//         const parsedResponse = await response.json();
//         console.log(parsedResponse);
//     }

//     useEffect(() => {
//         getData();
//     }, [])

//     useEffect(() => {
//         if (product != null)
//             getProduct();
//     }, [product])

//     const handleProductClick = (e) => {
//         console.log(e.target.id);
//         setProduct(e.target.id);
//     }

//     return (
//         <div style={{ display: "grid", gridTemplateColumns: "repeat(6,1fr)" }}>
//             {products != null ? products.map((product) => {
//                 return (<Product key={product.id} value={product.id} img={product.image} title={product.title} desc={product.description} handleProductClick={handleProductClick} />)
//             }) : null}
//         </div>
//     )
// }

export default function Products() {
    const [categories, setCategories] = useState([]);
    const [category, setCategory] = useState(null);
    const [categoryItems, setCategoryItems] = useState([]);

    const fetchCategory = async () => {
        const response = await fetch('https://fakestoreapi.com/products/categories');
        const parsedResponse = await response.json();
        console.log(parsedResponse);
        setCategories(parsedResponse);
    }

    const fetchCategorys = async () => {
        console.log(category);
        if (category != null) {
            const response = await fetch(`https://fakestoreapi.com/products/category/${category}`);
            const parsedResponse = await response.json();
            console.log(Array.from(parsedResponse));
            setCategoryItems(Array.from(parsedResponse));
        }
    }
    const handleChange = (e) => {
        console.log(e.target.value);
        setCategory(e.target.value);
    }

    useEffect(() => {
        fetchCategory();
    }, []);
    useEffect(() => {
        fetchCategorys();
    }, [category]);
    return (
        <>
            <select onChange={handleChange}>
                <option selected disabled>--  CHOOSE  --</option>
                {categories != null ? categories.map((category) => {
                    return <option key={category} value={category}>{category.toUpperCase()}</option>
                }) : null}
            </select>
            <section style={{ display: "grid", gridTemplateColumns: "repeat(4,1fr)" }}>
                {categoryItems.map((Items) => {
                    return <Product key={Items.id} img={Items.image} title={Items.title} desc={Items.description} value={Items.id} />
                })}
            </section>
        </>
    )
}
