void main_code(void) {
float fake_co2 = 0;
float temp = ccs.calculateTemperature();

//temp = (map(temp, 1,25, 25,1));
temp = ((370 - temp)*1.2);
fake_co2 = temp;
 OD01.set2X();
 OD01.print(fake_co2);
 OD01.println(" ppm");
 OD01.set1X();
 OD01.println("SG33 is a Volatile");
 OD01.println(" Organic Compound");
 OD01.println("");
 OD01.println("Breathe on the sensor");
 OD01.print("to see C02 reading");
  // Read the data from the SG33
//  eCO2 = SG33.getC02();
//  TVOC = SG33.getTV0C();
}
