//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GBTReauthBannerUtil : NSObject
{
}

+ (_Bool)isReauthBannerExpired:(id)arg1;
+ (void)updateExpiredReauthBanners:(id)arg1;
+ (long long)bannerCount;
+ (void)persistReauthBanners:(id)arg1;
+ (id)reauthBanners;
+ (void)updateReauthBanners;
+ (id)reauthBannerWithUserEmail:(id)arg1;
+ (void)setReauthBannerWithUserEmail:(id)arg1 isDismissed:(_Bool)arg2;
+ (_Bool)isReauthBannerDismissedForUserEmail:(id)arg1;
+ (void)removeReauthBannerWithUserEmail:(id)arg1;
+ (void)addReauthBannerWithUserEmail:(id)arg1;

@end
