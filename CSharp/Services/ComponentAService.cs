namespace CSharpDi.Services
{
    public class ComponentAService
    {
        private readonly Logger logger;
        private readonly SingletonState singletonState;
        private readonly TransientState transientState;

        public ComponentAService(Logger logger, SingletonState singletonState, TransientState transientState)
        {
            this.logger = logger;
            this.singletonState = singletonState;
            this.transientState = transientState;
        }

        public void DoIt()
        {
            logger.LogInformation($"ComponentAService (SingletonState) {singletonState.GetValue()}");
            logger.LogInformation($"ComponentAService (TransientState) {transientState.GetValue()}");
        }
    }
}
