
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Manish Mobile - Repair Cost</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <h1>Manish Mobile Repair</h1>
        <form id="repairForm">
            <label for="mobile">Select Mobile Model:</label>
            <select id="mobile" name="mobile">
                <option value="iPhone X">iPhone X</option>
                <option value="Samsung Galaxy S10">Samsung Galaxy S10</option>
                <option value="OnePlus 8">OnePlus 8</option>
                <!-- Add more models here -->
            </select>

            <label for="problem">Select Problem Type:</label>
            <select id="problem" name="problem">
                <option value="screen">Screen Replacement</option>
                <option value="battery">Battery Replacement</option>
                <option value="camera">Camera Issue</option>
                <!-- Add more problem types here -->
            </select>

            <button type="submit">Get Price</button>
        </form>

        <div id="priceDisplay"></div>
    </div>

    <script src="script.js"></script>
</body>
</html>
body {
    font-family: Arial, sans-serif;
    background-color: #f7f7f7;
    margin: 0;
    padding: 20px;
}

.container {
    max-width: 400px;
    margin: 0 auto;
    padding: 20px;
    background-color: white;
    box-shadow: 0px 4px 8px rgba(0, 0, 0, 0.1);
    border-radius: 10px;
}

h1 {
    text-align: center;
}

label {
    display: block;
    margin-top: 20px;
}

select, button {
    width: 100%;
    padding: 10px;
    margin-top: 10px;
    border-radius: 5px;
    border: 1px solid #ccc;
}

button {
    background-color: #007bff;
    color: white;
    cursor: pointer;
}

#priceDisplay {
    margin-top: 20px;
    font-size: 18px;
    text-align: center;
}
document.getElementById('repairForm').addEventListener('submit', function(event) {
    event.preventDefault();

    const mobile = document.getElementById('mobile').value;
    const problem = document.getElementById('problem').value;

    // Price data (base prices)
    const priceData = {
        'iPhone X': {
            'screen': 5000,
            'battery': 2000,
            'camera': 2500
        },
        'Samsung Galaxy S10': {
            'screen': 4000,
            'battery': 1800,
            'camera': 2200
        },
        'OnePlus 8': {
            'screen': 4500,
            'battery': 1900,
            'camera': 2300
        }
    };

    // Get the base price
    const basePrice = priceData[mobile][problem];
    // Apply 30% markup
    const finalPrice = basePrice * 1.3;

    // Display the final price
    document.getElementById('priceDisplay').innerHTML = `The estimated cost for ${problem} on ${mobile} is ₹${finalPrice.toFixed(2)}`;
});

