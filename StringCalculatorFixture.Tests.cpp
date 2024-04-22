//Fixture Class
class StringCalculatorTestFixture:public testing::Test{
        protected:
        StringCalculator *objUnderTest;
        static void SetUpTestSuite() {
            std::cout<<"StringCalculatorTestFixture.SetUpTestSuite"<<std::endl;
        }
        static void TearDownTestSuite() {
              std::cout<<"StringCalculatorTestFixture.TearDownTestSuite"<<std::endl;
        }
        void SetUp(){
            std::cout<<"StringCalculatorTestFixture.SetUp"<<std::endl;
            objUnderTest=new StringCalculator();
        }
        void TearDown(){
            std::cout<<"StringCalculatorTestFixture.TearDown"<<std::endl;
            delete objUnderTest;
        }
};
 TEST_F(StringCalculatorTestFixture,GivenEmptyStringZeroIsExpected){
     //Arrangee
   
    string input="";
    int expectedValue=10;
    //Act
   int actualValue=  objUnderTest->Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
 }
TEST_F(StringCalculatorTestFixture,Given2numbers){
    //Arrangee
   
    string input="1,2";
    int expectedValue=3;
    //Act
   int actualValue=  objUnderTest->Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
 
