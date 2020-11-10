//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlatformCommon/NSCopying-Protocol.h>

@class NSString;
@protocol PlatformConfigProvider;

@interface MovieOpenRequest : NSObject <NSCopying>
{
    _Bool _branching;
    id <PlatformConfigProvider> _platformConfig;
    NSString *_movieId;
    NSString *_playbackId;
    NSString *_offlineTransactionId;
    NSString *_downloadTransactionId;
    NSString *_prereleasePIN;
    long long _trackingId;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBranching) _Bool branching; // @synthesize branching=_branching;
@property(nonatomic) long long trackingId; // @synthesize trackingId=_trackingId;
@property(retain, nonatomic) NSString *prereleasePIN; // @synthesize prereleasePIN=_prereleasePIN;
@property(retain, nonatomic) NSString *downloadTransactionId; // @synthesize downloadTransactionId=_downloadTransactionId;
@property(retain, nonatomic) NSString *offlineTransactionId; // @synthesize offlineTransactionId=_offlineTransactionId;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(retain, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(retain, nonatomic) id <PlatformConfigProvider> platformConfig; // @synthesize platformConfig=_platformConfig;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

