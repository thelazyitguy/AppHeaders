//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLSRuntimeSettings : NSObject
{
    _Bool _isDebug;
    NSString *_applicationId;
    long long _maxStorageSizeBytes;
    long long _region;
    long long _stage;
}

@property(readonly, nonatomic) long long stage; // @synthesize stage=_stage;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(readonly, nonatomic) long long region; // @synthesize region=_region;
@property(nonatomic) long long maxStorageSizeBytes; // @synthesize maxStorageSizeBytes=_maxStorageSizeBytes;
@property(retain, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)initWithApplicationId:(id)arg1 maxStotage:(long long)arg2 region:(long long)arg3 stage:(long long)arg4 andIsDebug:(_Bool)arg5;
- (id)init;

@end
