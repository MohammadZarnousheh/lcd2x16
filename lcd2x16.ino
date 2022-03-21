#include <LiquidCrystal.h>//کتاب خانه برای LCD

LiquidCrystal lcd(12,11,6,4,3,2);//انتخاب پایه های دیجیتال برای LCD
void setup() {
  lcd.begin(16, 2);//انتخاب مدل LCD
  }
void loop(){
 lcd.clear();// همه نوشته هارو پاک میکنه
   lcd.print("hello");//نوشتن متن رو LCD
   delay(2000);
  lcd.setCursor(0, 1);//عوض کردن خط و رفتن به خط پایینی
  lcd.print("My Electro");//نوشتن متن در خط پایینی
  delay(2000);

  }
