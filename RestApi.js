'use strict';

const fs = require('fs');
const axios = require('axios');
const fetch = require('node-fetch');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}


/*
 * Complete the 'getRecordDiagnosed' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER doctorId
 *  2. INTEGER breathingRate
 *  3. INTEGER diagnosisId
 * 
 *  https://jsonmock.hackerrank.com/api/medical_records
 */

const data = {
    "page": 2,
    "per_page": 10,
    "total": 99,
    "total_pages": 10,
    "data": [
        {
            "id": 11,
            "timestamp": 1563846626267,
            "diagnosis": {
                "id": 2,
                "name": "Common Cold",
                "severity": 1
            },
            "vitals": {
                "bloodPressureDiastole": 126,
                "bloodPressureSystole": 75,
                "pulse": 99,
                "breathingRate": 22,
                "bodyTemperature": 101.9
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 3,
            "userName": "Helena Fernandez",
            "userDob": "23-12-1987",
            "meta": {
                "height": 157,
                "weight": 108
            }
        },
        {
            "id": 12,
            "timestamp": 1563860299099,
            "diagnosis": {
                "id": 2,
                "name": "Common Cold",
                "severity": 1
            },
            "vitals": {
                "bloodPressureDiastole": 126,
                "bloodPressureSystole": 78,
                "pulse": 117,
                "breathingRate": 23,
                "bodyTemperature": 99.2
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 4,
            "userName": "Francesco De Mello",
            "userDob": "02-05-1994",
            "meta": {
                "height": 183,
                "weight": 217
            }
        },
        {
            "id": 13,
            "timestamp": 1551906996274,
            "diagnosis": {
                "id": 2,
                "name": "Common Cold",
                "severity": 1
            },
            "vitals": {
                "bloodPressureDiastole": 121,
                "bloodPressureSystole": 80,
                "pulse": 91,
                "breathingRate": 18,
                "bodyTemperature": 101.3
            },
            "doctor": {
                "id": 4,
                "name": "Dr Allysa Ellis"
            },
            "userId": 1,
            "userName": "John Oliver",
            "userDob": "02-01-1986",
            "meta": {
                "height": 168,
                "weight": 180
            }
        },
        {
            "id": 14,
            "timestamp": 1563044698171,
            "diagnosis": {
                "id": 4,
                "name": "Pleurisy",
                "severity": 3
            },
            "vitals": {
                "bloodPressureDiastole": 139,
                "bloodPressureSystole": 84,
                "pulse": 105,
                "breathingRate": 23,
                "bodyTemperature": 97.3
            },
            "doctor": {
                "id": 4,
                "name": "Dr Allysa Ellis"
            },
            "userId": 4,
            "userName": "Francesco De Mello",
            "userDob": "02-05-1994",
            "meta": {
                "height": 183,
                "weight": 186
            }
        },
        {
            "id": 15,
            "timestamp": 1551566179628,
            "diagnosis": {
                "id": 4,
                "name": "Pleurisy",
                "severity": 3
            },
            "vitals": {
                "bloodPressureDiastole": 136,
                "bloodPressureSystole": 88,
                "pulse": 112,
                "breathingRate": 25,
                "bodyTemperature": 99.3
            },
            "doctor": {
                "id": 3,
                "name": "Dr Pilar Cristancho"
            },
            "userId": 1,
            "userName": "John Oliver",
            "userDob": "02-01-1986",
            "meta": {
                "height": 168,
                "weight": 192
            }
        },
        {
            "id": 16,
            "timestamp": 1568085122164,
            "diagnosis": {
                "id": 4,
                "name": "Pleurisy",
                "severity": 3
            },
            "vitals": {
                "bloodPressureDiastole": 136,
                "bloodPressureSystole": 85,
                "pulse": 117,
                "breathingRate": 29,
                "bodyTemperature": 99.9
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 2,
            "userName": "Bob Martin",
            "userDob": "14-09-1989",
            "meta": {
                "height": 174,
                "weight": 186
            }
        },
        {
            "id": 17,
            "timestamp": 1547084560364,
            "diagnosis": {
                "id": 2,
                "name": "Common Cold",
                "severity": 1
            },
            "vitals": {
                "bloodPressureDiastole": 129,
                "bloodPressureSystole": 79,
                "pulse": 102,
                "breathingRate": 16,
                "bodyTemperature": 103.4
            },
            "doctor": {
                "id": 4,
                "name": "Dr Allysa Ellis"
            },
            "userId": 2,
            "userName": "Bob Martin",
            "userDob": "14-09-1989",
            "meta": {
                "height": 174,
                "weight": 185
            }
        },
        {
            "id": 18,
            "timestamp": 1560177927736,
            "diagnosis": {
                "id": 3,
                "name": "Pulmonary embolism",
                "severity": 4
            },
            "vitals": {
                "bloodPressureDiastole": 141,
                "bloodPressureSystole": 96,
                "pulse": 123,
                "breathingRate": 29,
                "bodyTemperature": 99
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 3,
            "userName": "Helena Fernandez",
            "userDob": "23-12-1987",
            "meta": {
                "height": 157,
                "weight": 103
            }
        },
        {
            "id": 19,
            "timestamp": 1557740937538,
            "diagnosis": {
                "id": 2,
                "name": "Common Cold",
                "severity": 1
            },
            "vitals": {
                "bloodPressureDiastole": 127,
                "bloodPressureSystole": 76,
                "pulse": 90,
                "breathingRate": 19,
                "bodyTemperature": 100.4
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 4,
            "userName": "Francesco De Mello",
            "userDob": "02-05-1994",
            "meta": {
                "height": 183,
                "weight": 189
            }
        },
        {
            "id": 20,
            "timestamp": 1549184918171,
            "diagnosis": {
                "id": 3,
                "name": "Pulmonary embolism",
                "severity": 4
            },
            "vitals": {
                "bloodPressureDiastole": 145,
                "bloodPressureSystole": 94,
                "pulse": 125,
                "breathingRate": 25,
                "bodyTemperature": 102.6
            },
            "doctor": {
                "id": 2,
                "name": "Dr Arnold Bullock"
            },
            "userId": 2,
            "userName": "Bob Martin",
            "userDob": "14-09-1989",
            "meta": {
                "height": 174,
                "weight": 181
            }
        }
    ]
}

async function getRecordDiagnosed(doctorId, breathingRate, diagnosisId) {
    data.data.le
    let url="https://jsonmock.hackerrank.com/api/medical_records";
    let total_pages=1;
    data = await axios.get(url);
    total_pages=data.total_pages;
    let current_page=1;
    finalArray=[];
    while(current_page<=total_pages){
        data = await axios.get(`${url}?page=${current_page}`);
        arr = data.data;
        filterdArray=arr.filter(x => x.doctor.id==doctorId).filter(x=>x.diagnosis.id==diagnosisId);
        finalArray.push(filterdArray);
    }
    const userWeights = {};

    finalArray.forEach((x) => {
        if (!userWeights[x.userId]) {
            userWeights[x.userId] = { sum: 0, count: 0 };
        }
        userWeights[x.userId].sum += x.meta.weight;
        userWeights[x.userId].count += 1;
    });

    const averageWeights = Object.fromEntries(
        Object.entries(userWeights).map(([userId, { sum, count }]) => [
            userId, sum / count
        ])
    );

    ans = finalArray.filter(x=>x.meta.weight>averageWeights[x.userId] && x.vitals.breathingRate>breathingRate);
    return ans.map(x=>x.id);

}
async function main() {
    // const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    // const doctorId = parseInt(readLine().trim(), 10);

    // const breathingRate = parseInt(readLine().trim(), 10);

    // const diagnosisId = parseInt(readLine().trim(), 10);

    const result = await getRecordDiagnosed(3, 20, 2);
    console.log(result);

    // ws.write(result.join('\n') + '\n');

    // ws.end();
}
