//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface ComAmazonModelIdentityService_GetPseudoIdTokenResponse : CoralModel <NSCoding, NSCopying>
{
    NSString *_token;
    NSNumber *_expiration;
}

+ (id)type;
@property(retain, nonatomic) NSNumber *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

