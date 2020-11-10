//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSData, NSSet, NSString, YTVideoEffectsSettingsLoader;

@protocol YTVideoEffectsSettingsLoaderObserver <NSObject>
- (void)setDrishtiConfig:(NSData *)arg1 effectAssetsDirectoryPath:(NSString *)arg2 enabledEffects:(NSArray *)arg3;

@optional
- (void)effectsSettingsLoader:(YTVideoEffectsSettingsLoader *)arg1 didFetchAssetIDs:(NSSet *)arg2;
- (void)errorLoadingEffectID:(NSString *)arg1;
- (void)finishedLoadingEffectID:(NSString *)arg1;
@end

