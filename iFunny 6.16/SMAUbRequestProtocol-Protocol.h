//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SMAUbRequestProtocol <NSObject>
@property(copy, nonatomic) NSString *publisherId;
- (unsigned long long)maxAdContentRating;
- (NSDictionary *)keyValuePairs;
- (double)timeout;
- (_Bool)isFullscreen;
- (unsigned long long)adHeight;
- (unsigned long long)adWidth;
- (unsigned long long)adFormat;
- (NSString *)adspaceId;
@end
