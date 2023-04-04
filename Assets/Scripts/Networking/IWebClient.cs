using System.Threading.Tasks;

namespace Networking
{
    public interface IWebClient
    {
        Task Update();
        void Remove();
    }
}