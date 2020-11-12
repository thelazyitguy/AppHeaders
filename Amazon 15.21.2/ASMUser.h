//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ASMUser : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_directedId;
    NSString *_appInstallId;
    NSString *_marketplaceId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(readonly, nonatomic) NSString *appInstallId; // @synthesize appInstallId=_appInstallId;
@property(readonly, nonatomic) NSString *directedId; // @synthesize directedId=_directedId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)refreshATZToken;
- (id)atzToken;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDirectedId:(id)arg1 withAppInstallId:(id)arg2 withMarketplaceId:(id)arg3;

@end
