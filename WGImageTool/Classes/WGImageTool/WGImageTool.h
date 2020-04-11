
//  Copyright © 2019 WG. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,WGImageType)
{
    WGImageTypeUnKnow = -1,
    WGImageTypeJPG,
    WGImageTypePNG,
    WGImageTypeBMP,
    WGImageTypeGIF,
};
@interface WGImageTool : NSObject
+ (WGImageType)imageTypeOfFilePath:(NSString*)filePath;
+ (CGSize)imagSizeOfFilePath:(NSString*)filePath;
@end
