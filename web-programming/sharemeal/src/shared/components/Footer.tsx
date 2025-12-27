import Link from 'next/link';

export function Footer() {
  return (
    <footer className="bg-gray-900 text-white py-12">
      <div className="container mx-auto px-4">
        <div className="grid grid-cols-1 md:grid-cols-4 gap-8">
          {/* Logo and Brand */}
          <div>
            <div className="flex items-center gap-2 mb-4">
              <div className="w-8 h-8 bg-green-600 rounded-full flex items-center justify-center">
                <span className="text-white text-xl">🍽️</span>
              </div>
              <span className="text-xl font-bold">ShareMeal</span>
            </div>
          </div>

          {/* Platform Links */}
          <div>
            <h3 className="font-semibold mb-4">Platform</h3>
            <ul className="space-y-2">
              <li><Link href="#" className="text-gray-400 hover:text-white">For Donors</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">For NGOs</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">For Volunteers</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">Distribution Centers</Link></li>
            </ul>
          </div>

          {/* Resources */}
          <div>
            <h3 className="font-semibold mb-4">Resources</h3>
            <ul className="space-y-2">
              <li><Link href="#" className="text-gray-400 hover:text-white">How It Works</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">Impact Reports</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">FAQs</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">Contact Us</Link></li>
            </ul>
          </div>

          {/* Legal */}
          <div>
            <h3 className="font-semibold mb-4">Legal</h3>
            <ul className="space-y-2">
              <li><Link href="#" className="text-gray-400 hover:text-white">Privacy Policy</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">Terms of Service</Link></li>
              <li><Link href="#" className="text-gray-400 hover:text-white">Food Safety Guidelines</Link></li>
            </ul>
          </div>
        </div>

        <div className="border-t border-gray-800 mt-8 pt-8 text-center text-gray-400">
          <p>© 2025 FoodShare. All rights reserved.</p>
        </div>
      </div>
    </footer>
  );
}
