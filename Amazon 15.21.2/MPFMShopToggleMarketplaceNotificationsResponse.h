//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MPFMShopToggleMarketplaceNotificationsResponse : CoralModel <NSCoding, NSCopying>
{
    NSNumber *_marketplaceSupportsNotifications;
    NSString *_marketplaceId;
}

+ (id)type;
@property(copy, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(retain, nonatomic) NSNumber *marketplaceSupportsNotifications; // @synthesize marketplaceSupportsNotifications=_marketplaceSupportsNotifications;
- (void).cxx_destruct;

@end

