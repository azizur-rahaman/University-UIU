import { HeroSection } from './components/HeroSection';
import { HowItWorksSection } from './components/HowItWorksSection';
import { ImpactSection } from './components/ImpactSection';
import { CTASection } from './components/CTASection';
import { Header, Footer } from '@/src/shared/components';

export function HomePage() {
  return (
    <>
      <Header />
      <main>
        <HeroSection />
        <HowItWorksSection />
        <ImpactSection />
        <CTASection />
      </main>
      <Footer />
    </>
  );
}
