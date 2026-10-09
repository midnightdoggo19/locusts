pkgname=locusts
pkgver=0.1
pkgrel=1
pkgdesc="Flood your terminal with locusts."
arch=("any")
url="https://github.com/midnightdoggo19/locusts"
license=("MIT")
depends=("ncurses")
makedepends=("make" "gcc")

validpgpkeys=("8A94DC111968D3714B5059C6F1A20D071D572442")
source=("$pkgname-$pkgver.tar.gz::$url/archive/refs/tags/v$pkgver.tar.gz")

package() {
  cd "${srcdir}/${pkgname}-v${pkgver}"
  make
  install -Dm755 locusts "$pkgdir/usr/bin/locusts"

  install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -Dm644 README "$pkgdir/usr/share/doc/$pkgname/README.md"
}

sha256sums=('a4ffd337971a18893fe2f7f233a959ce3ef845e58879c653eb845bc4dcf1c57d')
