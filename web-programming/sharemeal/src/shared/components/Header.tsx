import Link from 'next/link';
import Image from 'next/image';

export function Header() {
  return (
    <header className="fixed top-0 left-0 right-0 z-50 bg-white shadow-sm">
      <div className="container mx-auto px-4 py-4 flex items-center justify-between">
        <Link href="/" className="flex items-center gap-2">
          <Image src={"/logo.png"} alt="ShareMeal Logo" width={40} height={40} />
          <span className="text-xl font-bold text-gray-900">ShareMeal</span>
        </Link>
        
        <nav className="hidden md:flex items-center gap-8">
          <Link href="/#how-it-works" className="text-gray-600 hover:text-gray-900">
            How It Works
          </Link>
          <Link href="/#impact" className="text-gray-600 hover:text-gray-900">
            Our Impact
          </Link>
          <Link href="/about" className="text-gray-600 hover:text-gray-900">
            About
          </Link>
        </nav>

        <Link href="/auth/login">
          <button className="bg-green-600 hover:bg-green-700 text-white px-6 py-2 rounded-lg font-medium transition-colors">
            Get Started
          </button>
        </Link>
      </div>
    </header>
  );
}
