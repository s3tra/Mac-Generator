# Maintainer: s3tra

pkgname=mac-generator
pkgver=0.0.6
pkgrel=6
arch=('x86_64')
pkgdesc="Randomly generate a new MAC Address."
url="https://github.com/s3tra/Mac-Generator"
license=('MIT')
depends=('gcc' 'make')
source=("main.cpp" "Makefile")
sha256sums=('SKIP' 'SKIP')

build() {
    cd "$srcdir"
    make -f Makefile
}

package() {
    install -Dm755 "$srcdir/mac-generator" "$pkgdir/usr/bin/mac-generator"
}
