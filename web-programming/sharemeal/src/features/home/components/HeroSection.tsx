import { Button } from '@/components/ui/button';
import Link from 'next/link';

export function HeroSection() {
  return (
    <section className="relative bg-gradient-to-br from-green-600 to-green-700 text-white pt-24 pb-16">
      <div className="container mx-auto px-4">
        <div className="grid grid-cols-1 lg:grid-cols-2 gap-12 items-center">
          {/* Left Content */}
          <div className="space-y-6">
            <h1 className="text-4xl md:text-5xl lg:text-6xl font-bold leading-tight">
              Together We Save Food & Feed Lives
            </h1>
            <p className="text-lg md:text-xl text-green-50">
              Connect donors, volunteers, and NGOs to reduce food waste and serve communities in need.
            </p>
            <div className="flex flex-col sm:flex-row gap-4">
              <Link href="/auth/signup/donor">
                <Button 
                  size="lg" 
                  className="bg-white text-green-700 hover:bg-green-50 font-semibold w-full sm:w-auto"
                >
                  Join as Donor
                </Button>
              </Link>
              <Link href="/auth/signup/ngo">
                <Button 
                  size="lg" 
                  variant="outline" 
                  className="bg-transparent border-2 border-white text-white hover:bg-white/10 w-full sm:w-auto"
                >
                  Register NGO
                </Button>
              </Link>
            </div>
          </div>

          {/* Right Image */}
          <div className="relative h-[400px] lg:h-[500px] rounded-lg overflow-hidden">
            <img 
              src="https://images.unsplash.com/photo-1488521787991-ed7bbaae773c?w=800&q=80"
              alt="Happy children receiving food"
              className="w-full h-full object-cover"
            />
          </div>
        </div>

        {/* Stats Bar */}
        <div className="grid grid-cols-2 lg:grid-cols-4 gap-8 mt-16 bg-white/10 backdrop-blur-sm rounded-lg p-8">
          <div className="text-center">
            <div className="text-3xl md:text-4xl font-bold">12,547</div>
            <div className="text-green-100 mt-1">Meals Served</div>
          </div>
          <div className="text-center">
            <div className="text-3xl md:text-4xl font-bold">432</div>
            <div className="text-green-100 mt-1">Active Donors</div>
          </div>
          <div className="text-center">
            <div className="text-3xl md:text-4xl font-bold">87</div>
            <div className="text-green-100 mt-1">Partner NGOs</div>
          </div>
          <div className="text-center">
            <div className="text-3xl md:text-4xl font-bold">8.5 tons</div>
            <div className="text-green-100 mt-1">Food Saved</div>
          </div>
        </div>
      </div>
    </section>
  );
}
