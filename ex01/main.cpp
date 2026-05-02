#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // --- TEST 1 : Création de Formulaires ---
    std::cout << "\nTEST 1: Form Creation\n" << std::endl;
    try {
        Form f1("Tax Return", 50, 100);
        std::cout << f1 << std::endl; // Test operator<<
        
        // Ceci doit échouer
        Form f2("Impossible Form", 0, 100); 
    }
    catch (std::exception &e) {
        std::cerr << "Creation Error: " << e.what() << std::endl;
    }

    // --- TEST 2 : Signature Réussie ---
    std::cout << "\nTEST 2: Successful Signing\n" << std::endl;
    try {
        Bureaucrat boss("Boss", 5);
        Form contract("Contract", 10, 50); // Grade 10 requis pour signer

        std::cout << contract << std::endl; // Non signé
        
        // Boss (5) signe Contract (10) -> OK car 5 < 10 (meilleur grade)
        boss.signForm(contract);
        
        std::cout << contract << std::endl; // Doit afficher "signed: yes"
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // --- TEST 3 : Echec de Signature ---
    std::cout << "\nTEST 3: Failed Signing\n" << std::endl;
    try {
        Bureaucrat intern("Intern", 150);
        Form topSecret("Top Secret", 1, 1);

        // Intern (150) essaie de signer Top Secret (1) -> ECHEC
        intern.signForm(topSecret);
    }
    catch (std::exception &e) {
        // Normalement, signForm attrape l'exception et affiche son propre message d'erreur.
        // Ce catch ici sert de sécurité supplémentaire.
        std::cerr << "Main catch: " << e.what() << std::endl;
    }

    return 0;
}
