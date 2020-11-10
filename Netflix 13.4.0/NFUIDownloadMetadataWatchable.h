//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIDownloadMetadataContent.h"

@class NSDictionary, NSSet, NSString;

@interface NFUIDownloadMetadataWatchable : NFUIDownloadMetadataContent
{
    NSSet *_associateIds;
    NSDictionary *_metadataURLMap;
    NSString *_accountOwnerGuid;
    NSString *_profileGuid;
    NSString *_xid;
    NSString *_bif;
    unsigned long long _hookMomentPosition;
    unsigned long long _logicalEndPosition;
    unsigned long long _openingCreditsEnd;
    unsigned long long _openingCreditsStart;
    unsigned long long _runtime;
    double _timestamp;
    long long _trackId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long runtime; // @synthesize runtime=_runtime;
@property(readonly, nonatomic) unsigned long long openingCreditsStart; // @synthesize openingCreditsStart=_openingCreditsStart;
@property(readonly, nonatomic) unsigned long long openingCreditsEnd; // @synthesize openingCreditsEnd=_openingCreditsEnd;
@property(readonly, nonatomic) unsigned long long logicalEndPosition; // @synthesize logicalEndPosition=_logicalEndPosition;
@property(readonly, nonatomic) unsigned long long hookMomentPosition; // @synthesize hookMomentPosition=_hookMomentPosition;
@property(readonly, copy, nonatomic) NSString *bif; // @synthesize bif=_bif;
@property(readonly, copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(readonly, copy, nonatomic) NSString *profileGuid; // @synthesize profileGuid=_profileGuid;
@property(readonly, copy, nonatomic) NSString *accountOwnerGuid; // @synthesize accountOwnerGuid=_accountOwnerGuid;
- (id)asMovie;
- (id)asEpisode;
- (void)bifData:(CDUnknownBlockType)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)metadataURLMap;
- (id)associateIds;
- (void)processMetadataURLMap:(id)arg1;
- (void)processAssociateIds:(id)arg1;

@end

