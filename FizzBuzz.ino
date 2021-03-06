#define WAIT_TIME           (20) // [ms]


int g_display_mode;
int g_count = 0;
int count = 0;

void setup() 
{
	Serial.begin(115200);
}

void loop() 
{
	if(g_count > 50) {
        g_count = 0;
        count++;
        char txt[255];
        sprintf(txt, "%d : ", count);
        Serial.print(txt);

        if( count % 15 == 0){
            Serial.print("FizzBuzz\n");
        }
        else if( count % 5 == 0 ){
            Serial.print("Fizz\n");
        }
        else if( count % 3 == 0 ){
            Serial.print("Buzz\n");
        }
        else{
          Serial.print("\n");
        }
    }

    if ( g_count == 100 ){
        return;
    }
    g_count ++;
    delay(WAIT_TIME);
}
