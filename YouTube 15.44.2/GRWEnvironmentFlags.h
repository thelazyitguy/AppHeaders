//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString;

@interface GRWEnvironmentFlags : NSObject
{
    CDUnknownBlockType _allFlagCasesVendor;
    CDUnknownBlockType _flagDescriptionsVendor;
    NSString *_memoizedDescription;
    NSIndexSet *_enabledFlags;
}

+ (CDUnknownBlockType)defaultFlagDescriptionsVendor;
+ (CDUnknownBlockType)defaultAllFlagCasesVendor;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *enabledFlags; // @synthesize enabledFlags=_enabledFlags;
- (void)resetSharedInstanceForTesting;
- (id)flagDescription:(unsigned long long)arg1;
- (_Bool)isFlagEnabled:(unsigned long long)arg1;
- (void)enableFlags:(id)arg1;
- (id)allFlags;
- (id)description;
@property(copy, nonatomic) CDUnknownBlockType flagDescriptionsVendor;
@property(copy, nonatomic) CDUnknownBlockType allFlagCasesVendor;
- (id)init;

@end

