class Program
{
    public static void Main()
    {
        Console.WriteLine("Start of main");

        using ManualResetEvent manualResetEvent = new(false);

        var semaphore = new Semaphore(1, 5);

        for (int i = 0; i < 5; i++)
        {
            ThreadPool.QueueUserWorkItem(
            (p) =>
            {
                var res = semaphore.WaitOne();

                Console.WriteLine($"Is ThreadPool Thread {Thread.CurrentThread.IsThreadPoolThread}");
                Console.WriteLine($"Thread Id: {Thread.CurrentThread.ManagedThreadId}");

                semaphore.Release();
                manualResetEvent.Set();
            });
        }

        Thread.Sleep(100);

        WaitHandle.WaitAll(new WaitHandle[]{ manualResetEvent});

        Console.WriteLine("End of main");
    }
}