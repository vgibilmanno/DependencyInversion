# DependencyInversion

This repo contains samples on how to use Dependency Inversion & Dependency Injection in various languages.

| Language | Framework |
|---|---|
| [C#](CSharp) | [Microsoft.Extensions.DependencyInjection](https://github.com/dotnet/runtime/tree/main/src/libraries/Microsoft.Extensions.DependencyInjection) |
| [C++](CPlusPlus) | [[Boost::ext].DI](https://github.com/boost-ext/di) |
| [Python](Python) | [Kink](https://github.com/kodemore/kink) |

All samples use Singleton and Transient dependencies.
Executing the samples should show something like the following in the console output:
```
ComponentAService (SingletonState) 50
ComponentAService (TransientState) 44
ComponentBService (SingletonState) 50
ComponentBService (TransientState) 23
```