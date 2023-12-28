using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OficinaIF
{
    static class CadastroUsuarios
    {
        private static Usuario[] usuarios =
        {
            // Aqui você pode implementar uma
            // busca no BD e usar um laço de 
            // repetição para incluir usuario
            // e senha na coleção usuarios

            new Usuario() { Usuario_ = "jhonatan", Senha = "1234" },
            new Usuario() { Usuario_ = "Leticia", Senha = "5678" },
            new Usuario() { Usuario_ = "Max", Senha = "abcd" }
        };

        // Propriedades
        private static Usuario _UserLogado = null;

        public static Usuario UsuarioLogado
        {
            get { return _UserLogado; }
            private set { _UserLogado = value; }
        }

        //Métodos
        public static bool Login(string usuario, string senha)
        {
            foreach (Usuario user in usuarios)
            {
                if (user.Usuario_ == usuario && user.Senha == senha)
                {
                    UsuarioLogado = user;
                    return true;
                }
            }
            return false;
        }

    }
}
