import { TrendingDown, MapPin, Award } from 'lucide-react';

export function ImpactSection() {
  const impacts = [
    {
      icon: TrendingDown,
      title: 'Reduce Food Waste',
      description: 'Track and reduce food waste with detailed analytics and expiry alerts.',
    },
    {
      icon: MapPin,
      title: 'Distribution Centers',
      description: 'Manage multiple distribution centers for efficient food logistics.',
    },
    {
      icon: Award,
      title: 'Transparent Reporting',
      description: 'Download PDF summaries and track every donation from source to service.',
    },
  ];

  return (
    <section id="impact" className="py-16 md:py-24 bg-white">
      <div className="container mx-auto px-4">
        <div className="grid grid-cols-1 lg:grid-cols-2 gap-12 items-center">
          {/* Left Image */}
          <div className="relative h-[400px] lg:h-[500px] rounded-lg overflow-hidden order-2 lg:order-1">
            <img 
              src="https://images.unsplash.com/photo-1593113598332-cd288d649433?w=800&q=80"
              alt="Volunteers distributing food"
              className="w-full h-full object-cover"
            />
          </div>

          {/* Right Content */}
          <div className="space-y-8 order-1 lg:order-2">
            <div>
              <h2 className="text-3xl md:text-4xl font-bold text-gray-900 mb-4">
                Making a Real Impact
              </h2>
            </div>

            <div className="space-y-6">
              {impacts.map((impact, index) => (
                <div key={index} className="flex gap-4">
                  <div className="flex-shrink-0">
                    <div className="w-12 h-12 bg-green-100 rounded-lg flex items-center justify-center">
                      <impact.icon className="w-6 h-6 text-green-600" />
                    </div>
                  </div>
                  <div>
                    <h3 className="text-lg font-semibold text-gray-900 mb-2">
                      {impact.title}
                    </h3>
                    <p className="text-gray-600">
                      {impact.description}
                    </p>
                  </div>
                </div>
              ))}
            </div>
          </div>
        </div>
      </div>
    </section>
  );
}
