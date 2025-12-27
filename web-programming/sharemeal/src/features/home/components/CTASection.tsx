import { Button } from '@/components/ui/button';
import Link from 'next/link';

export function CTASection() {
  return (
    <section className="py-16 md:py-24 bg-gray-50">
      <div className="container mx-auto px-4 text-center">
        <h2 className="text-3xl md:text-4xl font-bold text-gray-900 mb-4">
          Ready to Make a Difference?
        </h2>
        <p className="text-lg text-gray-600 max-w-2xl mx-auto mb-8">
          Join our community of donors, volunteers, and NGOs working together to end food waste and hunger.
        </p>
        <Link href="/auth/signup">
          <Button 
            size="lg" 
            className="bg-green-600 hover:bg-green-700 text-white px-8"
          >
            Get Started
          </Button>
        </Link>
      </div>
    </section>
  );
}
