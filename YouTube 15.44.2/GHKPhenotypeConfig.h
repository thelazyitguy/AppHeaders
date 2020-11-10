//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHTPhenotypeFlags;
@protocol GIKSharedLibraryService, GIPAccountID, PHTPhenotype;

@interface GHKPhenotypeConfig : NSObject
{
    id <PHTPhenotype> _phenotype;
    NSString *_packageName;
    id <GIKSharedLibraryService> _identityService;
    id <GIPAccountID> _accountID;
    PHTPhenotypeFlags *_allFlags;
}

+ (id)dispatchQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void)updateFlagsAsyncWithCallback:(CDUnknownBlockType)arg1;
- (void)fetchConfiguration;
- (void)registerPackageWithIdentityService:(id)arg1 accountID:(id)arg2 helpKitVersion:(long long)arg3;
- (id)init;

@end

