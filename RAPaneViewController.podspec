Pod::Spec.new do |s|
  s.name         = "RAPaneViewController"
  s.version      = "0.0.4"
  s.summary      = "Customizable Sliding Pane View."
  s.homepage     = "http://github.com/evadne/RAPaneViewController"
  s.license      = 'MIT'
  s.author       = { "Evadne Wu" => "ev@radi.ws" }
  s.source       = { :git => "http://github.com/evadne/RAPaneViewController.git", :tag => "0.0.4" }
  s.platform     = :ios, '5.0'
  s.source_files = 'RAPaneViewController', 'RAPaneViewController/**/*.{h,m}'
  s.framework  = 'QuartzCore', 'UIKit'
  s.requires_arc = true
end
