//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PDMQTipsPage;

@protocol PDMQTipsNetworkAPI <NSObject>
- (void)logShoppingAidImpression:(long long)arg1 elementIdentifer:(NSString *)arg2 saType:(NSString *)arg3;
- (void)qtipsForPage:(PDMQTipsPage *)arg1 success:(void (^)(struct NSArray *))arg2 failure:(void (^)(NSString *))arg3;
@end
