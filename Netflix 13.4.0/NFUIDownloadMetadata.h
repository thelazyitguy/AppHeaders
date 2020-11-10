//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

#import "NFUIDownloadMetadataProtocol-Protocol.h"

@class NSString;

@interface NFUIDownloadMetadata : NFLXGeneratedObject <NFUIDownloadMetadataProtocol>
{
    NSString *_entityId;
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
- (id)asWatchable;
- (void)loadThumbnailForKey:(id)arg1 maxSize:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)loadDataForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

