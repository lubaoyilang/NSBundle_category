//
//  NSBundle+AssociatedBundle.h
//  NSBundle
//
//  Created by 谢传纪 on 2018/1/30.
//

#import <Foundation/Foundation.h>

@interface NSBundle (ResourceBundle)

/**
 获取文件所在name，默认情况下podName和bundlename相同，传一个即可

 @param bundleName bundle名字，就是在resource_bundles里面的名字
 @param frameWorkName 组件的名字
 @return bundle
 */
+ (NSBundle *)YG_bundleWithBundleName:(NSString *)bundleName frameWorkName:(NSString *)frameWorkName;
@end
