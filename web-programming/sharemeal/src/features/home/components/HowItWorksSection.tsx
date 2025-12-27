import { Calendar, Users, Heart } from 'lucide-react';

export function HowItWorksSection() {
  const steps = [
    {
      icon: Calendar,
      title: 'Donate Food',
      description: 'List available food expiry dates and schedule convenient pickup times.',
    },
    {
      icon: Users,
      title: 'Volunteer Network',
      description: 'Our volunteers coordinate pickups and deliveries to reach those in need.',
    },
    {
      icon: Heart,
      title: 'Serve Communities',
      description: 'Partner NGOs receive food and serve those in need while reducing waste.',
    },
  ];

  return (
    <section id="how-it-works" className="py-16 md:py-24 bg-gray-50">
      <div className="container mx-auto px-4">
        <div className="text-center mb-12">
          <h2 className="text-3xl md:text-4xl font-bold text-gray-900 mb-4">
            How FoodShare Works
          </h2>
          <p className="text-lg text-gray-600 max-w-2xl mx-auto">
            Our platform makes it simple to donate surplus food and get it to those who need it most.
          </p>
        </div>

        <div className="grid grid-cols-1 md:grid-cols-3 gap-8 mt-12">
          {steps.map((step, index) => (
            <div 
              key={index} 
              className="bg-white p-8 rounded-lg text-center hover:shadow-lg transition-shadow"
            >
              <div className="inline-flex items-center justify-center w-16 h-16 bg-green-100 rounded-full mb-6">
                <step.icon className="w-8 h-8 text-green-600" />
              </div>
              <h3 className="text-xl font-semibold text-gray-900 mb-3">
                {step.title}
              </h3>
              <p className="text-gray-600">
                {step.description}
              </p>
            </div>
          ))}
        </div>
      </div>
    </section>
  );
}
