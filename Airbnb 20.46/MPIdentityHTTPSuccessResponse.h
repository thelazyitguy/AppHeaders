//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPIdentityHTTPBaseSuccessResponse.h"

@class NSNumber, NSString;

@interface MPIdentityHTTPSuccessResponse : MPIdentityHTTPBaseSuccessResponse
{
    _Bool _isEphemeral;
    _Bool _isLoggedIn;
    NSString *_context;
    NSNumber *_mpid;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(retain, nonatomic) NSNumber *mpid; // @synthesize mpid=_mpid;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
- (id)initWithJsonObject:(id)arg1;

@end

