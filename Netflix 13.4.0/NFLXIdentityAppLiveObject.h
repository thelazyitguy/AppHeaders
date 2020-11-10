//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFLXKeyedLiveObject.h"

#import "NFLXIdentityAppKeyProtocol-Protocol.h"

@class NSString;

@interface NFLXIdentityAppLiveObject : NFLXKeyedLiveObject <NFLXIdentityAppKeyProtocol>
{
    NSString *_bundleId;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_internalVersion;
    NSString *_serverPathVersion;
}

+ (Class)safeObjectClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serverPathVersion; // @synthesize serverPathVersion=_serverPathVersion;
@property(copy, nonatomic) NSString *internalVersion; // @synthesize internalVersion=_internalVersion;
@property(copy, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
