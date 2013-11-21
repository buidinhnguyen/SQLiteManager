Pod::Spec.new do |s|
  s.name     = 'SQLiteManager'
  s.version  = '1.0'
  s.license  = 'MIT'
  s.summary  = 'SQLiteManger for OSX.'
  s.homepage = 'https://github.com/buidinhnguyen/SQLiteManager'
  s.author   = { 'Anthony Ly' => '' }
  s.source   = { :git => 'https://github.com/buidinhnguyen/SQLiteManager.git', :tag => s.version.to_s }
  s.source_files = 'SQLiteManager/*.{h,m}'
  s.requires_arc = false
  s.frameworks = 'libsqlite3'
end