//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSBundle, NSLocale, NSString, UIImage;
@protocol AMIMarketplace;

@protocol AMILocalizedResourcesService <NSObject>
- (NSString *)localizedStringNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2 locale:(NSLocale *)arg3 tablePrefix:(NSString *)arg4 bundle:(NSBundle *)arg5;
- (NSString *)localizedStringNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2 locale:(NSLocale *)arg3 tablePrefix:(NSString *)arg4 bundleName:(NSString *)arg5;
- (NSString *)localizedStringNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2 locale:(NSLocale *)arg3 tablePrefix:(NSString *)arg4;
- (NSString *)localizedStringNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2 locale:(NSLocale *)arg3;
- (NSString *)localizedStringNamed:(NSString *)arg1 tablePrefix:(NSString *)arg2 bundleName:(NSString *)arg3;
- (NSString *)localizedStringNamed:(NSString *)arg1 bundleName:(NSString *)arg2;
- (NSString *)localizedStringNamed:(NSString *)arg1 tablePrefix:(NSString *)arg2;
- (NSString *)localizedStringNamed:(NSString *)arg1;
- (UIImage *)localizedImageNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2 locale:(NSLocale *)arg3;
- (UIImage *)localizedImageNamed:(NSString *)arg1 marketplace:(id <AMIMarketplace>)arg2;
- (UIImage *)localizedImageNamed:(NSString *)arg1;
@end
