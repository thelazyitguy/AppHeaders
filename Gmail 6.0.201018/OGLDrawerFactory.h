//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OGLDrawerFactory : NSObject
{
}

+ (id)productLogoHeaderViewControllerWithConfiguration:(id)arg1 delegate:(id)arg2;
+ (id)createProductLogoDrawerWithMainContentViewController:(id)arg1 configuration:(id)arg2 delegate:(id)arg3;
+ (id)createProductLockupDrawerWithMainContentViewController:(id)arg1 configuration:(id)arg2 delegate:(id)arg3;
+ (id)headerViewControllerWithConfiguration:(id)arg1 delegate:(id)arg2;
+ (id)privacyFooterViewControllerWithConfiguration:(id)arg1;
+ (id)createDrawerWithMainContentViewController:(id)arg1 headerViewController:(id)arg2 footerViewController:(id)arg3 configuration:(id)arg4 hasAccountHeader:(_Bool)arg5 delegate:(id)arg6;

@end

