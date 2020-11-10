//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

#import "NFLXIdentityUserProtocol-Protocol.h"
#import "NFLXSafeObjectProtocol-Protocol.h"

@class NSString;

@interface NFLXIdentityUser : NFLXGeneratedObject <NFLXIdentityUserProtocol, NFLXSafeObjectProtocol>
{
    _Bool _isTest;
    NSString *_netflixId;
    NSString *_secureNetflixId;
    NSString *_guid;
    long long _type;
}

+ (Class)liveObjectClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, copy, nonatomic) NSString *secureNetflixId; // @synthesize secureNetflixId=_secureNetflixId;
@property(readonly, copy, nonatomic) NSString *netflixId; // @synthesize netflixId=_netflixId;
- (_Bool)verifyIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

