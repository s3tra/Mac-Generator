# Maintainer: s3tra

pkgname=mac-generator
pkgver=0.0.1
pkgrel=1
arch=('x86_64')
pkgdesc="Randomly generate a new MAC Address after every restart."
url=""
license=('MIT')
depends=('gcc' 'make')
source=("mac-generator.cpp" "Makefile")
sha256sums=('SKIP' 'SKIP')

build() {
    make
}

package() {
    install -Dm755 mac-generator "$pkgdir/usr/bin/mac-generator"
}
