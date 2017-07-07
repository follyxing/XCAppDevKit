
Pod::Spec.new do |s|
  s.name         = "XCAppDevKit"
  s.version      = "0.1.2"
  s.ios.deployment_target = '7.0'
  s.summary      = "iOS App development tools. All in One !"
  s.homepage     = "https://github.com/follyxing/XCAppDevKit"
  s.license      = "MIT"
  s.author             = { "follyxing" => "i@xingcheng.me" }
  s.social_media_url   = "https://www.xingcheng.me"
  s.source       = { :git => "https://github.com/follyxing/XCAppDevKit.git", :tag => s.version }
  s.source_files  = "XCAppDevKit/**/*.{h,m}"
  s.requires_arc = true
end


