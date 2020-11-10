//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFManifestAccess/VideoTrackAccess.h>

@class NSDictionary, NSSet;

@interface FilteredVideoTrackAccess : VideoTrackAccess
{
    NSSet *_filteredStreamDownloadableIds;
    NSDictionary *_dupeDlidToResolutions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *dupeDlidToResolutions; // @synthesize dupeDlidToResolutions=_dupeDlidToResolutions;
@property(copy, nonatomic) NSSet *filteredStreamDownloadableIds; // @synthesize filteredStreamDownloadableIds=_filteredStreamDownloadableIds;
- (unsigned long long)streamCount;
- (void)enumerateVideoStreams:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 filteredDownloadableIds:(id)arg2 dupeDownloadableIdsToResolutions:(id)arg3;

@end

