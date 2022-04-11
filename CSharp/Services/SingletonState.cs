namespace CSharpDi.Services
{
    public class SingletonState
    {
        private int value;

        public SingletonState()
        {
            value = Random.Shared.Next(0, 100);
        }

        public int GetValue()
        {
            return value;
        }
    }
}
