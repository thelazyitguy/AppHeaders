//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface KSPushInformation : CoralModel <NSCoding, NSCopying>
{
    NSString *_provider;
    NSString *_providerKey;
    NSString *_secret;
    NSString *_protocol;
}

+ (id)type;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *providerKey; // @synthesize providerKey=_providerKey;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;

@end
