//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTBAdIdentifiers : NSObject
{
}

+ (id)sharedAdIdentifiers;
- (_Bool)isATSEnabled;
- (_Bool)advertisingTrackingEnabled;
@property(readonly, nonatomic) NSString *md5Idfa;
@property(readonly, nonatomic) NSString *sha1Idfa;
@property(readonly, nonatomic) NSString *idfa;
- (void)refreshUpdateTime;
- (id)retrieveAdId;
- (void)persistAdId:(id)arg1;
- (void)eraseAdId;

@end
