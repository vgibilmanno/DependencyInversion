namespace CSharpDi.Services
{
    public class TransientState
    {
        private int value;

        public TransientState()
        {
            value = Random.Shared.Next(0, 100);
        }

        public int GetValue()
        {
            return value;
        }
    }
}
