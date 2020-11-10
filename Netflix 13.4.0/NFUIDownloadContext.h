//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface NFUIDownloadContext : NSObject
{
    NSNumber *_trackId;
    NSString *_profileId;
    NSString *_requestId;
    NSNumber *_row;
    NSNumber *_rank;
    NSString *_downloadTransactionId;
    NSString *_offlineTransactionId;
    NSNumber *_downloadUtcSeconds;
    NSString *_displayTitle;
    NSData *_displayArt;
    NSNumber *_smartDownload;
    NSString *_sourceShadowCacheId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceShadowCacheId; // @synthesize sourceShadowCacheId=_sourceShadowCacheId;
@property(copy, nonatomic) NSNumber *smartDownload; // @synthesize smartDownload=_smartDownload;
@property(retain, nonatomic) NSData *displayArt; // @synthesize displayArt=_displayArt;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSNumber *downloadUtcSeconds; // @synthesize downloadUtcSeconds=_downloadUtcSeconds;
@property(copy, nonatomic) NSString *offlineTransactionId; // @synthesize offlineTransactionId=_offlineTransactionId;
@property(copy, nonatomic) NSString *downloadTransactionId; // @synthesize downloadTransactionId=_downloadTransactionId;
@property(copy, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSNumber *row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property(copy, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
- (id)dictionaryRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
