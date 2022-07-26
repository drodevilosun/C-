<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <script>
       
        function testApi(url, callback) {
            const urlApi = {
                "https://api1.com": "data1",
                "https://api2.com": "data2",
                "https://api3.com": "data3"
            };
            const randomTimeout = Math.floor(Math.random() * 5000);

            console.log("random timeout running", randomTimeout);

            setTimeout(() => {
                console.log(urlApi[url]);
                if (callback != null)
                    callback(urlApi[url]);
            }, randomTimeout);
        }

        function startRunApi(url) {
            let response, callbackSaved;
            testApi(url, (data) =>{
                response = data;
                callbackSaved();
                console.log(data);
            });

            return function getData(callback)
            {
                if (response !== undefined)
                {
                    
                }
                else
                {

                }
                return response;
            }
        }

        
        let getApi1 = startRunApi("https://api1.com");
        console.log(getApi1());

        // setTimeout(() => {}, 5000)

        // console.log(getApi1());

    </script>
</body>

</html>
