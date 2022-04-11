using CSharpDi.Services;
using Microsoft.Extensions.DependencyInjection;

var serviceCollection = new ServiceCollection();
serviceCollection.AddSingleton<Logger>();
serviceCollection.AddSingleton<ComponentAService>();
serviceCollection.AddSingleton<ComponentBService>();
serviceCollection.AddSingleton<SingletonState>();
serviceCollection.AddTransient<TransientState>();

var serviceProvider = serviceCollection.BuildServiceProvider();

var componentAService = serviceProvider.GetRequiredService<ComponentAService>();
var componentBService = serviceProvider.GetRequiredService<ComponentBService>();

componentAService.DoIt();
componentBService.DoIt();