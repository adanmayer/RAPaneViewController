Pod::Spec.new do |s|
  s.name         = "RAPaneViewController"
  s.version      = "0.0.5"
  s.summary      = "Customizable Sliding Pane View."
  s.homepage     = "http://github.com/adanmayer/RAPaneViewController"
  s.license      = 'MIT'
  s.author       = { "Evadne Wu" => "ev@radi.ws" }
  s.source       = { :git => "http://github.com/adanmayer/RAPaneViewController.git", :tag => "0.0.5" }
  s.platform     = :ios, '8.0'
  s.source_files = 'RAPaneViewController', 'RAPaneViewController/**/*.{h,m}'
  s.framework  = 'QuartzCore', 'UIKit'
  s.requires_arc = true
end
