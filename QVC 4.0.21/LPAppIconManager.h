//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LPAppIconManager : NSObject
{
}

+ (void)prepareUploadRequestParam:(id)arg1 iconDataWithFileKey:(id)arg2 withIconBundle:(id)arg3 iconName:(id)arg4;
+ (id)alternativeIconsBundle;
+ (id)primaryIconBundle;
+ (_Bool)supportsAlternateIcons;
+ (void)uploadAppIconsOnDevMode;

@end
