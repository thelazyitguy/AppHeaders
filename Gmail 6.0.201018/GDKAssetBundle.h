//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDKAssetBundle : NSObject
{
    int _catalog;
    NSString *_bundleName;
    Class _bundleClass;
}

+ (id)iconMappingDictionary;
+ (id)keyForCatalog:(int)arg1;
+ (id)actualNameForImageNamed:(id)arg1 inCatalog:(int)arg2;
+ (id)sharedLocalAssetBundle;
+ (id)sharedGMAssetBundle;
+ (id)sharedM1AssetBundle;
+ (id)sharedAssetBundleForCatalog:(int)arg1;
+ (id)bundleWithName:(id)arg1 inCatalog:(int)arg2 class:(Class)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class bundleClass; // @synthesize bundleClass=_bundleClass;
@property(readonly, nonatomic) int catalog; // @synthesize catalog=_catalog;
@property(readonly, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (id)assetBundleInBundle:(id)arg1 forPath:(id)arg2;
- (id)bundleForClass:(Class)arg1;
- (id)bundlePath;
- (id)imageTemplateNamed:(id)arg1;
- (id)imageNamed:(id)arg1 color:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)initWithBundleName:(id)arg1 inCatalog:(int)arg2 class:(Class)arg3;

@end
